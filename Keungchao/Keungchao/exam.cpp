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



