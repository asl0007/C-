#include<iostream>
using namespace std;

int main()
{
	int arr[10],n,i;
	cout<<"Enter size of array: "<<endl;
	cin>>n;
	cout<<"Enter array elements: "<<endl;
	for (i=0;i<n;i++)
	{
		cin >>  arr[i];
	}
	int count = 0;
	int val;
	cout<<"Enter the value whose frequency u want to calculate: "<<endl;
	cin>>val;
	for (i=0;i<n;i++)
	{
		if(val==arr[i])
		{
		count += 1;
		
		}
	}
	cout<<"The frequency is : "<<count<<endl;
	return 0;

}
