//============================================================================
// Name        : dzpan_9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <math.h>

struct Aircraft {
	double m;
	double T;
	double cl;
	double cd;
	double v;
	double s;
	double L1;
	double L2;
	double ay;
	double a;
};

int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int n;
	double r;
	printf("Please enter the number of aircraft\n");
	scanf("%d",&n);
	Aircraft *planes = new Aircraft[n];
	printf("Please enter r");
	scanf("%lf",&r);
	printf("Please enter technical specifications of %d aircraft: m, T, cl, cd, v, s",n);
	for(int i=0;i<n;++i){
		scanf("%lf %lf %lf %lf %lf %lf",&planes[i].m,&planes[i].T,&planes[i].cl,&planes[i].cd,&planes[i].v,&planes[i].s);
		planes[i].L1=0.5*r*pow(planes[i].v,2)*planes[i].s*planes[i].cl;
		planes[i].L2=0.5*r*pow(planes[i].v,2)*planes[i].s*planes[i].cd;
		planes[i].ay=(planes[i].L1-planes[i].m*9.80665)/planes[i].m;
	}
	for (int i = 0; i < n; i++){
		printf("Aircraft %d: L1 = %.4f, L2 = %.4f, ay = %.4f\n",i + 1,planes[i].L1,planes[i].L2,planes[i].ay);
	}
	printf("The best one is the one with the greatest acceleration\n ;)");
	delete[] planes;
	return 0;
}
