#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class bank
{
	char name[100],add[100],y;
	int balance,c;
	public:
		   void open_account();
		   void deposit_money();
		   void withdraw_money();
		   void display_account();
};
void bank :: open_account()
{
	cout<<"Enter your full name: \n";
	cin.ignore();
	cin.getline(name,100);
	cout<<"Enter your address: \n";
	cin.ignore();
	cin.getline(add,100);
	cout<<"What type of account you want to open: Savings(s) or Current(c): \n";
	cin>>y;
	if(!(y=='s'||y=='c'))
	{
		cout<<"Wrong option selected, Select Again";
		exit(1);
	}
	cout<<"Enter amount for deposit: \n";
	cin>>balance;
	cout<<"Your account is created. \n";
	c=1;
}
void bank :: deposit_money()
{
	if(c==1)
	{
	int a;
	cout<<"Enter amount to deposit \n";
	cin>>a;
	balance+=a;
	cout<<"Total amount Deposited \n"<< balance;
   }
   else
   {
   	cout<<"First create your account";
   }
}
void bank :: display_account()
{
	if(c==1)
	{
	cout<<"Your full name "<<name<<"\n";
	cout<<"Your Address "<<add<<"\n";
	cout<<"Type of account you Opened "<<y<<"\n";
	cout<<"Total Deposited amount "<<balance<<"\n";
    }
 else
   {
   	cout<<"First create your account";
   }
}
void bank :: withdraw_money()
{
	if(c==1)
	{
	float b;
	cout<<"Enter amount to withdraw \n";
	cin>>b;
	balance=balance-b;
	cout<<"Total deposited amount \n"<<balance;
   }
	 else
   {
   	cout<<"First create your account";
   }
}	

int main()
{
	int ch,x;
	bank obj;
	do
	{
	 cout<<"1) Open Account \n";
	 cout<<"2) Deposit Money \n";
	 cout<<"3) Withdraw Money \n";
	 cout<<"4) Display Account \n";
	 cout<<"5) Exit \n";
	 cout<<"Select from the options above \n";
	 cin>>ch;
	 switch(ch)
	 {
	 	case 1:cout<<"1)Open Account \n";
	 	obj.open_account();
	 	break;
	 	case 2:cout<<"2)Deposit money \n";
	 	obj.deposit_money();
	 	break;
	 	case 3:cout<<"3)Withdraw money \n";
	 	obj.withdraw_money();
	 	break;
	 	case 4:cout<<"4)Display Account \n";
	 	obj.display_account();
	 	break;
	 	case 5:
	 		if(ch==5)
	 		{
	 			exit(1);
			 }
	default:
		cout<<"No options matched, Try Again \n";
	}
	cout<<" \n To select options again, Press:Y \n";
	cout<<"To exit, Press:N \n";
	x=getch();
	if(x=='n'|| x=='N')
	{
		exit(0);
	
	}
	}while(x=='y'|| x=='Y');
	 
	getch();
	return 0;
}
