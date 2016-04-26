#pragma once

#include<map>
#include<vector>
#include<iostream>
#include<functional>
using namespace std;

// ������������������򣬿ɶ���Ϊ������߽���Ĭ��������
typedef map<string, int, less<string>>    lessMap;
typedef map<string, int, greater<string>> greaterMap;

// ����ѡȡʱѡȡ��ӽ��ģ�����û��Ҫ��˳��ʱ�ɲ���unordered_map

void funMap()
{
	//--------------------��ʼ��----------------
	// ��ʼ��Ҫ��ͬ�͵�������ʼ����������map��ʼ��map����ͬ��ͨ�����뵫���в��ɹ�
	// ����ֱ���б��ʼ�������������������Խ����б��ʼ��-------����г�ʼֵʱ�����б��ʼ��
	// ����Ϊ��������
	/*vector<string> myVector = { "keungchao", "Dany" };
	greaterMap test(myVector.begin(), myVector.end());
	for (auto v : test)
		cout << v.second << endl;*/
	// �б��ʼ��
	greaterMap test = { { "keungchao", 2 },
	                    { "dany", 1 }   };
	
	//---------------------����-------------
	//����õ�һ��make_pair()��ʽ
	//���±���ʽ���д���������������secondԪ�ؽ��и�ֵ��������������µļ�ֵ��
	test["Keungchao"] = 20;    //���뷽ʽ��һ���map���巽ʽ����ԭ������Ҫ�ȵ��ù��캯����ʼ��ʵֵ��Ȼ����и���
	test.insert(make_pair("sc", 22));
	//�鷳�ķ�ʽ
	test.insert(pair<string, int>("keungchao", 24));
	test.insert(pair<string, int>("dany", 23));
	test.insert(pair<string, int>("yjw", 23));
	test.insert(pair<string, int>("gjr", 22));
	test.insert(map<string, int>::value_type("hw", 22));

	//---------------------ɾ��Ԫ��------------
	test.erase("gjr");   //��key����ɾ������multimapɾ�����У�����ɾ����һ����find�ҵ���һ����λ�ã�Ȼ��erase����
	//greaterMap::iterator beg = test.begin();
	//��ϵ���������ɾ������
	for (auto pos = test.begin(); pos != test.end();)
	{
		if (20 == pos->second)
			test.erase(pos++); 
		else
			++pos;
	}

	//-------------------------�ı�pair-------------------
	// ��key
	test["KEUNGCHAO"] = test["Keungchao"];  //ǰ�����µ�key�����ڲ����ڻ��ȴ���һ��
	test.erase("Keungchao");    //ɾ���ɵļ�ֵ��
	// ��value
	test["KEUNGCHAO"] = 24;
	//�����õ���������֮��ibeg->second = new value


	//---------------------��������-------------
	//count(key)������val�ĸ�����ֻ������multiset����
	//find(key)������Ԫ��ֵΪval�ĵ�һ��Ԫ�صĵ��������Ҳ����ͷ���end() �� ��map�о��ǲ���ʱ����ڣ���multimap�о����ҵ�һ��Ԫ��
	// �����ɰ����Ԫ��λ�ã�lower_bound(val): >=val �ĵ�һ��λ��
	//                     : upper_bound(val)��> val �ĵ�һ��λ��

	// ����������
	// ����������Ԫ�� ibeg->first ��(*ibeg).first���������û�ü�ֵ��֮����.�������ʣ�ֱ���õ�����Ҫ��->���ʣ�����ú���
	// auto v:test ���б�����vΪ��ֵ�Զ��ǵ���������ʱֻ����.����������
	for (auto v : test)
	{		
		if (20 == v.second)
			test.erase(v.first);
	}
	for (greaterMap::iterator ibeg = test.begin(); ibeg != test.end(); ++ibeg)
	{
		ibeg->second = 100;
		//cout << ibeg->first << endl;
	}
	
}