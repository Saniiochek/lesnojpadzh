//============================================================================
// Name        : dzpan_4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <math.h>

int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	double ay,h;
	printf("Please enter ay,h\n");
	if(scanf("%lf %lf",&ay,&h)!=2||ay<=0||h<=0){
		printf("error");
		return 0;
	}
	printf("%f",sqrt(2*h/ay));
	return 0;
}
