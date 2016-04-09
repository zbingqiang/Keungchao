#include "sushu.h"
#include<cmath>

sushu::sushu()
{
}

sushu::~sushu()
{
}

bool sushu::judge(int n)
{
	for (int j = 2; j <= sqrt(n); ++j)
	{
		if (n % j == 0)
			return true;
	}
	return false;
}