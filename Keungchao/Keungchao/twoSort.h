#pragma once;
#include<iostream>
#include<vector>
using namespace std;

void findByTwoDivide(const vector<int> &array, int goal)
{
	auto begin = array.begin(), end = array.end();
	auto mid = begin + (end - begin) / 2;
	while (mid != end && *mid != goal)
	{
		if (goal <*mid)
			end = mid;
		else begin = mid + 1;
		mid = begin + (end - begin) / 2;
	}
	if (begin==end) cout << "not found" << endl;
	else cout << "fould "<< endl;
}
