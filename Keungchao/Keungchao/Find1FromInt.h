#pragma once
#include<iostream>
using namespace std;

int find1FromInt(int nums)
{
	int counts=0;
	while (nums)
	{
		++counts;
		nums = (nums - 1)&nums;
	}
	return counts;
}