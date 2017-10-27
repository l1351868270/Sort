// heapSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>


void maxHeapify(int *arr, int i,int size);
void buildMaxHeapify(int *arr,int size);
void heapSort(int *arr, int size);

int main()
{
	//int a[10] = {16,14,10,8,7,9,3,2,4,1};
	//int a[10] = { 16,4,10,14,7,9,3,2,8,1 };
	int a[10] = { 4,1,3,2,16,9,10,14,8,7 };
	//int a[12]={9,8,7,6,5,4,3,2,1,12,11,10};

	int n = sizeof(a) / sizeof(a[0]);

	heapSort(a,n);

	for (int i = 0; i < n; ++i)
	{
		std::cout << a[i] << std::endl;
	}

	system("pause");
    return 0;
}

void maxHeapify(int *arr,int i,int size)
{
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	int largest = i;

	if (l <size && arr[l]>arr[largest])
	{
		largest = l;
	}

	if (r<size && arr[r]>arr[largest])
	{
		largest = r;
	}

   if(largest!=i)
   {
	   arr[i] = arr[i] + arr[largest];
	   arr[largest] = arr[i] - arr[largest];
	   arr[i] = arr[i] - arr[largest];

	   maxHeapify(arr, largest,size);
   }
}

void buildMaxHeapify(int *arr,int size)
{
	for (int i = floor(size / 2)-1; i >= 0; --i)
	{
		maxHeapify(arr,i,size);
	}

}

void heapSort(int *arr,int size)
{
	buildMaxHeapify(arr,size);

	int n = size;
	for (int i = size-1; i >= 1; --i)
	{
		arr[0] = arr[0] + arr[i];
		arr[i] = arr[0] - arr[i];
		arr[0] = arr[0] - arr[i];
		n = n - 1;
		buildMaxHeapify(arr,i);
	}

}
