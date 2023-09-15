#include<stdio.h>
int main ()
{
	int time,distance,average_speed;
	printf("Enter the time in hours");
	scanf("%d",&time);
	printf("Enter the distance travelled in kilometers");
	scanf("%d",&distance);
	average_speed=distance/time;
	printf("%d",average_speed);
	return 0;
}
