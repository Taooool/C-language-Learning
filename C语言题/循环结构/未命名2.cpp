#include<stdio.h>
void Change(int &a,int &b);
int main (){
	int a=1,b=2;
	Change(a,b);
	printf("%d %d",a,b);
	return 0;
}
void Change(int &m,int &n){//&a表示地址，a还是表示数。 解释了为什么这里加&，链表也如此。 
	int c=m;
	m=n;
	n=c;
} 
