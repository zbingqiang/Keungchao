#include "Sort.h"

/*
  说明：
  1：length可通过#define替代，从而使得函数调用少一个参数
*/

//交换数组中的元素
void swap(int &a, int &b)
{
	a = a^b;
	b = a^b;
	a = a^b;
}

//冒泡排序法
// 
void bubbleSort(int nums[], int length)
{
	for (int i = 0; i < length; i++)
		for (int j = 0; j < i; j++)
			if (nums[i] < nums[j])
				//交换
				swap(nums[i], nums[j]);
}

//直接插入排序
void insertSort(int num[], int length)
{
	for (int i = 0; i < length-1; i++)
	{
		int min_index = i;
		for (int j = i + 1; j < length; j++)
			if (num[j] < num[min_index])
				min_index = j;  //找到最小值下标
		if (min_index != i)
			swap(num[i], num[min_index]);
	}
}

//快速排序

// 辅助函数：将数据分为两部分，一般不大于num[high]，一般不小于num[high]
int partition(int num[], int low, int high)
{
	int bound = num[high]; //取最后一个元素为分界
	int i = low - 1; // i+1：左右分界的下标
	for (int j = low; j < high; j++)
	{
		if (num[j] <= bound)
		{
			++i;
			if (i != j)
				swap(num[i], num[j]);
		}
	}
	if(i + 1 != high)  swap(num[i + 1], num[high]);
	return i + 1;
}

// 辅助函数：将数据分为两部分，一半不大于num[high]，一半不小于num[high]
//int partition(int num[], int low, int high)
//{
//	int i = low, j = high;
//	int key = num[low];
//	while (i < j)
//	{
//		//从右向左找小于key的数填num[i]
//		while (i < j && num[j] >= key)
//			j--;
//		if (i < j)
//		{
//			num[i] = num[j];
//			i++;
//		}
//
//		//从左向右找大于key的数填num[j]
//		while (i < j && num[i] < key)
//			i++;
//		if (i < j)
//		{
//			num[j] = num[i];
//			j--;
//		}
//
//	}
//	num[i] = key;  //用key填中间的坑
//
//	return i;
//}

void quickSort(int num[], int low, int high)
{
	//递归实现
	if (low < high)
	{
		int mid = partition(num, low, high);
		quickSort(num, low, mid - 1);
		quickSort(num, mid + 1, high);
	}
}

//归并排序

// 两个有序数组的合并排序
void merge(int num[], int start, int mid, int end)
{
	int left_length = mid - start + 1;
	int right_length = end - mid;
	int *left = new int[left_length];   //存左侧数组
	int *right = new int[right_length]; //存右侧数组
	int i, j, k;

	for (i = 0; i < left_length; i++)
		left[i] = num[start + i];
	for (j = 0; j < right_length; j++)
		right[j] = num[mid + 1 + j];

	i = j = 0;
	k = start;

	//将数组进行比较合并到num数组中
	while (i < left_length && j < right_length)
	{
		if (left[i] < right[j])
			num[k++] = left[i++];
		else
			num[k++] = right[j++];
	}

	//合并剩余的元素
	for (; i < left_length; i++)
		num[k++] = left[i];
	for (; j < right_length; j++)
		num[k++] = right[j];

	delete[] left;
	delete[] right;
}
void mergeSort(int num[], int start, int end)
{
	if (start < end)
	{
		//递归拆分左右数组
		int mid = (start + end) / 2;
		mergeSort(num, start, mid);
		mergeSort(num, mid + 1, end);
		//合并数组
		merge(num, start, mid, end);
	}
}


//堆排序

//以某节点为根的子数进行调整，变为最大堆
void adjustHeap(int num[], int p, int length)
{
	int curParent = num[p];
	int child = 2 * p + 1;
	while (child < length)  //没有孩子
	{
		if (child + 1 < length && num[child] < num[child + 1])
			child++;     //较大孩子的下标
		if (curParent < num[child])
		{
			num[p] = num[child];
			p = child;
			child = 2 * p + 1;
		}
		else
			break;	
	}
	num[p] = curParent;
}

void heapSort(int num[], int length)
{
	//建堆，自底向上创建大顶堆
	for (int i = length / 2 - 1; i >= 0; i--)
		adjustHeap(num, i, length);
	for (int i = length - 1; i > 0; i--)
	{
		swap(num[0], num[i]);
		adjustHeap(num, 0, i);
	}
}