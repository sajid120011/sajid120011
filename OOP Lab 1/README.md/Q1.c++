#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter a Number: ";
    cin>>num;
    if(num==1)
	{
        cout<<"NOT A PRIME NUMBER";
    } 
	else 
	{
        bool isPrime=true;
        for(i=2;i<=num/2;i++) 
		{
            if(num%i==0) 
			{
                isPrime=false;
                break;
            }
        }
        if(isPrime) 
		{
            cout<<"PRIME NUMBER";
        } 
		else 
		{
            cout<<"NOT A PRIME NUMBER";
        }
    }
    return 0;
}
