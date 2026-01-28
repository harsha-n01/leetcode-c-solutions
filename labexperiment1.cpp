/*permutation and combination*/
#include<stdio.h>
int fact(int n)
{
int fact=1;
for(int i=1;i<=n;i++)
fact=fact*i;
return fact;
}
int permutation(int n,int r)
{
	int permutation;
	permutation=fact(n)/fact(n-r);
	return permutation;
}
int combination(int n,int r)
{
	int combination;
	combination=fact(n)/fact(n-r)*fact(r);
	return combination;
}
int main()
{
	int choice,n,r,result;
//	printf("Enter 'n' and 'r' values   :");
//	scanf("%d%d",&n,&r);
	for(choice=0;choice<3;)
	{
	printf("\n1.Permutation\n2.combination\n3.exit\nSelect your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
		printf("Enter 'n' and 'r' values   :");
    	scanf("%d%d",&n,&r);
result=permutation(n,r);
printf("permutation %dp%d   =%d",n,r,result);
break;
case 2:
		printf("Enter 'n' and 'r' values   :");
	    scanf("%d%d",&n,&r);
result=combination(n,r);
printf("combination %dc%d  =%d",n,r,result);
break;
case 3:
	printf("Exit");
	break;
	default:
		printf("Error  :Invalid choice");
}
}
}

