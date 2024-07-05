/*
 * AverageUsingArrays.c
 *
 *  Created on: Jul 5, 2024
 *      Author: yy656
 */


#include <stdlib.h>
#include <stdio.h>

int main()
{
	float array[1000];
	unsigned int n;
	float sum=0;
	printf("Enter the numbers of data: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &n);
	while(n>=0 && n<1000)
	{
	for (int i = 0; i < n; i++) {
		printf("%d. Enter number: ",i+1);
		fflush(stdout);
		fflush(stdin);
		scanf("%f", &array[i]);
		sum+=array[i];
	}
	printf("Average = %f\n",sum/n);

}
}
