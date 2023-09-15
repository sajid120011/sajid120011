#include<stdio.h>
int main()
{
	float tax_rate,salary,tax,remaining_salary;
	printf("Enter tax rate");
	scanf("%f",&tax_rate);
	printf("Enter salary");
	scanf("%f",&salary);
	tax=(tax_rate/100)*salary;
	printf("%f",tax);
	remaining_salary=salary-tax;
	printf("%f",remaining_salary);
	return 0;
}
	
