#include "Sort.h"

/*
  ˵����
  1��length��ͨ��#define������Ӷ�ʹ�ú���������һ������
*/

//���������е�Ԫ��
void swap(int &a, int &b)
{
	a = a^b;
	b = a^b;
	a = a^b;
}

//ð������
// 
void bubbleSort(int nums[], int length)
{
	for (int i = 0; i < length; i++)
		for (int j = 0; j < i; j++)
			if (nums[i] < nums[j])
				//����
				swap(nums[i], nums[j]);
}

//ֱ�Ӳ�������
void insertSort(int num[], int length)
{
	for (int i = 0; i < length-1; i++)
	{
		int min_index = i;
		for (int j = i + 1; j < length; j++)
			if (num[j] < num[min_index])
				min_index = j;  //�ҵ���Сֵ�±�
		if (min_index != i)
			swap(num[i], num[min_index]);
	}
}

//��������

// ���������������ݷ�Ϊ�����֣�һ�㲻����num[high]��һ�㲻С��num[high]
int partition(int num[], int low, int high)
{
	int bound = num[high]; //ȡ���һ��Ԫ��Ϊ�ֽ�
	int i = low - 1; // i+1�����ҷֽ���±�
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

// ���������������ݷ�Ϊ�����֣�һ�벻����num[high]��һ�벻С��num[high]
//int partition(int num[], int low, int high)
//{
//	int i = low, j = high;
//	int key = num[low];
//	while (i < j)
//	{
//		//����������С��key������num[i]
//		while (i < j && num[j] >= key)
//			j--;
//		if (i < j)
//		{
//			num[i] = num[j];
//			i++;
//		}
//
//		//���������Ҵ���key������num[j]
//		while (i < j && num[i] < key)
//			i++;
//		if (i < j)
//		{
//			num[j] = num[i];
//			j--;
//		}
//
//	}
//	num[i] = key;  //��key���м�Ŀ�
//
//	return i;
//}

void quickSort(int num[], int low, int high)
{
	//�ݹ�ʵ��
	if (low < high)
	{
		int mid = partition(num, low, high);
		quickSort(num, low, mid - 1);
		quickSort(num, mid + 1, high);
	}
}

//�鲢����

// ������������ĺϲ�����
void merge(int num[], int start, int mid, int end)
{
	int left_length = mid - start + 1;
	int right_length = end - mid;
	int *left = new int[left_length];   //���������
	int *right = new int[right_length]; //���Ҳ�����
	int i, j, k;

	for (i = 0; i < left_length; i++)
		left[i] = num[start + i];
	for (j = 0; j < right_length; j++)
		right[j] = num[mid + 1 + j];

	i = j = 0;
	k = start;

	//��������бȽϺϲ���num������
	while (i < left_length && j < right_length)
	{
		if (left[i] < right[j])
			num[k++] = left[i++];
		else
			num[k++] = right[j++];
	}

	//�ϲ�ʣ���Ԫ��
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
		//�ݹ�����������
		int mid = (start + end) / 2;
		mergeSort(num, start, mid);
		mergeSort(num, mid + 1, end);
		//�ϲ�����
		merge(num, start, mid, end);
	}
}


//������

//��ĳ�ڵ�Ϊ�����������е�������Ϊ����
void adjustHeap(int num[], int p, int length)
{
	int curParent = num[p];
	int child = 2 * p + 1;
	while (child < length)  //û�к���
	{
		if (child + 1 < length && num[child] < num[child + 1])
			child++;     //�ϴ��ӵ��±�
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
	//���ѣ��Ե����ϴ����󶥶�
	for (int i = length / 2 - 1; i >= 0; i--)
		adjustHeap(num, i, length);
	for (int i = length - 1; i > 0; i--)
	{
		swap(num[0], num[i]);
		adjustHeap(num, 0, i);
	}
}