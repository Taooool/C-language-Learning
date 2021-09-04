#include<stdio.h>
int main (){
	float a,b=0123.4123;
	scanf("%f",&a);
	if(a>1000||a<100)
		return -1;
int a1=(int)a/100,a2=(int)(a-a1*100)/10,a3=(int)(a-a1*100-a2*10)/1;
float a4=a-a1*100-a2*10-a3;
//printf("%d %d %d %f\n",a1,a2,a3,a4);
	b=a4*10+a1*0.001+a2*0.01+a3*0.1;
	printf("%.3f",b);
	return 0;
	
} 
