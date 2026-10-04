//============================================================================
// Name        : dzpan_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <math.h>
void sopr(double s1,double v1, double r1, double c1)
{
	printf("%f",0.5*r1*pow(v1,2)*s1*c1);
}
int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	double s,v,r,cl,cd;
	printf("Please enter s,v,r,cl,cd\n");

	if(scanf("%lf %lf %lf %lf %lf",&s,&v,&r,&cl,&cd)!=5){
		printf("error");
		return 0;
	}
	printf("%f\n",0.5*r*pow(v,2)*s*cl);
	sopr(s,v,r,cd);
	return 0;
}
