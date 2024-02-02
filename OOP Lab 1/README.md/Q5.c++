#include<iostream>
using namespace std;
struct details
{
	string name;
	int date;
	string venue;
	string organizer;	
};
int main () 
{
	int num,i;
	int date;
	cout<<"enter the total no. of events\n";
	cin>>num;
	details*events=new details[num];
	for(i=0;i<num;i++) 
	{
		cout<<"enter the name of the events\n";
		cin>>events[i].name;
		cout<<"enter the date of the event\n";
		cin>>events[i].date;
		cout<<"enter the venue of the event\n";
		cin>>events[i].venue;
		cout<<"enter the name of organizer of the event\n";
		cin>>events[i].organizer;
		cout<<endl;
	}
	cout<<"enter date\n";
	cin>>date;
	for(i=0;i<num;i++) 
	{
		if(date==events[i].date) 
		{
		    cout<<"event "<<i+1<<":\n";
			cout<<"name="<<events[i].name<<"\ndate="<<events[i].date<<"\nvenue="<<events[i].venue<<"\norganizer="<<events[i].organizer<<"\n";
			cout<<endl;
	}
	}
	delete[] events;
	return 0;
}

