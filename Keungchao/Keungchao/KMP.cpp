#include<iostream>
#include "KMP.h"

using namespace std;

int KMP(char* area, char* aim)
{
	int len_area = strlen(area);
	int len_aim = strlen(aim);

	int i = 0;
	int j = 0;

	int next[aim_len];
	//GetNextval(aim, next);
	GetNextval(aim, next);

	while (i < len_area && j < len_aim)
	{
		if ( area[i] == aim[j] || j==-1  )
		{
			++i;
			++j;
		}
		else
		{
			j = next[j] ;
		}
	}

	if (j == len_aim)
		return i-j;
	else 
		return -1;
}

void GetNext(char* p, int next[])
{
	int pLen = strlen(p);
	next[0] = -1;
	int k = -1;
	int j = 0;
	while (j < pLen - 1)
	{
		//p[k]��ʾǰ׺��p[j]��ʾ��׺
		//ƥ���ǴӺ�����ַ������ҵ��뿪ʼ��ƥ����ַ�����ͷk��������
		//��ƥ��ʱ����Ӧ��next��1����ƥ��ʱ��k=next[k]���е���
		if (k == -1 || p[j] == p[k])
		{
			++k;
			++j;
			next[j] = k;
		}
		else
		{
			k = next[k];
		}
	}
}


void GetNextval(char* p, int next[])
{
	int pLen = strlen(p);
	next[0] = -1;
	int k = -1;
	int j = 0;
	while (j < pLen - 1)
	{
		//p[k]��ʾǰ׺��p[j]��ʾ��׺  
		if (k == -1 || p[j] == p[k])
		{
			++j;
			++k;
			//��֮ǰnext�����󷨣��Ķ�������4��
			if (p[j] != p[k])
				next[j] = k;   //֮ǰֻ����һ��
			else
				//��Ϊ���ܳ���p[j] = p[ next[j ]]�����Ե�����ʱ��Ҫ�����ݹ飬k = next[k] = next[next[k]]
				next[j] = next[k];
		}
		else
		{
			k = next[k];
		}
	}
}