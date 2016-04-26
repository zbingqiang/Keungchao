#pragma once

#include<iostream>
#include<algorithm>
#include<deque>
#include<list>
#include<map>
#include<iterator>
#include<vector>
#include<string>
#include<set>
#include<sstream>
#include<cctype>

using namespace std;

//2016.3.20 华为机试题目
// 2：消星星
vector<int>& remove_start(vector<int>& num);

//2016.4.16 优酷土豆笔试
// 1：输出字符串中第一个不重复的字符
char first_unrepeat1(string & str);
char first_unrepeat2(string & str); //方法2利用字符的ASCII作为数组的下标进行搜索

// 2：对字符串进行解码输出
string decode(string & str); // 特殊情况：出现的数字可能为多位

