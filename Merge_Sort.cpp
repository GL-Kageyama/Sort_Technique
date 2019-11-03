//==============================================================
//----------------          Merge Sort          ----------------
//==============================================================
// Multiple columns into a single column, 
// order them in ascending order.
//==============================================================
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template < class RandomIter >

void Merge_Sort(RandomIter first, RandomIter last){

	auto diff = last - first;

	if (diff <= 1){
		return;
	}

	RandomIter middle = first + diff / 2;
	Merge_Sort(first, middle);
	Merge_Sort(middle, last);
	std::inplace_merge(first, middle, last);
}


int main(){
	
	vector<int> vec {2, 5, 8, 3, 9, 12, 23, 18, 4, 3, 6, 11,
	                 9, 17, 22, 31, 1, 3, 18, 20, 23, 25, 2};

	Merge_Sort(vec.begin(), vec.end());

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

