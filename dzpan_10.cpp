//============================================================================
// Name        : dzpan_10.cpp
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
	double D,m,h,max=0;
	int Tmin, Tmax,dT,T;
	//так как в явном виде в презентации не показана связь ау и а, то буду предполагать, что L=T-D
	printf("Please enter Tmin, Tmax, dT, D, m, h\n");
	scanf("%d %d %d %lf %lf %lf",&Tmin, &Tmax, &dT, &D, &m, &h);
	for(int i=0;i<=(Tmax-Tmin)/dT;i+=dT){
		if(((Tmin+i-D-m*9.80665)/m)>max){
			max=(Tmin+i-D-m*9.80665)/m;
			T=Tmin+i;
		}
	}
	if(max<(Tmax-D-m*9.80665)/m){
		max=(Tmax-D-m*9.80665)/m;
		T=Tmax;
	}
	printf("T = %d, tmin = %f",T,sqrt(2*h/((T-D-m*9.80665)/m)));
}
