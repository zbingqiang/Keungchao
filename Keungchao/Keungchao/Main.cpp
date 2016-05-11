#include<iostream>
#include<algorithm>
#include<deque>
#include<list>
#include<map>
#include<iterator>
#include<vector>
#include<string>
#include<set>
#include<hash_map>
#include<hash_set>
#include<sstream>
#include<cctype>

#include "MyVector.h"
#include "MySet.h"
#include "MyMap.h"
#include "MyHashMap.h"
#include "exam.h"
#include "KMP.h"
#include "Leetcode.h"

using namespace std;

int main()
{
	//funVector();
	/*char test[] = "hellow world";
	int length = sizeof(test) / sizeof(test[0]);
	replaceSpace(test, length);
	for (int i = 0; i < length + 2; ++i)
		cout << test[i];
	cout << endl;*/
	//华为机试消星星简化版的实现，只对其中一行进行实现
	/*vector<int> test = { 1, 4, 4 ,5, 3, 3, 3, 5, 5, 4 };
	vector<int> result = remove_start(test);
	for (auto v : result)
		cout << v << " ";*/
	//string test = "adadc";
	//cout << first_unrepeat1(test) << endl;
	//int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	/*deque<int> test;
	test.push_back(1);
	int &s = test.back();
	test.push_back(2);
	cout << s << endl;*/
	//string test = "1ssss1";
	//for (auto v : test)
	//{
	//	if (isdigit(v) != 0)  //isdigit()，返回的是int型的，若不是数字返回0，否则返回非0的int型，判断：if(isdigit(num[i]) != 0)
	//		cout << v << endl;
	//}
		
	//funHashMap();
	//Leetcode test;
	//cout << test.isHappy(2) <<endl;
	//funMap();
	// sort array using algorithm
	/*int num[] = { 1, 4, 2, 4, 2, 7, 4, 6, 5 };
	sort(num + 1, num + 9);
	for (size_t i = 0; i < sizeof(num) / sizeof(num[0]); ++i)
		cout << num[i] << " ";*/
	//京东第一题，2016.4.7晚
	/*int n, s, p, q;
	char classify;
	map<int, int> buy, sale;
	cin >> n >> s;
	while (0 != n--)
	{
	cin >> classify >> p >>q;
	if ('S' == classify)
	sale[p] += q;
	else if ('B' == classify)
	buy[p] += q;
	}

	if ( buy.size() + sale.size() <= s)
	{
	for (auto ibeg = sale.begin(); ibeg != sale.end(); ++ibeg)
	{
	cout << "S " << (*ibeg).first << " " << (*ibeg).second << endl;
	}
	for (auto ibeg = buy.rbegin(); ibeg != buy.rend(); ++ibeg)
	{
	cout << "B " << (*ibeg).first << " " << (*ibeg).second << endl;
	}
	}
	else
	{
	int size = 0;
	for (auto beg = sale.rbegin(); (beg != sale.rend()) && (size < s); ++beg, ++size)
	{
	cout << "S " << (*beg).first << " " << (*beg).second << endl;
	}
	size = 0;
	for (auto ibeg = buy.rbegin(); ibeg != buy.rend() && (size < s); ++ibeg, ++size)
	{
	cout << "B " << (*ibeg).first << " " << (*ibeg).second << endl;
	}
	}*/
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

	
	//deque<int> test;
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

//int gcd(int a, int b);
//template <class T> int getArrayLen(T & array)
//{
//	return (sizeof(array) / sizeof(array[0]));//对字符串sizeof(array[0]-1);
//}

//vector<int> getPartition(const vector<vector<int> >& land, int n, int m) {
//	// write code here
//	vector<int> sum(n + 1);
//	for (int k = 0; k <= n; ++k)
//	{
//		vector<int> a(n, 1);
//		for (int k2 = 0; k2 < k; ++k2)
//			a[k2] = 0;
//		for (int i = 0; i<m; ++i)
//			for (int j = 0; j<n; ++j)
//			{
//				sum[k] += abs(land[i][j] - a[j]);
//			}
//	}
//	int min = sum[0],index = 0;
//	for (int i = 1; i <= n; ++i)
//	{
//		if (sum[i]<min)
//		{
//			min = sum[i];
//			index = i;
//		}
//		else
//			continue;
//	}
//	vector<int> result(2);
//	result[0] = index;
//	result[1] = index + 1;
//	return result;
//}
//
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x) :
//		val(x), left(NULL), right(NULL) {
//	}
//};
//
//set<int, greater<int>> MaxLen;
//set<int, greater<int>>::iterator iter;
//
//int myfindPath(TreeNode *root)
//{
//	int Num = 1, Numleft = 0, Numright = 0;
//	if (root->left != NULL)
//	{
//		Numleft = findPath(root->left);
//		if (root->val == root->left->val)
//			Num += Numleft;
//	}
//	if (root->right != NULL)
//	{
//		Numright = findPath(root->right);
//		if (root->val == root->right->val)
//			Num += Numright;
//	}
//	MaxLen.insert(Num);
//	return max(Num - Numleft, Num - Numright);
//}
//
//int findPath(TreeNode* root) {
//	// write code here
//	myfindPath(root);
//	iter = MaxLen.begin();
//	return *iter;
//}

//string trans(string s, int n) {
//	// write code here
//	string::iterator pre = s.begin(), end = s.end(), i = pre;
//	while (i != end )
//	{
//		i = find(pre, end, ' ');
//		reverse(pre, i);
//		for (auto ibeg = pre; ibeg != i; ++ibeg)
//		{
//			if (*ibeg >= 'a' && *ibeg <= 'z')
//				*ibeg -= 32;
//			else if (*ibeg >= 'A' && *ibeg <= 'Z')
//				*ibeg += 32;
//		}
//		pre = i + 1;
//	}
//
//	reverse(s.begin(), s.end());
//	return s;
//
//}