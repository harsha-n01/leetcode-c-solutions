#include<stdio.h>
typedef struct
{
float real;
float img;
}complex;
complex readcomplex()
{
	complex c;
	printf("Enter real part  :");
	scanf("%f",&c.real);
	printf("Enter imaginary part  :");
	scanf("%f",&c.img);
	return c;
}
void displaycomplex(complex c)
{
	printf("%.2f+i%.2f\n",c.real,c.img);
}
complex add(complex c1,complex c2)
{
	complex c3;
	c3.real=c1.real+c2.real;
	c3.img=c1.img+c2.img;
	return c3;
}
complex sub(complex c1,complex c2)
{
	complex c3;
	c3.real=c1.real-c2.real;
	c3.img=c1.img-c2.img;
	return c3;
}
complex multiplication(complex c1,complex c2)
{
	complex c3;
	  c3.real = (c1.real * c2.real) - (c1.img * c2.img);
    c3.img = (c1.real * c2.img) + (c1.img * c2.real);
return c3;
}
int main()
{
	complex c1,c2,sum,diff,prod;
	printf("enter first complex number  :\n");
	c1=readcomplex();
	printf("Enter secocnd complex number  :\n");
	c2=readcomplex();
	sum=add(c1,c2);
		printf("addition :\n");
	displaycomplex(sum);
	diff=sub(c1,c2);
		printf("difference:\n");
	displaycomplex(diff);
	prod=multiplication(c1,c2);
		printf("multiplication:\n");
	displaycomplex(prod);
	return 0;
	
}
