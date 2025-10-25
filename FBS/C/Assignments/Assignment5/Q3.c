#include<stdio.h>
void main()
{
	int n=5;
	int i,j;
	for(int i=n; i>=1; i--){
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
}