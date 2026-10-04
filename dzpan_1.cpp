//============================================================================
// Name        : dzpan_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <math.h>

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	double s,v,r,c;
	printf("Please enter s,v,r,c\n");

	if(scanf("%lf %lf %lf %lf",&s,&v,&r,&c)!=4){
		printf("error");
		return 0;
	}
	printf("%f",0.5*r*pow(v,2)*s*c);
	return 0;
}
