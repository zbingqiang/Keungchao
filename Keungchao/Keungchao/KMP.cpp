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
		//p[k]表示前缀，p[j]表示后缀
		//匹配是从后面的字符串中找到与开始相匹配的字符串，头k用来迭代
		//当匹配时，对应的next加1，不匹配时，k=next[k]进行迭代
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
		//p[k]表示前缀，p[j]表示后缀  
		if (k == -1 || p[j] == p[k])
		{
			++j;
			++k;
			//较之前next数组求法，改动在下面4行
			if (p[j] != p[k])
				next[j] = k;   //之前只有这一行
			else
				//因为不能出现p[j] = p[ next[j ]]，所以当出现时需要继续递归，k = next[k] = next[next[k]]
				next[j] = next[k];
		}
		else
		{
			k = next[k];
		}
	}
}