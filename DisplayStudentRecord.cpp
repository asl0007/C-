#include<iostream>
#define max 10
using namespace std;

class Student
{
	public:
		void getvalues(void);
		void display(void);
		
	private:
		char name[25];
		int roll;
		float result;
		char password[15];
};

void Student :: getvalues(void)
{
	cout<<"Enter Name: ";
	cin>>name;
	cout<<"Enter roll no: ";
	cin>>roll;
	cout<<"Enter result: ";
	cin>>result;
	cout<<"Password: ";
	cin>>password;
		
}

void Student :: display(void)
{
	cout<<"Student details: ";
	cout<<"Name"<<name<<"Roll No"<<roll;
	cout<<"Result"<<result<<"Password"<<password;
	cout<<endl;
	
}

int main()
{
	Student std[max];
	int n,i;
	cout<<"Enter total no of students: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter details of student: "<<i+1<<endl;
		std[i].getvalues();
		
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Details of students are: "<<i+1<<endl;
		std[i].display();
	}
	
	return 0;
}
