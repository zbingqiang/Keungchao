#pragma once

#include<iostream>
#include<list>
#include<iterator>
#include<vector>
using namespace std;

void funList()
{
	// test for usage of contaioner
	vector<int> vec1(4);
	//-------------------初始化：列表初始化、用其它容器、数组等都可以进行初始化--------
	list<int> lis1(vec1.begin(),vec1.begin() + 3);
	lis1.assign(vec1.begin(), vec1.begin() + 3);
	//list<int> lis2(lis1.begin(), lis1.begin()+ 3); //error ,no random access ,also for iterator of list 

	list<int> test;
	list<int> list1(test.begin(),test.end());

	//-------------------添加元素-------------------------
	//首尾添加：push_back、push_front
	//任意位置添加：splice(pos,c2,beg,end),后两个参数可省略
	list1.push_back(2);
	list1.push_front(1);
	copy(list1.cbegin(), list1.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;
	vector<int> test1 = { 2, 3, 5, 6, 6, 7, 8 };
	//list1.assign(test1.cbegin(), test1.cend());
	list<int> list2(test1.begin(), test1.end());
	//list1.splice(list1.begin(), list2, list2.cbegin(), list2.cend());

	//---------------------合并------------------------
	//merge：合并已排序的元素
	//splice：将另一个list容器拷贝到指定的容器中

	list1.merge(list2);
	copy(list1.cbegin(), list1.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;
	list1.sort();
	copy(list1.cbegin(), list1.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;

	//--------------------删除------------------
	//删除重复元素：unique：删除重复只保留一个
	//              remove(val)：删除所有值为val的元素
	//              remove_if(op)：删除满足op条件的元素
	//              erase(pos)：删除pos位置的元素，返回下一个元素的位置
	//              erase(beg,end)：指定区间的元素
	list1.unique();
	copy(list1.cbegin(), list1.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;


}