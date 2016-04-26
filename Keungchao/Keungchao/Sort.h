#pragma once

void swap(int &a, int &b);


void insertSort(int num[], int length);

void bubbleSort(int num[], int length);

int partition(int num[], int low, int high);
void quickSort(int num[], int low, int high);

void merge(int num[], int start, int mid, int end);
void mergeSort(int num[], int start, int end);


void adjustHeap(int num[], int p, int length);
void heapSort(int num[], int length);
