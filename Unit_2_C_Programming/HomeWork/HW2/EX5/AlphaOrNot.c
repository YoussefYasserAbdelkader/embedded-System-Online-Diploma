/*
 * AlphaOrNot.c
 *
 *  Created on: Jun 30, 2024
 *      Author: yy656
 */

#include <stdlib.h>
#include <stdio.h>

int main()
{
	char c;
	printf("Enter a charachter: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&c);
	int x=c;
	if(x>=65&&x<=90||x>=97&&x<=122)
		printf("%c is an alphabet",c);
	else printf("%c is not an alphabet",c);

}
