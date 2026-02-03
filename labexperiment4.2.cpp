#include<stdio.h>
void toh(int n,char source,char auxillary,char destination)
{
	if(n>0){
	toh(n-1,source,destination,auxillary);
	printf("%c->%c\n",source,destination);
	toh(n-1,auxillary,destination,auxillary);
}
}
int main()
{
	int n;
printf("Enter no of discs :");
scanf("%d",&n);
toh(n,'A','B','c');
return 0;
}
