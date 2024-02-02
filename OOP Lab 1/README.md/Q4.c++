#include<iostream>
using namespace std;
int area(int num1,int num2,int num3,int num4) 
{
	if (num3>=num4) 
	{
     	return num4*(num2-num1);
	}
	else
	{
	    return num3*(num2-num1);
	}
}
int main() 
{
	int num,i,j,max=0;
	cout<<"enter the no. of walls inside the container\n";
	cin>>num;
	int* height=new int[num];
	cout<<"enter the heights of the walls\n";
	for(i=0;i<num;i++) 
	{
		cin>>height[i];
	}
	for(i=0;i<num;i++) 
	{
		for(j=i+1;j<num;j++) 
		{
			if(area(i,j,height[i],height[j])>max) 
			{
		    	max=area(i,j,height[i],height[j]);
			}
		}
	}
	cout<<"ans="<<max;
	return 0;
}
