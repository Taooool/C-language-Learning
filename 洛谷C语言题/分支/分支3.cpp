#include<stdio.h>
int main(){
	int p1,p2,p3;
	int a[4];
	char c1,c2,c3;
	scanf("%d %d %d",&p1,&p2,&p3);
	scanf("\n%c%c%c",&c1,&c2,&c3);//防止回车存进去 
	a[3]=p1>(p2>p3?p2:p3)?p1:(p2>p3?p2:p3);//max
	a[2]=p1>(p2>p3?p2:p3)?(p2>p3?p2:p3):(p1>(p2>p3?p3:p2)?p1:(p2>p3?p3:p2));//mid
	a[1]=p1<(p2<p3?p2:p3)?p1:(p2<p3?p2:p3);//min
//	printf("%d %d %d\n",a[1],a[2],a[3]);
//	printf("%c %c %c\n",c1,c2,c3);
	int q1,q2,q3;
	q1=c1-'A'+1;
	q2=c2-'A'+1;
	q3=c3-'A'+1;
//	printf("%d %d %d\n",q1,q2,q3);
	printf("%d %d %d",a[q1],a[q2],a[q3]);
	return 0;
} 

/*a better one
int main(void)
{
	int nums[3];
	char str[4];

	scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);

	BubbleSort(nums, 3);

	scanf("%s", str);

	for (int i = 0; str[i] != 0; i++)//          the core
	{
		switch (str[i])
		{
		case 'A':
			printf("%d ", nums[0]);
			break;
		case 'B':
			printf("%d ", nums[1]);
			break;
		case 'C':
			printf("%d ", nums[2]);
			break;
		}
	}
	printf("\n");

	return 0;
}
*/

