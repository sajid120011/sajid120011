#include<stdio.h>
int main()
{
	int n1,n2,swap;
	printf("Enter value of number1=");
	scanf("%d",&n1);
	printf("Enter value of number2=");
	scanf("%d",&n2);
	swap=n1;
	n1=n2;
	n2=swap;
	printf("Values after swaping are \n");
	printf("number1=%d\n",n1);
	printf("number2=%d\n",n2);
	return 0;
}
