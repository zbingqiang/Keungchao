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

//2016.3.20 ��Ϊ������Ŀ
// 2��������
vector<int>& remove_start(vector<int>& num);

//2016.4.16 �ſ���������
// 1������ַ����е�һ�����ظ����ַ�
char first_unrepeat1(string & str);
char first_unrepeat2(string & str); //����2�����ַ���ASCII��Ϊ������±��������

// 2�����ַ������н������
string decode(string & str); // ������������ֵ����ֿ���Ϊ��λ

//���������ҵ�����Ԫ��ʹ�ú�Ϊsum��������ڶ����������±�С��
vector<int> FindNumbersWithSum(vector<int> array, int sum);

//�����ַ����Ƿ���ͬ�����г�����ַ��ã��ű�ʾ
// ע���ͬ�ſ������У����ֿ���Ϊ��λ
bool solution(string &S, string &T);

//�滻�ַ����еĿո�Ϊ"%20"
void replaceSpace(char *str, int length);

vector<int> printListFromTailToHead(struct ListNode* head);