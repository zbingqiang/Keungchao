#include<iostream>
#include<algorithm>
#include<deque>
#include<list>
#include<map>
#include "KMP.h"
#include "insert_sort.h"
#include "Acculate.h"
#include<iterator>
#include<vector>
#include<string>
#include<set>
#include "min.h"
#include "twoSort.h"
#include "Find1FromInt.h"
#include "Power.h"
#include "Print.h"
#include "sushu.h"
using namespace std;

//int gcd(int a, int b);

//template <class T> int getArrayLen(T & array)
//{
//	return (sizeof(array) / sizeof(array[0]));//对字符串sizeof(array[0]-1);
//}

typedef map<string, int> StringIntMap;


int main()
{
	
		//string str;
		//cin >> str;
		//set<char> result;
		//for (auto index = str.cbegin(); index < str.cend(); ++index)
		//	result.insert(*index);
		//for (auto v : result)
		//	cout << v << " ";
	list<int> ss;


	/*
	set<string> coll((istream_iterator<string>(cin)),
						(istream_iterator<string>()));	
	copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, "\n"));*/
	/*char test1[] = { '1', '2', '3' };
	char test2[] = { '1', '2', '3' };
	strcmp(test1, test2);*/

	//统计字符串中字母的个数
	/*map<char, int> result;
	string str;
	cin >> str;
	for (auto &v : str)
	{
		v = tolower(v);
		++result[v];
	}	
	for (auto v : result)
		cout << v.first << " " << v.second << endl;*/
	//int array[] = { 1, 3, 6, 4, 7, 2 };
	//sort(array, array + 6);
	//cout << "-------------------Output of array----------------------" << endl;
	//for (int i = 0; i < 6; ++i)
	//	cout << array[i] << " ";
	//cout << endl;

	//map<string, int> test ;
	//test.insert(pair<string, int>("Keungchao", 24));
	//test.insert(pair<string, int>("Dany", 23));
	//test.insert(pair<string, int>("yjw", 23));
	//test.insert(pair<string, int>("gjr", 22));
	//test.insert(map<string, int>::value_type("hw", 22.3));
	//test.insert(StringIntMap::value_type("xl", 50));
	//test.insert(make_pair("sc", 22));

	//cout << "---------------------The original information-------------" << endl;
	//for (auto v : test)
	//	cout << v.first << " " << v.second << endl;

	////dangerious 
	//cout << "-------------------------Delete -------------------------" << endl;
	////not safe  delete based on value
	///*map<string, int>::iterator index = test.find("Keungchao");
	//if (index != test.end())
	//test.erase(index);*/
	////safe ---delete base on value
	//for (auto pos = test.begin(); pos != test.end();)
	//{
	//	if (22 == pos->second)
	//		test.erase(pos++);
	//	else ++pos;
	//}
	//test.erase("bage");
	//for (auto v : test)
	//	cout  <<v.first << " " << v.second << endl;

	//cout << "--------------------------Change -------------------------" << endl;
	//test["dany"] = test["Dany"];
	//test.erase("Dany");
	///*map<string, int>::iterator index2 = test.find("Dany");
	//index2->second = 18;*/
	//for (auto v : test)
	//	cout << v.first << " " << v.second << endl;

	//字符串匹配问题
	/*char str[] = "ABCDABD";
	char test[] = "D";
	cout << KMP(str, test) << endl;;*/
	
	/*float str = 2.56666;
	int str_int=static_cast<int>(str);
	cout << str_int << endl;*/

	//CBuyTransaction b;
	//------test for sort
	//int a[] = { 7,4,6,8,3,5};
	/*string b[] = { "chongqing", "shanghai", "AoMen", "Tianjin" };
	vector<string> vb = vector<string>(b, b + 3);
	insertSort(vb.begin(), vb.end());*/
	////copy(vb.begin(), vb.end(), ostream_iterator<string>(cout, " "));
	//int N=getArrayLen(a);
	//insert_sort(a);
	////insertSort(a, a + 1);
	//for (int i = 0; i < N; ++i)
	//	cout << a[i] << " ";

	/*int n = 100;
	int m=fun(n);
	cout << m << endl;*/
	//int a[10];
	/*const vector<int> test = { 1,2,3,5,6,8,10 };
	int goal = 5;
	findByTwoDivide(test, goal);*/
	//int n = -1;
	//cout << find1FromInt(n) << endl;
	/*double base =1000000000000;
	int exponent = 100;
	cout << Power(base, exponent) << endl;*/
	/*for (auto beg = test.begin(), end = test.end(); beg != end;++beg)
		cout << *beg<<" ";*/
	/*char s1 = '0', s2 = '1';
	int i = s1 - s2;
	cout << i << endl;*/
	/*int n = 2;
	Print(n);*/

	//int i = 2;
	/*int a = 10, b = 22;
	int c = (a & b)  + ((a ^ b)>>1);
	cout << c << endl;*/
	/*int a = 9;
	int *p = &a;
	cout << p << endl;*/

	/*int x = 10, y = 10, i;

	for (i = 0; x > 8; y = i++)
	{
		printf(" %d, %d,", x--, y);
	}*/


	//vector<int> test2 = {1, 2, 3, 4, 5, 3, 4, 3};
	//copy(test2.begin(), test2.end(), ostream_iterator<int>(cout, " "));
	//cout << endl;
	////移除所有值为3的元素
	//test2.erase(remove(test2.begin(), test2.end(), 3), test2.end());
	//copy(test2.cbegin(), test2.cend(), ostream_iterator<int>(cout, " "));
	
	/*set<int> test1 = { 1, 5, 1, 3, 5 };
	test1.find(1);
	cout << test1.count(1) << endl;
	cout<<*test1.insert(test1.begin(), 1)<<endl;*/
	//pair<set<int>::iterator, bool> status;
	//status = test1.insert(2);
	//if (status.second)
	//{
	//	cout << "inserted as element";
	//}
	//else
	//{
	//	cout << "already exists as element";
	//}
	//cout << *test1.lower_bound(4) << endl;
	//cout << *test1.upper_bound(4) << endl;
	////在multiset中应用
	//cout << *test1.equal_range(4).first << " "
	//	<< *test1.equal_range(4).second << endl;

	//deque<int> test;
	//list<int> list1(test.begin(),test.end());
	//list1.push_back(2);
	//list1.push_front(1);
	//copy(list1.cbegin(), list1.cend(), ostream_iterator<int>(cout, " "));
	//cout << endl;
	//vector<int> test1 = { 2, 3, 5, 6, 6, 7, 8 };
	////list1.assign(test1.cbegin(), test1.cend());
	//list<int> list2(test1.begin(), test1.end());
	////list1.splice(list1.begin(), list2, list2.cbegin(), list2.cend());
	//list1.merge(list2);
	//copy(list1.cbegin(), list1.cend(), ostream_iterator<int>(cout, " "));
	//cout << endl;
	//list1.sort();
	//copy(list1.cbegin(), list1.cend(), ostream_iterator<int>(cout, " "));
	//cout << endl;
	//list1.unique();
	//copy(list1.cbegin(), list1.cend(), ostream_iterator<int>(cout, " "));
	//cout << endl;

	//cout << endl;
	////copy(test2.rbegin(), test2.rend(), ostream_iterator<int>(cout, " "));
	//cout << endl;
	//cout << "2 max_size()" << test2.max_size() << endl;
	//cout << "2 capactity()" << test2.capacity() << endl;

	//vector<int> test3 = test2;
	//cout << "3 max_size()" << test3.max_size() << endl;
	//cout << "3 capactity()" << test3.capacity() << endl;

	//vector<int> test4(test2);
	//cout << "4 max_size()" << test4.max_size() << endl;
	//cout << "4 capactity()" << test4.capacity() << endl;

	//vector<int> test5(test2.begin(),test2.begin()+2);
	//cout << "4 max_size()" << test5.max_size() << endl;
	//cout << "4 capactity()" << test5.capacity() << endl;
	//cout << "4 capactity()" << test5.size() << endl;

	////cout << test2.at(10) << endl;
	////cout << test2[10] << endl;
	//int n = 2;
	//vector<int> teee(n);
	//copy(teee.begin(), teee.end(), ostream_iterator<int>(cout, " "));

/*string str;
cin >> str;
multimap<char, int> result = reOrder(str);
multimap<char, int>::iterator ibeg = result.begin();
for (size_t i = 0; i < str.size(); ++i)
{
if (str[i] == 'U')
cout << 'U';
else
{
cout << str[(*ibeg).second];
++ibeg;
}
}
cout << endl;*/


//std::string str;
//cin >> str;
//cout << str << endl;
//std::string str2 = "Writing";
//cout << str2.length() << endl;
//cout << str2.size() << endl;
//std::string str3 = "print 10 and then 5 more";

//// used in the same order as described above:
//str.append(str2);                       // "Writing "
//str.append(str3, 6, 3);                   // "10 "
//str.append("dots are cool", 5);          // "dots "
//str.append("here: ");                   // "here: "
//str.append(10u, '.');                    // ".........."
//str.append(str3.begin() + 8, str3.end());  // " and then 5 more"
//str.push_back('k');
//std::cout << str << '\n';

/*string str1 = "1111";
char *p = str1.c_str();*/

//cout << k << endl;
/*vector<string> data;
int i = 0;
string str;
while (getline(cin, str, ','))
data.push_back(str);
for (auto v : str)
cout << v;*/
//string str = " ";
//cout << lengthOfLastWord(str) << endl;

	system("pause");
	return 0;
}

