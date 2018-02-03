#include<iostream>
using namespace std;

int main()
{
	int no,one,ten,hund;
	char *ones,*tens,*huns;
	
	cout<<"Enter a three digit number: "<<endl;
	cin>>no;
	one=no%10;
	ten=(no/10)%10;
	hund=((no/10)/10)%10;
	switch(hund)
	{
		case 0:huns=" ";break;
		case 1:huns="One";break;
		case 2:huns="Two";break;
		case 3:huns="Three";break;
		case 4:huns="Four";break;
		case 5:huns="Five";break;
		case 6:huns="Six";break;
		case 7:huns="Seven";break;
		case 8:huns="Eight";break;
		case 9:huns="Nine";break;				
	}
	if(ten==1)
	{
		ones=" ";
		switch(one)
		{
			case 0:tens="Ten ";break;
			case 1:tens="Eleven";break;
			case 2:tens="Twelve";break;
			case 3:tens="Thirteen";break;
			case 4:tens="Fourteen";break;
			case 5:tens="Fifteen";break;
			case 6:tens="Sixteen";break;
			case 7:tens="Seventeen";break;
			case 8:tens="Eighteen";break;
			case 9:tens="Nineteen";break;
		}
	}
	else
	switch(one)
	{
		case 0:ones=" ";break;
		case 1:ones="One";break;
		case 2:ones="Two";break;
		case 3:ones="Three";break;
		case 4:ones="Four";break;
		case 5:ones="Five";break;
		case 6:ones="Six";break;
		case 7:ones="Seven";break;
		case 8:ones="Eight";break;
		case 9:ones="Nine";break;
	}
	switch(ten)
	{
		case 0:tens=" ";break;
		case 2:tens="Twenty";break;
		case 3:tens="Thirty";break;
		case 4:tens="Fourty";break;
		case 5:tens="Fifty";break;
		case 6:tens="Sixty";break;
		case 7:tens="Seventy";break;
		case 8:tens="Eighty";break;
		case 9:tens="Ninety";break;
	}
	cout<<huns<<"Hundred"<<tens<<ones<<endl;
	return 0;
}
