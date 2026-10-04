//============================================================================
// Name        : dzpan_8.cpp
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
	double ay;
	double t;
};

int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int n;
	double r,h;
	printf("Please enter the number of aircraft\n");
	scanf("%d",&n);
	Aircraft *planes = new Aircraft[n];
	printf("Please enter r,h");
	scanf("%lf %lf",&r,&h);
	printf("Please enter technical specifications of %d aircraft: m, T, cl, cd, v, s",n);
	for(int i=0;i<n;++i){
		scanf("%lf %lf %lf %lf %lf %lf",&planes[i].m,&planes[i].T,&planes[i].cl,&planes[i].cd,&planes[i].v,&planes[i].s);
		planes[i].ay=(0.5*r*pow(planes[i].v,2)*planes[i].s*planes[i].cl-planes[i].m*9.80665)/planes[i].m;
		if(sqrt(2*h/planes[i].ay)<0){printf("error");return 0;}
		planes[i].t=sqrt(2*h/planes[i].ay);
	}
	for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				if (planes[j].t > planes[j + 1].t) {
					Aircraft temp = planes[j];
					planes[j] = planes[j + 1];
					planes[j + 1] = temp;
				}
			}
		}
	for (int i = 0; i < n; i++){
		printf("Aircraft %d: %.4f seconds\n", i + 1, planes[i].t);
	}
	delete[] planes;
	return 0;
}
