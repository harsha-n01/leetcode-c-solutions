#include<stdio.h>
#include<stdlib.h>
int main()
{
int n1,n2,*ptr;
printf("Enter n1 ");
scanf("%d",&n1);
ptr=(int*)malloc(n1*sizeof(int));
for(int i=0;i<n1;i++)
{
	printf("Enter elements");
	scanf("%d",&ptr[i]);
}
printf("Enter n2");
scanf("%d",&n2);
ptr=(int*)realloc(ptr,(n1+n2)*sizeof(int));
for(int i=n1;i<(n1+n2);i++)
{
	printf("enter elements");
	scanf("%d",&ptr[i]);
}
for(int i=0;i<(n1+n2);i++)
printf("\nThe elements you entered are %d",ptr[i]);
free(ptr);
}

