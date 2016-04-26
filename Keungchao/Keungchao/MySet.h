#pragma once
#include<iostream>
#include<set>
#include<vector>
#include<functional>   //ģ��Ԫ���
using namespace std;

void funSet()
{
	//-----------------��ʼ��-----------
	//����������ͨ�ĳ�ʼ����ʽ
	vector<int> myVector = { 1, 2, 3, 4 };  
	set<int,greater<int>> mySet(myVector.begin(),myVector.end());  //����setʱ�����ʼ��Ԫ�����ظ�����ȥ���ظ���Ԫ��
	/*for (auto v : mySet)
		cout << v << " ";
	cout << endl;*/
	// �ڶ�������ָ���������Ĭ����less<int>,��ָ��Ϊgreater<int>��ģ��Ԫ��̣��Զ����������
	// ָ��Ԫ�ص�����˳��Ϳ��Բ�����������ˣ���������������

	//-----------------����-------
	//count(val)������val�ĸ�����ֻ������multiset����
	//find(val)������Ԫ��ֵΪval�ĵ�һ��Ԫ�صĵ��������Ҳ����ͷ���end()
	multiset<int> test1 = { 1, 5, 1, 3, 5 }; 
	auto index = test1.find(1);
	if (index != test1.end())
		cout << *index << endl;
	else
		cout << "no this value" << endl;
	cout <<"count of 1 is:" << test1.count(1) << endl;
	//�����ɰ����Ԫ��λ�ã�lower_bound(val): >=val �ĵ�һ��λ��
	                 //   : upper_bound(val)��> val �ĵ�һ��λ��

	//---------------������Ƴ�------------
	// insert(pos,val)����һ��������ʡ��posΪ��������λ�ã�������Ԫ�ص�λ��
	// c.insert(beg,end)����beg��end����Ԫ�ذ�����c��
	//set��multiset��Ӧinsert����ֵ��ͬ��ǰ�߷���pair<iterator,bool>��־�Ƿ����ɹ�������ֻ���ص�������
	pair<set<int>::iterator, bool> status;
	status = mySet.insert(3);
	if (status.second)
		cout << "inserted as element";
	else
		cout << "already exists as element";
	// �Ƴ���erase(val)���Ƴ�Ԫ��Ϊval��Ԫ�ز������Ƴ�Ԫ�صĸ��������ֻ��ͳ����count���Ƴ���ͳ����erase()
	// �������������ص����� ��  ��������������void���Բ�������val�İ汾��
	
	//cout << *test1.lower_bound(4) << endl;
	//cout << *test1.upper_bound(4) << endl;
	////��multiset��Ӧ��
	//cout << *test1.equal_range(4).first << " "
	//	<< *test1.equal_range(4).second << endl;


}