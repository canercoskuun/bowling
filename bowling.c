#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_SIZE 100

void main(void)
{
	int M[MAX_SIZE][MAX_SIZE], N[MAX_SIZE][MAX_SIZE], SUM[MAX_SIZE][MAX_SIZE], A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], TOP[MAX_SIZE][MAX_SIZE];
	int k, l, b, d, y = 0;
	int size = 3, i, j, upper = 10, lower = 0, a, c, x = 0;
	M[3][1] = 0, N[3][1] = 0;
	srand(time(NULL));
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			M[i][j] = (rand() % (upper - lower + 1)) + lower;
			N[i][j] = (rand() % (10 - M[i][j] + 1)) + lower;
			SUM[i][j] = M[i][j] + N[i][j];
			if (M[i][j] == 10)
			{
				printf("X");
			}
			else {
				if (M[i][j] + N[i][j] == 10)
				{
					printf("%d", M[i][j]);
					printf("/");
				}
				else {
					printf("%d", M[i][j]);
					printf("%d", N[i][j]);
				}
			}
			printf("\t");
		}
	}
	i = 3, j = 0;
	for (j = 0; j < 1; j++)
	{
		M[i][j] = (rand() % (upper - lower + 1)) + lower;
		N[i][j] = (rand() % (10 - M[i][j] + 1)) + lower;
		SUM[i][j] = M[i][j] + N[i][j];

		if (M[i][j] == 10)
		{
			printf("X");
		}
		else {
			if (M[i][j] + N[i][j] == 10)
			{
				printf("%d", M[i][j]);
				printf("/");
			}
			else {
				printf("%d", M[i][j]);
				printf("%d", N[i][j]);
			}
		}
		i = 3, j = 0;
		for (j = 0; j < 1; j++)
		{
			if (M[i][j] == 10)
			{
				j++;
				M[i][j] = (rand() % (upper - lower + 1)) + lower;
				N[i][j] = (rand() % (10 - M[i][j] + 1)) + lower;
				printf("%d%d", M[i][j], N[i][j]);
			}
			else if (M[i][j] + N[i][j] == 10)
			{
				j++;
				M[i][j] = (rand() % (upper - lower + 1)) + lower;
				if (M[i][j] == 10)
				{
					printf("X");
				}
				else
				{
					printf("%d", M[i][j]);
				}
			}
		}
		printf("\n");
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{

				if (M[i][j] + N[i][j] < 10)
				{
					x += SUM[i][j];
					printf("%d\t", x);
				}
				else if (M[i][j] == 10)
				{
					if (i == 0 && j == 0)
					{
						if (M[i][j + 1] == 10)
						{
							x += M[i][j + 1] + M[i][j + 2] + 10;
							printf("%d\t", x);
						}
						else
						{
							x += M[i][j + 1] + N[i][j + 1] + 10;
							printf("%d\t", x);
						}
					}
					if (i == 0 && j == 1)
					{
						if (M[i][j + 1] == 10)
						{
							x += M[i][j + 1] + M[i + 1][j - 1] + 10;
							printf("%d\t", x);
						}
						else
						{
							x += M[i][j + 1] + N[i][j + 1] + 10;
							printf("%d\t", x);
						}
					}
					if (i == 0 && j == 2)
					{
						if (M[i + 1][j - 2] == 10)
						{
							x += M[i + 1][j - 2] + M[i + 1][j - 1] + 10;
							printf("%d\t", x);
						}
						else {
							x += M[i + 1][j - 2] + N[i + 1][j - 2] + 10;
							printf("%d\t", x);
						}
					}
					if (i == 1 && j == 0)
					{
						if (M[i][j + 1] == 10)
						{
							x += M[i][j + 1] + M[i + 1][j] + 10;
							printf("%d\t", x);
						}
						else {
							x += M[i][j + 1] + N[i][j + 1] + 10;
							printf("%d\t", x);
						}
					}
					if (i == 1 && j == 1)
					{
						if (M[i][j + 1] == 10)
						{
							x += M[i][j + 1] + M[i + 1][j - 1] + 10;
							printf("%d\t", x);
						}
						else {
							x += M[i][j + 1] + N[i][j + 1] + 10;
							printf("%d\t", x);
						}
					}
					if (i == 1 && j == 2)
					{
						if (M[i + 1][j - 2] == 10)
						{
							x += M[i + 1][j - 2] + M[i + 1][j - 1] + 10;
							printf("%d\t", x);
						}
						else
						{
							x += M[i + 1][j - 2] + N[i + 1][j - 2] + 10;
							printf("%d\t", x);
						}
					}
					if (i == 2 && j == 0)
					{
						if (M[i][j + 1] == 10)
						{
							x += M[i][j + 1] + M[i][j + 2] + 10;
							printf("%d\t", x);
						}
						else {
							x += M[i][j + 1] + N[i][j + 1] + 10;
							printf("%d\t", x);
						}
					}
					if (i == 2 && j == 1)
					{
						if (M[i][j + 1] == 10)
						{
							x += M[i][j + 1] + M[3][0] + 10;
							printf("%d\t", x);
						}
						else {
							x += M[i][j + 1] + N[i][j + 1] + 10;
							printf("%d\t", x);
						}
					}
					if (i == 2 && j == 2)
					{
						if (M[3][0] == 10)
						{
							x += M[3][0] + M[3][1] + 10;
							printf("%d\t", x);
					}
						else
						{ 
						x += M[3][0] + N[3][0] + 10;
						printf("%d\t", x);
						}
					}

				}
				else
				{
					if (i == 0 && j == 0)
					{
						x += M[i][j + 1] + 10;
						printf("%d\t", x);
					}
					if (i == 0 && j == 1)
					{
						x += M[i][j + 1] + 10;
						printf("%d\t", x);
					}
					if (i == 0 && j == 2)
					{
						x += M[i + 1][j - 2] + 10;
						printf("%d\t", x);
					}
					if (i == 1 && j == 0)
					{
						x += M[i][j + 1] + 10;
						printf("%d\t", x);
					}
					if (i == 1 && j == 1)
					{
						x += M[i][j + 1] + 10;
						printf("%d\t", x);
					}
					if (i == 1 && j == 2)
					{
						x += M[i + 1][j - 2] + 10;
						printf("%d\t", x);
					}
					if (i == 2 && j == 0)
					{
						x += M[i][j + 1] + 10;
						printf("%d\t", x);
					}
					if (i == 2 && j == 1)
					{
						x += M[i][j + 1] + 10;
						printf("%d\t", x);
					}
					if (i == 2 && j == 2)
					{
						x += M[i + 1][j - 2] + 10;
						printf("%d\t", x);
					}
				}
			}

		}
	}
	c = M[3][0] + N[3][0] + M[3][1] + N[3][1];
	x += c;
	printf("%d", x);
	printf("\n -----------------------------------------------------------------------------------\n");

	A[3][1] = 0, B[3][1] = 0;

	for (k = 0; k < size; k++)
	{
		for (l = 0; l < size; l++)
		{
			A[k][l] = (rand() % (upper - lower + 1)) + lower;
			B[k][l] = (rand() % (10 - A[k][l] + 1)) + lower;
			TOP[k][l] = A[k][l] + B[k][l];
			if (A[k][l] == 10)
			{
				printf("X");
			}
			else {
				if (A[k][l] + B[k][l] == 10)
				{
					printf("%d", A[k][l]);
					printf("/");
				}
				else {
					printf("%d", A[k][l]);
					printf("%d", B[k][l]);
				}
			}
			printf("\t");
		}
	}
	k = 3, l = 0;
	for (l = 0; l < 1; l++)
	{
		A[k][l] = (rand() % (upper - lower + 1)) + lower;
		B[k][l] = (rand() % (10 - A[k][l] + 1)) + lower;
		TOP[k][l] = A[k][l] + B[k][l];

		if (A[k][l] == 10)
		{
			printf("X");
		}
		else {
			if (A[k][l] + B[k][l] == 10)
			{
				printf("%d", A[k][l]);
				printf("/");
			}
			else {
				printf("%d", A[k][l]);
				printf("%d", B[k][l]);
			}
		}
		k = 3, l = 0;
		for (l = 0; l < 1; l++)
		{
			if (A[k][l] == 10)
			{
				l++;
				A[k][l] = (rand() % (upper - lower + 1)) + lower;
				B[k][l] = (rand() % (10 - A[k][l] + 1)) + lower;
				printf("%d%d", A[k][l], B[k][l]);
			}
			else if (A[k][l] + B[k][l] == 10)
			{
				l++;
				A[k][l] = (rand() % (upper - lower + 1)) + lower;
				if (A[k][l] == 10)
				{
					printf("X");
				}
				else
				{
					printf("%d", A[k][l]);
				}
			}
		}
		printf("\n");
		for (k = 0; k < size; k++)
		{
			for (l = 0; l < size; l++)
			{

				if (A[k][l] + B[k][l] < 10)
				{
					y += TOP[k][l];
					printf("%d\t", y);
				}
				else if (A[k][l] == 10)
				{
					if (k == 0 && l == 0)
					{
						if (A[k][l + 1] == 10)
						{
							y += A[k][l + 1] + A[k][l + 2] + 10;
							printf("%d\t", y);
						}
						else
						{
							y += A[k][l + 1] + B[k][l + 1] + 10;
							printf("%d\t", y);
						}
					}
					if (k == 0 && l == 1)
					{
						if (A[k][l + 1] == 10)
						{
							y += A[k][l + 1] + A[k + 1][l - 1] + 10;
							printf("%d\t", y);
						}
						else
						{
							y += A[k][l + 1] + B[k][l + 1] + 10;
							printf("%d\t", y);
						}
					}
					if (k == 0 && l == 2)
					{
						if (A[k + 1][l - 2] == 10)
						{
							y += A[k + 1][l - 2] + A[k + 1][l - 1] + 10;
							printf("%d\t", y);
						}
						else {
							y += A[k + 1][l - 2] + B[k + 1][l - 2] + 10;
							printf("%d\t", y);
						}
					}
					if (k == 1 && l == 0)
					{
						if (A[k][l + 1] == 10)
						{
							y += A[k][l + 1] + A[k + 1][l] + 10;
							printf("%d\t", y);
						}
						else {
							y += A[k][l + 1] + B[k][l + 1] + 10;
							printf("%d\t", y);
						}
					}
					if (k == 1 && l == 1)
					{
						if (A[k][l + 1] == 10)
						{
							y += A[k][l + 1] + A[k + 1][l - 1] + 10;
							printf("%d\t", y);
						}
						else {
							y += A[k][l + 1] + B[k][l + 1] + 10;
							printf("%d\t", y);
						}
					}
					if (k == 1 && l == 2)
					{
						if (A[k + 1][l - 2] == 10)
						{
							y += A[k + 1][l - 2] + A[k + 1][l - 1] + 10;
							printf("%d\t", y);
						}
						else
						{
							y += A[k + 1][l - 2] + B[k + 1][l - 2] + 10;
							printf("%d\t", y);
						}
					}
					if (k == 2 && l == 0)
					{
						if (A[k][l + 1] == 10)
						{
							y += A[k][l + 1] + A[k][l + 2] + 10;
							printf("%d\t", y);
						}
						else {
							y += A[k][l + 1] + B[k][l + 1] + 10;
							printf("%d\t", y);
						}
					}
					if (k == 2 && l == 1)
					{
						if (A[k][l + 1] == 10)
						{
							y += A[k][l + 1] + A[3][0] + 10;
							printf("%d\t", y);
						}
						else {
							y += A[k][l + 1] + B[k][l + 1] + 10;
							printf("%d\t", y);
						}
					}
					if (k == 2 && l == 2)
					{
						if (A[3][0] == 10)
						{
							y += A[3][0] + A[3][1] + 10;
							printf("%d\t", y);
						}
						else
						{
							y += A[3][0] + B[3][0] + 10;
							printf("%d\t", y);
						}
					}

				}
				else
				{
					if (k == 0 && l == 0)
					{
						y += A[k][l + 1] + 10;
						printf("%d\t", y);
					}
					if (k == 0 && l == 1)
					{
						y += A[k][l + 1] + 10;
						printf("%d\t", y);
					}
					if (k == 0 && l == 2)
					{
						y += A[k + 1][l - 2] + 10;
						printf("%d\t", y);
					}
					if (k == 1 && l == 0)
					{
						y += A[k][l + 1] + 10;
						printf("%d\t", y);
					}
					if (k == 1 && l == 1)
					{
						y += A[k][l + 1] + 10;
						printf("%d\t", y);
					}
					if (k == 1 && l == 2)
					{
						y += A[k + 1][l - 2] + 10;
						printf("%d\t", y);
					}
					if (k == 2 && l == 0)
					{
						y += A[k][l + 1] + 10;
						printf("%d\t", y);
					}
					if (k == 2 && l == 1)
					{
						y += A[k][l + 1] + 10;
						printf("%d\t", y);
					}
					if (k == 2 && l == 2)
					{
						y += A[k + 1][l - 2] + 10;
						printf("%d\t", y);
					}
				}
			}

		}
	}
	d = A[3][0] + B[3][0] + A[3][1] + B[3][1];
	y += d;
	printf("%d\n", y);

}

