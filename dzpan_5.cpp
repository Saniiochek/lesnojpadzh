//============================================================================
// Name        : dzpan_5.cpp
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
	double air[3][5],air_tech[3][4],h,a,b,c,r;
	printf("Please enter technical specifications of three aircraft: s, v, cl, cd, m\n");
	for(int i=0;i<3;++i)
		for(int j=0;j<5;scanf("%lf",&air[i][j]),++j);
	printf("Please enter h,r\n");
	scanf("%lf %lf",&h,&r);
	for(int i=0;i<3;++i){
		air_tech[i][0]=0.5*r*pow(air[i][1],2)*air[i][0]*air[i][2];
		air_tech[i][1]=0.5*r*pow(air[i][1],2)*air[i][0]*air[i][3];
		if(air[i][4]==0){
			printf("You entered incorrect specifications for %d plane",i);
			return 0;
		}
		air_tech[i][2]=(air_tech[i][0]-air[i][4]*9.80665)/air[i][4];
		if(2*h/air_tech[i][2]<=0){
			printf("The plane %d doesn't stand a chance.",i+1);
			return 0;
		}
		air_tech[i][3]=sqrt(2*h/air_tech[i][2]);
	}
	a=air_tech[0][3];
	b=air_tech[1][3];
	c=air_tech[2][3];
	printf("First = %.2f Second = %.2f Third = %.2f\n",a,b,c);
	printf(a<b?(a<c?"The first one is the best.":"The third one is the best."):(b<c?"The second one is the best.":"The third one is the best."));
	return 0;
}
