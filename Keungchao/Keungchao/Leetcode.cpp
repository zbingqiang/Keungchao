#include "Leetcode.h"
#include<set>
#include<vector>
#include<math.h>

using namespace std;

Leetcode::Leetcode()
{
}

Leetcode::~Leetcode()
{
}

bool Leetcode::isHappy(int n)
{
	if (0 >= n)
		return false;
	else if (1 == n)
		return true;
	set<int> flag = { n };
	int square = 0;
	while (square != 1)
	{
		square = 0;
		while (0 != n)
		{
			square += pow(n % 10, 2);
			n /= 10;
		}
		n = square;
		if (flag.find(n) != flag.end())
			return false;
		else
			flag.insert(n);
	}
	return true;
}

int Leetcode::find1FromInt(int nums)
{
	int counts = 0;
	while (nums)
	{
		++counts;
		nums = (nums - 1)&nums;
	}
	return counts;
}
