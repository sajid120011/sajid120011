#include<stdio.h>
int main ()
{
	float volume,radius,height;
	printf("Enetr radius of cone=");
	scanf("%f",&radius);
	printf("Enter height of cone=");
	scanf("%f",&height);
	volume=3.14*radius*radius*(height/3);
	printf("%0.3f",volume);
	return 0;
	
}
