//============================================================================
// Name        : dzpan_3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>

int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	double m,l,d,t;
	printf("Please enter m,l,d,t\n");
	if(scanf("%lf %lf %lf %lf",&m,&l,&d,&t)!=4){
		printf("error");
		return 0;
	}
	printf("Acceleration a = %f , ay = %f",(t-d)/m,(l-m*9.80665)/m);
	return 0;
}
