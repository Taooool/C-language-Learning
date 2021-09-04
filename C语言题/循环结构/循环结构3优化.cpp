#include<stdio.h>
int main(){
	int N=0;
	scanf("%d",&N);
	int a[N][N];
//	int a[N][N];不知道为什么放这里，内存会出错 
	for(int i=1;i<=N;i++){//数组初始化，第4步要判断是否已存了数 
		for(int j=1;j<=N;j++){
			a[i][j]=0;
		}
	}
	int r=1,l=(N+1)/2;
	for(int i=1;i<=N*N;i++){ 
		if(a[r][l]==0)
			a[r][l]=i;
		else{
			r=r+2;
			l=l-1;
			a[r][l]=i;
		}
		if(r==1&&l==N){
			r=r+1;
			l=l;
		}else if(r==1){
			r=N;
			l=l+1;
		}else if(l==N){
			r=r-1;
			l=1;
		}else{
			r=r-1;
			l=l+1;
		}
	}
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){	
			if(j==N)	printf("%d",a[i][j]);
			else	printf("%d ",a[i][j]);
		}
		if(i!=N)	printf("\n");
	}
	return 0;
} 
