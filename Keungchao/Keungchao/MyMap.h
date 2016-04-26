#pragma once

#include<map>
#include<vector>
#include<iostream>
#include<functional>
using namespace std;

// 第三个参数是排序规则，可定义为升序或者降序，默认是升序
typedef map<string, int, less<string>>    lessMap;
typedef map<string, int, greater<string>> greaterMap;

// 容器选取时选取最接近的：比如没有要求顺序时可采用unordered_map

void funMap()
{
	//--------------------初始化----------------
	// 初始化要用同型的容器初始化：比如用map初始化map，不同型通过编译但运行不成功
	// 可以直接列表初始化，即所有容器都可以进行列表初始化-------如果有初始值时采用列表初始化
	// 以下为错误用例
	/*vector<string> myVector = { "keungchao", "Dany" };
	greaterMap test(myVector.begin(), myVector.end());
	for (auto v : test)
		cout << v.second << endl;*/
	// 列表初始化
	greaterMap test = { { "keungchao", 2 },
	                    { "dany", 1 }   };
	
	//---------------------插入-------------
	//最好用第一个make_pair()形式
	//用下标形式进行创建，如果存在则对second元素进行赋值，不存在则添加新的键值对
	test["Keungchao"] = 20;    //插入方式比一般的map安插方式慢，原因是需要先调用构造函数初始化实值，然后进行覆盖
	test.insert(make_pair("sc", 22));
	//麻烦的方式
	test.insert(pair<string, int>("keungchao", 24));
	test.insert(pair<string, int>("dany", 23));
	test.insert(pair<string, int>("yjw", 23));
	test.insert(pair<string, int>("gjr", 22));
	test.insert(map<string, int>::value_type("hw", 22));

	//---------------------删除元素------------
	test.erase("gjr");   //按key进行删除，对multimap删除所有，如想删除第一个用find找到第一个的位置，然后erase掉。
	//greaterMap::iterator beg = test.begin();
	//结合迭代器进行删除操作
	for (auto pos = test.begin(); pos != test.end();)
	{
		if (20 == pos->second)
			test.erase(pos++); 
		else
			++pos;
	}

	//-------------------------改变pair-------------------
	// 改key
	test["KEUNGCHAO"] = test["Keungchao"];  //前者是新的key，由于不存在会先创建一个
	test.erase("Keungchao");    //删除旧的键值对
	// 改value
	test["KEUNGCHAO"] = 24;
	//或者用迭代器访问之后ibeg->second = new value


	//---------------------搜索操作-------------
	//count(key)：返回val的个数，只适用于multiset容器
	//find(key)：返回元素值为val的第一个元素的迭代器，找不到就返回end() ： 在map中就是查找时候存在，在multimap中就是找第一个元素
	// 搜索可安插的元素位置：lower_bound(val): >=val 的第一个位置
	//                     : upper_bound(val)：> val 的第一个位置

	// 遍历分析：
	// 迭代器访问元素 ibeg->first ；(*ibeg).first，即解引用获得键值对之后用.操作访问，直接用迭代器要用->访问，最好用后者
	// auto v:test 进行遍历，v为键值对而非迭代器，这时只能用.操作来访问
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