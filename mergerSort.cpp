// mergeSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdio.h"
#include <iostream>

void  merge(int arr[], int p, int q, int r);
void mergeSort(int arr[],int p,int r);

int main()
{
	int a[] = {7,6,8,5,4,3,2,1,0};
	int mergeSortN = sizeof(a) / sizeof(a[0]);

	mergeSort(a, 0, mergeSortN-1);

	//打印排序后的数组
	for (int i = 0;i < mergeSortN; ++i)
	{
		std::cout << "a[" << i <<"]=" << a[i] << std::endl;
	}
	system("pause");

    return 0;
}
void mergeSort(int arr[], int p, int r)
{
	if (p < r)
	{
		int q = float((p + r) / 2);
		mergeSort(arr, p, q);
		mergeSort(arr, q+1, r);
		merge(arr,p,q,r);
		
	}
}


void merge(int arr[], int p, int q, int r)
{
	const int n1 = q - p + 1;
	const int n2 = r - q;

	int *L = new int[n1];
	int *R = new int[n2];

	for (int i = 0; i < n1; ++i)
	{
		L[i] = arr[p + i ];
	}

	for (int j = 0 ; j < n2; ++j) 
	{
		R[j] = arr[q + j+1];
	}
	
	int i = 0, j = 0,k=p;

	while( i<n1 && j<n2)
	{ 
		if (L[i]<= R[j] )
		{
			arr[k] = L[i];
			++i;
			++k;
		}
		else if(L[i] > R[j] )
		{
			arr[k] = R[j];
			++j;
			++k;
		}
	}

	while (i < n1)
	{
		arr[k] = L[i];
		++i;
		++k;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		++j;
		++k;
	}

	delete L ;
	delete R;
}
