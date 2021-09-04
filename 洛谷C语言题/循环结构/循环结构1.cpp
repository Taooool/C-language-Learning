#include<stdio.h>
int main(){
	int n,x,sum=0;
	scanf("%d %d",&n,&x);
	for(int i=1; i<=n; i++){
		int t=i;
		while(1){
			if(t%10==x)
				sum++;
			if(t<10)
				break;	
			t=t/10;
			
		}
	}
	printf("%d",sum);
	return 0;
}
