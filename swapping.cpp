#include<stdio.h>
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	
}
int main()
{
	int a,b;
	printf("Enter two to swap");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("After swapping %d and %d",a,b);
	return 0;
}
