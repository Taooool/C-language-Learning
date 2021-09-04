#include<stdio.h>
int main(){
	char a[20];
	scanf("%s",&a);
//	a[12]=4+'0';
//	int b=a[12]-'0';
	int sum=0;
	for(int i=0,j=1; i<12; i++){//运行12次不是13次，ISBN码总长13 
		if(a[i]=='-')	continue;
		sum+=(a[i]-'0')*j;
		j++;
	}
//	printf("%d",sum%11);
	if(sum%11==a[12]-'0'||(sum%11==10&&a[12]=='X'))	{//==可以用来判断字符 
		printf("Right");
		return 0;
	}
	else{
		if(sum%11==10)	a[12]='X'; 
		else a[12]=sum%11+'0';
		printf("%s",a);
	}
//	printf("%c",a[12]);
	return 0;
}
