// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.

/* Програма яка здійснює обмін значеннями між двома змінними x  i  y*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<malloc.h>
void main()
{
	int i, n, indexk1, k1, k2, max;
	scanf("%d", &n);
	int* mas = (int*)malloc(n * sizeof(int)), m = 0, sum = 0;
	for (i = 0; i < n; i++)
	{	
		printf("\nmas[%d] = ", i + 1);
		scanf_s("%d", &mas[i]);
		if (mas[i] > 0)
		{
			m++;
			/*if (mas[i] < k1)
				k1 = mas[i];
			if (mas[i] < k2, mas[i] > k1)
				k2 = mas[i];*/
		}
	}
	max = 0;
	for (i = 0; i < n; i++)
	{
		if (max < mas[i])
			max = mas[i];
	}
	k1 = max;
	for (i = 0; i < n; i++)
	{
		if ((mas[i] < k1) && (mas[i] > 0))
		{
			k1 = mas[i];
			indexk1 = i;
		}
	}
	k2 = max;
	for (i = 0; i < n; i++)
	{
		if ((mas[i] < k2) && (i != indexk1) && (mas[i] > 0))
			k2 = mas[i];
	}
	if (m >= 4)
	{
		sum = k1 + k2;
		printf("\nk1 = %d", k1);
		printf("\nk2 = %d", k2);
		printf("\nSum = %d", sum);
	}
	else
		printf("\nNot enough positive numbers introduced");

	
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
