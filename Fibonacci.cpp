#include<iostream>
using namespace std;

int main()
{
	int prev = 0;
	int curr = 1;
	int next;
	cout<<"The fibonacci series of first 10 numbers is : "<<endl;
	cout<< prev<<endl;
	cout<< curr<<endl;
	for(int i=0;i<8;i++)
	{
		next = prev + curr;
		prev=curr;
		curr=next;
		cout<< next<<endl;
	}
	return 0;
}
