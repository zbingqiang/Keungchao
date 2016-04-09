#pragma once

enum Status{ kValid = 0, kInvalue };
int g_flag = kValid;

double PowerPositive(double base, int exponent);
bool equal(double num1, double num2);


double Power(double base, int exponent)
{
	if (equal(base,0.0) && exponent< 0)
	{
		g_flag = kInvalue;
		return 0.0;
	}		
	if (exponent == 0)
		return 1.0;
	else if (exponent > 0)
		return PowerPositive(base, exponent);
	else return 1.0 / PowerPositive(base, -exponent);
}

double PowerPositive(double base, int exponent)
{
	double nums = 1.0;
	for (int i = 1; i <=exponent; i++)
	{
		nums *= base;
		if (nums>0xFFFFFFFFFFFFFFFF && nums < 0x80000000000000)
		{
			nums = 0;
			g_flag = kInvalue;
			break;
		}
	}
	return nums;
}
bool equal(double num1, double num2)
{
	if (abs(num1 - num2) < 0.0000001)
		return true;
	else return false;
}