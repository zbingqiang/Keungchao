#pragma once
#include<iostream>
#include<set>
#include<vector>
#include<functional>   //模板元编程
using namespace std;

void funSet()
{
	//-----------------初始化-----------
	//所有容器共通的初始化方式
	vector<int> myVector = { 1, 2, 3, 4 };  
	set<int,greater<int>> mySet(myVector.begin(),myVector.end());  //定义set时如果初始化元素中重复，则去掉重复的元素
	/*for (auto v : mySet)
		cout << v << " ";
	cout << endl;*/
	// 第二个参数指定排序规则，默认是less<int>,可指定为greater<int>，模板元编程：自定义排序规则
	// 指定元素的排列顺序就可以不再逆序访问了：京东的排序问题

	//-----------------搜索-------
	//count(val)：返回val的个数，只适用于multiset容器
	//find(val)：返回元素值为val的第一个元素的迭代器，找不到就返回end()
	multiset<int> test1 = { 1, 5, 1, 3, 5 }; 
	auto index = test1.find(1);
	if (index != test1.end())
		cout << *index << endl;
	else
		cout << "no this value" << endl;
	cout <<"count of 1 is:" << test1.count(1) << endl;
	//搜索可安插的元素位置：lower_bound(val): >=val 的第一个位置
	                 //   : upper_bound(val)：> val 的第一个位置

	//---------------插入和移除------------
	// insert(pos,val)：第一个参数可省，pos为建议插入的位置，返回新元素的位置
	// c.insert(beg,end)：将beg，end区间元素安插在c中
	//set和multiset对应insert返回值不同：前者返回pair<iterator,bool>标志是否插入成功，后者只返回迭代器，
	pair<set<int>::iterator, bool> status;
	status = mySet.insert(3);
	if (status.second)
		cout << "inserted as element";
	else
		cout << "already exists as element";
	// 移除：erase(val)：移除元素为val的元素并返回移除元素的个数，如果只是统计用count，移除并统计用erase()
	// 序列容器：返回迭代器 ；  关联容器：返回void（对参数不是val的版本）
	
	//cout << *test1.lower_bound(4) << endl;
	//cout << *test1.upper_bound(4) << endl;
	////在multiset中应用
	//cout << *test1.equal_range(4).first << " "
	//	<< *test1.equal_range(4).second << endl;


}