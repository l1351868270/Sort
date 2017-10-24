#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <vector>

void selectSort(double arr[], int n);



int main()
{
	std::vector<int> a;
	std::cout << "开始时间："<< std::endl;
	double x[100000];

	for (int i = 0; i <100000; ++i)
	{
		x[i] = rand();
	}


	selectSort(x, sizeof(x)/sizeof(x[0]));


	for (int i=0;i<sizeof(x) / sizeof(x[0]);++i)
	{
		std::cout << x[i] << " ";
		
	}
	std::cout << std::endl;
	std::cout << "结束时间：" << std::endl;
	//system("pause");


	return -1;
}

void selectSort(double arr[], int n)
{
	int min=0;
	for (int i = 0; i < n; ++i)
	{
		min = i;
		for (int j = i; j < n; ++j)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}
		}
		if (arr[i] > arr[min])
		{
			arr[i] = arr[i] + arr[min];
			arr[min] = arr[i] - arr[min];
			arr[i] = arr[i] - arr[min];
		}
    }
}
