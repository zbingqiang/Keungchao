#pragma once

#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

void funVector()
{
	vector<int> test2 = {1, 2, 3, 4, 5, 3, 4, 3};
	reverse(test2.begin(), test2.end());
	//copy(test2.begin(), test2.end(), ostream_iterator<int>(cout, " "));
	//移除所有值为3的元素
	//test2.erase(remove(test2.begin(), test2.end(), 3), test2.end());
	copy(test2.cbegin(), test2.cend(), ostream_iterator<int>(cout, " "));
}