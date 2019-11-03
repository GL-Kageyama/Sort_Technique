//==============================================================
//----------------          Quick Sort          ----------------
//==============================================================
// Select any number and move smaller numbers forward and 
// larger numbers backward.
// Then, the data divided into two is sorted again.
//==============================================================
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template < class RandomIter >

void Quick_Sort(RandomIter first, RandomIter last){

	if (last - first <= 1){
		return;
	}

	RandomIter i = first;
	RandomIter j = last - 1;

	for (RandomIter pivot = first;; ++i, --j){
		while (*i < *pivot){
			++i;
		}

		while (*pivot < *j){
			--j;
		}

		if (i >= j){
			break;
		}

		std::iter_swap(i, j);
	}

	Quick_Sort(first, i);
	Quick_Sort(j + 1, last);
}

int main(){
	
	vector<int> vec {2, 5, 8, 3, 9, 12, 23, 18, 4, 3, 6, 11,
	                 9, 17, 22, 31, 1, 3, 18, 20, 23, 25, 2};

	Quick_Sort(vec.begin(), vec.end());

	std::cout << "=============================";
	std::cout << "=============================\n";

	for (auto i = vec.begin(); i != vec.end(); i++){
		cout << ' ' << *i;
	}
	cout << endl;

	std::cout << "=============================";
	std::cout << "=============================\n";
}


//        -------       Output Sample      -------

//==========================================================
// 1 2 2 3 3 3 4 5 6 8 9 9 11 12 17 18 18 20 22 23 23 25 31
//==========================================================


