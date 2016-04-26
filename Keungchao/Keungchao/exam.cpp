#include<iostream>
#include "exam.h"


// 华为 2：消星星
vector<int>& remove_start(vector<int>& num)
{
	int count = 1;
	list<int> nlist(num.begin(), num.end());
	int len = 0;
	while (len != nlist.size())
	{
		len = nlist.size();
		for (auto ibeg = nlist.begin(); ibeg != nlist.end();)
		{
			list<int>::iterator start = ibeg;
			while (++ibeg != nlist.end() && *start == *ibeg)
				++count;
			if (count >= 3)
				nlist.erase(start, ibeg);
			count = 1;
		}
	}
	num.clear();
	for (auto v : nlist)
		num.push_back(v);
	return num;
}

// 优酷土豆 1：不重复字符串
char first_unrepeat1(string & str)
{
	int len = str.size();
	if (0 == len)
		return NULL;
	set<char> table;
	set<char>::iterator itable;
	for (int i = 0; i < len; ++i)
	{
		itable = table.find(str[i]);
		if (itable == table.end())
		{
			int index = i + 1;
			while (index < len && str[index] != str[i])
				++index;
			if (index == len)
				return str[i];
			table.insert(str[i]);
		}
	}
	return str[0]; //在不存在的情况下，即全相同时的处理
}

char first_unrepeat2(string & str)
{
	int count[256] = { 0 };
	for (auto v : str)
		++count[v];
	for (auto v : str)
	if (1 == count[v])
		return v;
	return str[0]; //在不存在的情况下，即全相同时的处理
}

// 优酷土豆：解码
string decode(string & str)
{
	if (str.empty())
		return NULL;
	string result;
	int len = str.size();
	int times = 0;
	for (int i = 0; i < len;)
	{
		int j = i, k = i;
		while (!isdigit(str[j]) && j < len)
			++j;
		k = j + 1;
		while (isdigit(str[k]) && k < len)
			++k;
		times = atoi(str.substr(j, k - j).c_str());
		while (times--)
			result += str.substr(i, j - i);
		i = k;
	}
	return result;
}

vector<int> FindNumbersWithSum(vector<int> array, int sum) {
	vector<int> result;
	int goal;
	for (auto ibeg = array.begin(); ibeg != array.end() - 1; ++ibeg)
	{
		goal = sum - *ibeg;
		if (goal < *ibeg || goal > array.back())
			return result;
		else
			for (auto jbeg = ibeg + 1; jbeg != array.end(); ++jbeg)
			{
				if (goal == *jbeg)
				{
					result.push_back(*ibeg);
					result.push_back(*jbeg);
					return result;
				}
			}
	}
	return result;
}


bool solution(string &S, string &T)
{
	int index = 0;
	string temp(100, '0');

	for (size_t ibeg = 0; ibeg < T.size();)
	{
		int beg = ibeg;
		int num = 0;
		while (T[ibeg++] >= '0' && T[ibeg++] <= '9')
			;
		while (beg != ibeg)
		{
			num = 10 * num + T[beg] - '0';
			++beg;
		}

		for (size_t j = 0; j < num; ++j)
			temp[index++] = '?';

		if (T[ibeg] < '0' || T[ibeg] > '9')
		{
			temp[index] = T[ibeg];
			++index;
			++ibeg;
		}
	}

	cout << temp << endl;
	index = 0;
	for (size_t jbeg = 0; jbeg < S.size(); ++jbeg)
	{
		int end = jbeg;
		int num = 0;
		while (T[jbeg] >= '0' && T[jbeg] <= '9')
			++end;
		while (jbeg != end)
		{
			num = 10 * num + T[jbeg] - '0';
			++jbeg;
		}
		if (S[jbeg] < '0' || S[jbeg] > '9')
		{
			if (S[jbeg] != temp[index])
				return false;
			++index;
		}
		else
			jbeg += num;
	}
	return true;
}
