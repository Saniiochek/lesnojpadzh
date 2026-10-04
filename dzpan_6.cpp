//============================================================================
// Name        : dzpan_6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <math.h>

#define NAME(q) ar_##q
int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int n;
	double s,cl;
	printf("Please enter the size of the arrays, s, cl\n");
	scanf("%d %lf %lf",&n,&s,&cl);
	double *ar_1=new double[n], *ar_2=new double[n];
	printf("Please enter the array of velocities and densities\n");
	for(int i=0;i<n;scanf("%lf",NAME(1)+i),++i);
	for(int i=0;i<n;scanf("%lf",NAME(2)+i),++i);
	for(int i=0;i<n;printf("|%d|%f|%f|%f|\n",i,*(ar_1+i),*(ar_2+i),0.5*(*(ar_2+i))*(*(ar_1+i))*s*cl),++i);
	return 0;
}
