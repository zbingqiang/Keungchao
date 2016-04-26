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
	//-------------------��ʼ�����б��ʼ��������������������ȶ����Խ��г�ʼ��--------
	list<int> lis1(vec1.begin(),vec1.begin() + 3);
	lis1.assign(vec1.begin(), vec1.begin() + 3);
	//list<int> lis2(lis1.begin(), lis1.begin()+ 3); //error ,no random access ,also for iterator of list 

	list<int> test;
	list<int> list1(test.begin(),test.end());

	//-------------------���Ԫ��-------------------------
	//��β��ӣ�push_back��push_front
	//����λ����ӣ�splice(pos,c2,beg,end),������������ʡ��
	list1.push_back(2);
	list1.push_front(1);
	copy(list1.cbegin(), list1.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;
	vector<int> test1 = { 2, 3, 5, 6, 6, 7, 8 };
	//list1.assign(test1.cbegin(), test1.cend());
	list<int> list2(test1.begin(), test1.end());
	//list1.splice(list1.begin(), list2, list2.cbegin(), list2.cend());

	//---------------------�ϲ�------------------------
	//merge���ϲ��������Ԫ��
	//splice������һ��list����������ָ����������

	list1.merge(list2);
	copy(list1.cbegin(), list1.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;
	list1.sort();
	copy(list1.cbegin(), list1.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;

	//--------------------ɾ��------------------
	//ɾ���ظ�Ԫ�أ�unique��ɾ���ظ�ֻ����һ��
	//              remove(val)��ɾ������ֵΪval��Ԫ��
	//              remove_if(op)��ɾ������op������Ԫ��
	//              erase(pos)��ɾ��posλ�õ�Ԫ�أ�������һ��Ԫ�ص�λ��
	//              erase(beg,end)��ָ�������Ԫ��
	list1.unique();
	copy(list1.cbegin(), list1.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;


}