#include<iostream>
using namespace std;
struct student_marks
{
	int math,english,science;
};
int main()
{
	int n,i,j;
	cout<<"Enter number of students: ";
	cin>>n;
	struct student_marks s[3];
	for(i=1;i<=n;i++)
	{
		cout<<"Enter the marks of student"<<i<<endl;
		for(j=0;j<1;j++)
		{
			cout<<"Enter Mathematics Marks: "<<endl;
			cin>>s[j].math;
			cout<<"Enter English Marks: "<<endl;
			cin>>s[j].english;
			cout<<"Enter science Marks: "<<endl;
			cin>>s[j].science;
		}
	}
	int total=0;
	float average;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<1;j++)
		{
			total=total+s[j].math+s[j].english+s[j].science;
			cout<<"Total marks of student "<<i<<"= "<<total<<endl;
			average=total/3.00;
			cout<<"Average marks of student "<<i<<"= "<<average<<endl;
			if(total>=90)
			{
				cout<<"GRADE A"<<endl;
			}
			else if(total>=80 && total<=89)
			{
				cout<<"GRADE B"<<endl;
			}
			else if(total>=70 && total<=79)
			{
				cout<<"GRADE C"<<endl;
			}
			else if(total>=60 && total<=69)
			{
				cout<<"GRADE D"<<endl;
			}
			else
			{
				cout<<"GRADE F!!"<<endl;
			}
		}
		return 0;
	}
}
