#pragma once

#include<iterator>
using namespace std;

//myself
template<class T> void insert_sort(T &a)
{
	int length = sizeof(a) / sizeof(a[0]);
	int i, j, temp;
	for (i = 1; i < length; ++i)
	{
		j = i;
		while (j>0 && a[j] < a[j - 1])
		{
			temp = a[j-1];
			a[j - 1] = a[j];
			a[j] = temp;
			--j;
		}

	}
}
// 最优的方法：利用STL库进行操作
template<class T> T& reverse_word(T &str)
{
	typename T::iterator pre = str.begin(), end = str.end(), i = pre;
	while (i != end)
	{
		i = find(pre, end, ' ');
		reverse(pre, i);
		pre = i + 1;
	}

	reverse(str.begin(), str.end());
	return str;
}

//from book
//template<typename Iterator> void insertSort(const Iterator &a, const Iterator &b)
//{
//	typedef typename iterator_traits<Iterator>::value_type T;
//	int i, j, len=distance(a,b);
//	T temp;
//	Iterator p, q, t;
//	for (i = 1, p = q = a, p++, t = p; i < len; q = p, p++, t = p)
//	{		
//		j = i;
//		while (j > 0 && *t<*q)
//		{
//			temp = *t;
//			*t = *q;
//			*q = *p;
//			--j, --t, --q;
//		}
//	}
//
//}

//template<typename Iterator> void insertSort(const Iterator &a, const Iterator &b)
//{
//	typedef typename iterator_traits<Iterator>::value_type T;
//	int i, j, len = distance(a, b);
//	T key;
//	Iterator p, q, t;
//	for (i = 1, p = q = a, p++, t = p; i < len; i++, q = p, p++, t = p)
//	{
//		key=*p;
//		j = i - 1;
//		while (j >= 0 && *q>key)
//		{
//			*t = *q;
//			--j, --t, --q;
//		}
//		*t = key;
//	}
//}

string trans(string s, int n) {
	// write code here
	if (n == 0) return s;
	string::iterator begin = s.begin();
	string::iterator end = s.end();
	string::iterator pre = begin;
	for (int i = 0; i<n; ++i)
	{
		if (s[i] == ' ')
		{
			pre = s.begin() + i;
			reverse(begin, pre);
			begin = pre + 1;
		}
		if (i == n - 1)
			reverse(begin, end);
	}
	reverse(s.begin(), s.end());
	for (int j = 0; j<n; ++j)
	{
		if (s[j] >= 'a' && s[j] <= 'z')
			s[j] -= 32;
		else if (s[j] >= 'A' && s[j] <= 'Z')
			s[j] += 32;
	}
	return s;
}