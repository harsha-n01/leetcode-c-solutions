#include<stdio.h>
void input(int *array,int n)
{
printf("Enter elments of array  :");
for(int i=0;i<n;i++)
{
	scanf("%d",&array[i]);
}
}
int sum(int *array,int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
sum=sum+array[i];
return sum;
}
int Avg(int *array, int n)
{
    int s = sum(array, n); 
    int avg = s / n;
    return avg;
}


int min(int *array,int n)
{
	int min=array[0];
	for(int i=1;i<n;i++){
	
	if(*(array+i)<min)
	min=*(array);
	}
	return min;
}
int max(int *array,int n)
{
	int max;
	max=*array;
	for(int i=1;i<n;i++)
	if(*(array+i)>max)
	max=*(array);
	return max;
}
int main()
{
	int n,choice,result;
	printf("Enter number of elements of array  :");
	scanf("%d",&n);
	int array[n];
	input(array,n);
	for(choice=0;choice<5;){
	printf("\n1.sum\n2.average\n3.minimum\n4.maximum\n5.Exit\nEnter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			result=sum(array,n);
			printf("sum of array elements is  : %d\n",result);
			break;
			case 2:
			result=Avg(array,n);
			printf("avg of array elements is  : %d\n",result);
			break;case 3:
			result=min(array,n);
			printf("minimum of array elements is  : %d\n",result);
			break;case 4:
			result=max(array,n);
			printf("maximum of array elements is  : %d\n",result);
			break;
			case 5:
		  printf("Exit");
			break;
			default:
				printf("enter valid choice");
		
			
	}
}

	
}
