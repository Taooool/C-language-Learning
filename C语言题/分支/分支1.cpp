#include<stdio.h>
int main (){
	int a[10],b[10];
	for(int i=0; i<7; i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(int i=0; i<7; i++){
		if(a[i]+b[i]>8)	{
			printf("%d",i+1);return 0;
		}
	}
	printf(0);
	return 0;
}
