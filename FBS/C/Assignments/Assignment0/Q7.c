#include<stdio.h>
void main()
{
	int min=250;
	int hr, rmin;
	hr=min/60;
	rmin= min%60;
	printf("Total hr and min of %d is %dhr, %dmin",min,hr,rmin);
}
