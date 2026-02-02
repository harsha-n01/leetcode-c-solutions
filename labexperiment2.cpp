#include<stdio.h>
void incrvalue(int *n)
{
(*n)++;
}
int main()
{
	int num;
	printf("Enter Number");
	scanf("%d",&num);
	incrvalue(&num);
	printf("increased value is %d :num");
	return 0;
}
