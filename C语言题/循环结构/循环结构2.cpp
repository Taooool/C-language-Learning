#include<stdio.h>
int main (){
	int a[20],surplus=0,save=0;
//	printf("%d",10/100);==0
	scanf("%d",&a[0]);
	for(int i=1; i<12; i++){
		scanf("\n%d", &a[i]);
	} 
	for(int i=0; i<12; i++){
		int temp=surplus+300-a[i];
		if(temp<0){
			printf("-%d",i+1);
			return 0;
		}
		save+=(temp/100)*100;
		surplus=temp-(temp/100)*100;
	}
//	printf("%d\n",save); 
//	printf("%d",save*(1.2)+surplus);²»ÄÜ*1.2
	int sum=save*1.2+surplus;
	printf("%d",sum); 
	return 0;
} 
