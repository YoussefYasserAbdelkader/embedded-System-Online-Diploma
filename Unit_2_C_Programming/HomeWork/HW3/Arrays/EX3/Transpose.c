/*
 * Transpose.c
 *
 *  Created on: Jul 5, 2024
 *      Author: yy656
 */

#include <stdlib.h>
#include <stdio.h>

int main()
{
	int array1[100][100],array2[100][100];
		int rows, columns;

			printf("Enter rows and columns of matrix: ");
			fflush(stdin); fflush(stdout);
			scanf("%d %d", &rows, &columns);

		printf("Enter the elements of of matrix: \n");
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				printf("Enter Element a%d%d: ", i + 1, j + 1);
				fflush(stdin); fflush(stdout);
				scanf("%d", &array1[i][j]);
			}
		}
		printf("Entered Matrix:\n");
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				printf("%d\t", array1[i][j]);
			}
			printf("\n");
		}
		printf("Transpose of Matrix:\n");
		for (int i = 0; i < columns; i++)
		{
			for (int j = 0; j < rows; j++)
			{
				array2[j][i] = array1[j][i];
				printf("%d\t", array2[j][i]);
			}
			printf("\n");

		}
}
