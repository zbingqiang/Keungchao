#pragma once

#include<iostream>
#include<string>

void reverse_str(char* strInput, int nStart, int nEnd)
{
	if (nStart >= nEnd || nStart <0 || nEnd >= strlen(strInput))
	{
		return;
	}
	while (nStart < nEnd)
	{
		char cTemp = strInput[nStart];
		strInput[nStart] = strInput[nEnd];
		strInput[nEnd] = cTemp;
		nStart++;
		nEnd--;
	}
}

//��ɵ��ʵ�ת������"i am who"ת����"who am i"  
void reverse_word(char* strInput)  //û�д������ո����
{
	int len = strlen(strInput);
	//ת����ohm ma i  
	reverse_str(strInput, 0, len - 1);
	// w ma i ÿ�����ʷ�ת
	int nStart = 0, index = 0;
	while (index <= len + 1)
	{
		if (strInput[index] == ' ' || strInput[index] == '\0')
		{
			reverse_str(strInput, nStart, index - 1);
			nStart = index + 1;
		}
		++index;
	}
}
