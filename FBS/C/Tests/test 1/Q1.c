#include<stdio.h>
void main()
{
	int hr=1, min=30,sec=15;
	int totalSeconds;	
	printf("%dhr %dmin %dsec ",hr,min,sec);
	
	totalSeconds=(hr*3600)+(min*60)+sec;
	printf("%d totalSeconds",totalSeconds);
}