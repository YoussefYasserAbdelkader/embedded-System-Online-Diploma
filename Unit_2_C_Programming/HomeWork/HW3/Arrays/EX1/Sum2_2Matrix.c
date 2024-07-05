/*
 * Sum2_2Matrix.c
 *
 *  Created on: Jul 5, 2024
 *      Author: yy656
 */


#include <stdlib.h>
#include <stdio.h>

int main()
{
	float array1[2][2],array2[2][2],sumArray[2][2];
	printf("Enter the elements of 1st matrix\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&array1[i][j]);
		}
	}
	printf("Enter the elements of 2nd matrix\n");
	for(int i=0;i<2;i++)
		{
			for(int j=0;j<2;j++)
			{
				printf("Enter b%d%d: ",i+1,j+1);
				fflush(stdin);
				fflush(stdout);
				scanf("%f",&array2[i][j]);
			}
		}

	for(int i=0;i<2;i++)
		{
			for(int j=0;j<2;j++)
			{
				sumArray[i][j]=array1[i][j]+array2[i][j];

		}
			}

	printf("Sum Of Matrix:\n%f\t%f\n%f\t%f",sumArray[0][0],sumArray[0][1],sumArray[1][0],sumArray[1][1]);

}
