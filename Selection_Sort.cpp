//==============================================================
//--------------          Selection Sort          --------------
//==============================================================
// Check all the elements in order and select the largest 
// and smallest ones.
//==============================================================
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template < class RandomIter >

void Selection_Sort(RandomIter first, RandomIter last){

	if (last - first <= 1){
		return;
	}

	for (; first != last; ++first){
		auto min = std:: min_element(first, last);
		std::iter_swap(first, min);
	}
}

int main(){
	
	vector<int> vec {2, 5, 8, 3, 9, 12, 23, 18, 4, 3, 6, 11,
	                 9, 17, 22, 31, 1, 3, 18, 20, 23, 25, 2};

	Selection_Sort(vec.begin(), vec.end());

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


