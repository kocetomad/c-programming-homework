#include<stdio.h>

int main()
{
	int in,square,cube;
	
	printf("Enter a number: \n");
	scanf("%d", &in);
	
	square=in*in;
	cube=in*in*in;
	
	printf("%d\n", square);
	printf("%d\n", cube);
	return 0;
}
