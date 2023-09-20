# Sajid Ali
# Asignment of lab 05
# 23k-0077
# Problem 01

#include<stdio.h>
int main()
{
	int number;
	printf("Enetr a number= ");
	scanf("%d",&number);
	if(number%3==0)
	printf("Number is multiple of 3");
	else
	printf("Number is not divisble by 3");
	return 0;
}

# Problem 02

#include<stdio.h>
int main()
{
	int time;
	printf("Enetr the time");
	scanf("%d",&time);
	if(time>=5 && time<=11)
	{
		printf("GOOD MORNING");
	}
	else if(time>11 && time<=18)
	{
		printf("GOOD AFTERNOON");
	}
	else if(time>18 && time<=24)
	{
		printf("GOOD NIGHT");
	}
	else
	{
		printf("INVALID TIME");
	}
	return 0;
}

# Problem 03

#include <stdio.h>
int main()
{
    char command;
    printf("Are you sure to delete [Y/y] / [N/n]? ");
    scanf("%c", &command);
    switch (command)
	 {
        case 'Y':
        case 'y':
            printf("Deleted successfully");
            break;
        case 'N':
        case 'n':
            printf("Delete canceled");
            break;
        default:
            printf("Choose the right option (Y/y or N/n)\n");
            break;
    }
    return 0;
}

# Problem 04

#include<stdio.h>
int main()
{
	int num1,num2,operation;
	printf("Enter value of num1= ");
	scanf("%d",&num1);
	printf("Enter value of num2= ");
	scanf("%d",&num2);
	printf("Press 1 for sddition\n Press 2 for subtraction\n Press 3 for multiplication\n Press 4 for division");
	scanf("%d",&operation);
	switch(operation)
	{
		case 1:
			printf("%d\n", num1 + num2);
			break;
		case 2:
			printf("%d",num1-num2);
			break;
		case 3:
			printf("%d",num1*num2);
			break;
		case 4:
			printf("%d",num1/num2);
			break;
		default :
			printf("Wrong command");
			break;
	}
	return 0;
}

# Problem 05

#include <stdio.h>
int main()
{
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);
    if (character >= 'a' && character <= 'z')
	 {
        printf("The character is a small alphabet");
     } 
	else if (character >= 'A' && character <= 'Z') 
	 {
        printf("The character is a capital alphabet");
     }
	else if (character >= '0' && character <= '9') {
        printf("The character is a digit");
     } 
	else
	 {
        printf("The character is a special character");
     }
    return 0;
}

# Problem 06

#include <stdio.h>
int main()
{
     char number; 
    printf("Enter an 8-bit number: ");
    scanf("%c", &number);
    if (number & (1 << 3) && number & (1 << 6))
	 {
        number &= ~(1 << 3); 
        number &= ~(1 << 6); 
        printf("The 4th and 7th bits were turned off");
     } 
	else
	 {
        printf("The 4th and/or 7th bits were not set");
     }
    printf("The modified number is: %u\n", number);

    return 0;
}

# Problem 07

#include <stdio.h>
int main() 
{
    double costOfShopping, discount,amountAfterDiscount,savedAmount;
    printf("Enter the cost of shopping: ");
    scanf("%f", &costOfShopping);
    if (costOfShopping > 6000) 
	 {
        discount = 0.5; 
     } 
	else if (costOfShopping >= 4001 && costOfShopping <= 6000)
	 {
        discount = 0.3; 
     } 
	else if (costOfShopping >= 2000 && costOfShopping <= 4000) 
	 {
        discount = 0.2; 
     } 
	else if (costOfShopping > 1999)
	 {
        discount = 0.5; 
     } 
	else 
	 {
        discount = 0; 
     }
    savedAmount = costOfShopping * discount;
    amountAfterDiscount = costOfShopping - savedAmount;
    printf("Actual Amount: %f\n", costOfShopping);
    printf("Saved Amount: %f\n", savedAmount);
    printf("Amount After Discount: %f\n", amountAfterDiscount);
    return 0;
}

# Program 08

#include <stdio.h>
int main()
 {
    int Intensity;
    printf("Enter the light intensity value (0-1000)= ");
    scanf("%d", &Intensity);
    if (Intensity > 500)
	 {
        printf("Set brightness to high\n");
     } 
	else if (Intensity >= 100 && Intensity <= 500)
	  
        printf("Set brightness to medium\n");
     }
	 else if (Intensity >= 0 && Intensity < 100)
	 {
        printf(" Set brightness to low\n");
     }
	 else
	  {
        printf("Invalid light intensity value");
      }
    return 0;
}


