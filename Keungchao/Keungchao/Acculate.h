#pragma once

int fun(int arg)
{
	int m = arg / 3 + arg % 3;
	if (m >= 3)
	{
		return fun(m);
	}		
	else return (m + arg / 3);
}