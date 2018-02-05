#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<cstring>
#include<vector>
using namespace std;
int i;
class bank
{
    long  int  acc_no;
    long double amount;
    public:  string name;
    string tof_acc;
    bank( long  double accno=000000000,long int  amnt=000000,string _name="ram",string _tof="nothing"):acc_no(accno),amount(amnt),name(_name),tof_acc(_tof){}
    ~bank(){}
    void create_acc();
    void update_acc();
    void display();
    void display(int z,int g);
    void display(int f);
    void compare(int ano);

};
vector<bank>A;


void bank::display()
{
    system("cls");
 cout<<"name="<<name<<"\nacc-no="<<acc_no<<"\namount="<<amount<<"rs\n";

}
void bank::display(int z,int g)
{
    system("cls");
   cout<<"amount="<<amount+z<<"rs\n";

}
void bank::display(int f)
{
    system("cls");
    cout<<"amount="<<amount-f<<"rs\n";
}

void  bank::update_acc()
{



    int x;



    cout<<"what would you like to do sir/mam\n";
    cout<<"1)deposit amount\n";
    cout<<"2)widraw amount\n";
    cout<<"3)check balance\n";
    cout<<"0 exit\n";

    cin >>x;
    switch(x)
    {
        case 1:system("cls");
                cout<<"enter the amount you want to deposit\n";
                int z;
                cin>>z;
                display(z,0);
                break;
        case 2:system("cls");
                cout<<"enter the amount you want to widraw\n";
                int f;
                cin>>f;
                display(f);
                break;
        case 3:system("cls");
                display();
                break;
         case 0: break;
    }

}
void bank::compare(int ano)
{
    int flag=0;
     for(i=0;i<A.size();i++)
    {
              if(ano==A[i].acc_no)
           {
            cout<<"found"<<endl;
           flag=1;
        A[i].update_acc();

           break;
           }

    }
    if(flag==0)
    cout<<"not found"<<endl;
             return;

}

void bank::create_acc()
{
    int  p;
    cout<<"enter accout no\n";
    cin>>acc_no;
    cout<<"enter your name here\n";
    cin>>name;
    cout<<"which type of account you want to open\n";
    cout<<"1)saving\n"<<"2)current\n";
    cin>>p;

    switch(p)
    {
        case 1:
            system("cls");
            tof_acc="saving";
            cout<<"enter the amount you want to deposit into your acc.\n";
                cin>>amount;
                cout<<"would you like to view your details\n enter 1)YES or 2)NO\n";
                int  ans;
                cin>>ans;
                switch(ans)
                {
                    case 1:display();
                    break;
                    case 2:cout<<"\nthanks";
                    break;

                }

                break;
        case 2:system("cls");
             tof_acc="current";
         cout<<"enter the amount you want to deposit into your acc.";
                cin>>amount;
                cout<<"would you like to view your details\n enter 1)YES or 2)NO";
                int  anss;
                cin>>anss;
                switch(anss)
                {
                    case 1:display();
                    break;
                    case 2:cout<<"thanks";
                    break;

                }


    }
}
int main()
{     int j=0;
      //bank obj;
     int n,ano;
    system("color 3F");
    do
    {

    cout<<"Hey! Welcome sir what whould u like to do"<<endl;
    cout<<"1)Open the new account "<<endl;
    cout<<"2)Update into exixting account"<<endl;
    cout<<"3)Print 0 for exit.\n";
    cin>>n;

    switch (n)
    {
        case 1:
             system("cls");
             j++;
           // for(i=0;i<10;i++)
            A.resize(j);
            A[j-1].create_acc();
            break;
        case 2:system("cls");
              cout<<"enter your  acconunt no. to update\n";
              cin>>ano;
             A[j-1].compare(ano);
          case 0: break;
    };
    }while(n);
    return 0;
}


