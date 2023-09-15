#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b,c,disc,x1,x2,d;
	printf("Enter the value of a");
	scanf("%if",&a);
	printf("Enetr value of b");
	scanf("%if",&b);
	printf("Enetr value of c");
	scanf("%if",&c);
	disc=b*b-4*a*c;
	d=2*a;
	x1=(-b+sqrt(disc))/(d);
	printf("root1=%d\n",x1);
	x2=(-b-sqrt(disc))/(d);
	printf("root2=%d\n",x2);
	return 0;
}
