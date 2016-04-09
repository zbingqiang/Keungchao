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

//完成单词倒转，比如"i am who"转换成"who am i"  
void reverse_word(char* strInput)  //没有处理多个空格情况
{
	int len = strlen(strInput);
	//转换成ohm ma i  
	reverse_str(strInput, 0, len - 1);
	// w ma i 每个单词反转
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
