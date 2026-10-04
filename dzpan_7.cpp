//============================================================================
// Name        : dzpan_7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <locale.h>

int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	setlocale(LC_ALL,"Russian");
	double m,l,ay;
	printf("Please enter m,l\n");
	if(scanf("%lf %lf",&m,&l)!=2){
		printf("error");
		return 0;
	}
	ay=(l-m*9.80665)/m;
	if(ay>0.5)
		printf("режим «набор высоты»");
	else if(ay<=0.5&&ay>=0)
		printf("режим «горизонтальный полет»");
	else printf("режим «снижение»");
	return 0;
}
