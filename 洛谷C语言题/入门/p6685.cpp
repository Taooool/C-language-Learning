#include<stdio.h>
#include<math.h>
int main(){
	int m,n,num=0;
	scanf("%d %d",&n,&m);
	int x=1;
	while(pow(x,m)<=n){
		num++;x++;
	}
	printf("%d",num);
	return 0;
} 
