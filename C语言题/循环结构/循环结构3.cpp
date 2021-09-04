#include<stdio.h>
int main(){
	int N=0;
	scanf("%d",&N);
	int a[N][N];
	struct{
		int row;
		int list;
	}elem[N*N];
//	int a[N][N];不知道为什么放这里，内存会出错 
	for(int i=1;i<=N;i++){//数组初始化，第4步要判断是否已存了数 
		for(int j=1;j<=N;j++){
			a[i][j]=0;
		}
	}
//	for(int i=1;i<=N;i++){
//		for(int j=1;j<=N;j++){	
//			if(j==N)	printf("%d",a[i][j]);
//			else	printf("%d ",a[i][j]);
//		}
//		if(i!=N)	printf("\n");
//	}
//	printf("\n\n");
	elem[1].row=1;
	elem[1].list=(N+1)/2;
	a[elem[1].row][elem[1].list]=1;
	for(int i=1;i<N*N;i++){
		if(elem[i].row==1&&elem[i].list!=N){
			elem[i+1].row=N;
			elem[i+1].list=elem[i].list+1;
			a[elem[i+1].row][elem[i+1].list]=i+1;
		}
		if(elem[i].row!=1&&elem[i].list==N){
			elem[i+1].row=elem[i].row-1;
			elem[i+1].list=1;
			a[elem[i+1].row][elem[i+1].list]=i+1;
		}
		if(elem[i].row==1&&elem[i].list==N){
			elem[i+1].row=elem[i].row+1;
			elem[i+1].list=elem[i].list;
			a[elem[i+1].row][elem[i+1].list]=i+1;
		}
		if(elem[i].row!=1&&elem[i].list!=N){
			if(a[elem[i].row-1][elem[i].list+1]==0){
				elem[i+1].row=elem[i].row-1;
				elem[i+1].list=elem[i].list+1;
				a[elem[i+1].row][elem[i+1].list]=i+1;
			}else{
				elem[i+1].row=elem[i].row+1;
				elem[i+1].list=elem[i].list;
				a[elem[i+1].row][elem[i+1].list]=i+1;
			}
			
		}
	}
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){	
			if(j==N)	printf("%d",a[i][j]);
			else	printf("%d ",a[i][j]);
		}
		if(i!=N)	printf("\n");
	}
}
