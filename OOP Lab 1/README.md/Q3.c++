#include<iostream>
using namespace std;
int main() 
{
	int num,target,i,j;
	cout<<"enter the numbers and target"<<endl;
	cin>>num>>target;
	int* arr=new int[num];
	cout<<"enter the numbers: ";
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<num;i++) 
	{
		for(j=i+1;j<num;j++) 
		{
			if (arr[i]+arr[j]==target) 
			{
				cout<<arr[i]<<"+"<<arr[j]<<"="<<target<<endl;
				cout<<"["<<i<<","<<j<<"]";
			}
		}
	}
	cout << "no pair found";
	return 0;
}
