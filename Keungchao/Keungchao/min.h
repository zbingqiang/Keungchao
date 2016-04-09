#pragma once
#include<iostream>
using namespace std;

int Min(int *numbers, int length)
{
	if (numbers == NULL || length <= 0)
		throw exception("Invalid parameters");
	int start = 0;
	int end = length - 1;
	int mid = 0;
	while (numbers[start] >= numbers[end])
	{
		if (start + 1 == end)
			return end;
		break;
		mid = (start + end) / 2;
		if (numbers[mid] >= numbers[start])
			start = mid;
		else if (numbers[mid]<=numbers[end])
			end = mid;
		return numbers[mid];
	}
}

int Min(vector<int> numbers, int length)
{
	if (numbers.empty() || length <= 0)
		throw exception("Invalid parameters");
	int start = 0;
	int end = length - 1;
	int mid = 0;
	while (numbers[start] >= numbers[end])
	{
		if (start + 1 == end)
			return end;
		break;
		mid = (start + end) / 2;
		if (numbers[mid] >= numbers[start])
			start = mid;
		else if (numbers[mid] <= numbers[end])
			end = mid;
		return numbers[mid];
	}
}