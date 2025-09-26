#include<stdio.h>
void main()
{
	int start =1, end=5;
	int size = end-start+1;
	int arr[100];
	int i,sum=0;
	for(i=0; i<size; i++){
		arr[i]= start+i;
	}
	for(i=0; i<size; i+=2){
		sum+= arr[i];
	}
	printf("sum of alternate numbers from %d to %d is: %d\n",start,end,sum);
}