#pragma once

#include<iterator>

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
