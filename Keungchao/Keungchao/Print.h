#pragma once

#include<string>
#include<iostream>
void PrintEvery(char *, int, int);
void PrintNumber(char *);

void Print(int n)
{
	if (n <= 0)
		return;
	char *number = new char[n + 1];
	number[n] = '\0';
	
	for (int i = 0; i < 10; ++i)
	{
		number[0] = i + '0';
		PrintEvery(number, n, 0);
	}
	delete[] number;

}

void PrintEvery(char *num, int length, int index)
{
	if (index == length - 1)
	{
		PrintNumber(num);
		return;
	}
	for (int i = 0; i < 10; i++)
	{
		num[index + 1] = i + '0';
		PrintEvery(num, length, index + 1);
	}
}

void PrintNumber(char *num)
{
	bool isBeginning0 = true;
	int length = strlen(num);
	for (int i = 0; i < length; ++i)
	{
		if (isBeginning0 &&num[i] != '0')
		{
			isBeginning0 = false;
		}
		if (!isBeginning0)
		{
			printf("%c", num[i]);
		}
		printf("\t");
	}
}