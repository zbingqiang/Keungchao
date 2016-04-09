#pragma once

void sortTwoArray(int array1[], int array2[])
{
	int arrayLength1 = sizeof(array1) / sizeof(array1[0]);
	int arrayLength2 = sizeof(array2) / sizeof(array2[0]);
	if (arrayLength2 == 0) return;
	else if (arrayLength2 == 0)
	{ 
		for (int i = 0; i < arrayLength2; i++)
			array1[i] = array2[i];
		return;
	}
	else
	{
		while (arrayLength2 - 1)
		{

		}
	}


}