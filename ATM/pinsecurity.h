#ifndef PINSECURITY_H
#define PINSECURITY_H
#include <iostream>
#include <string>
#include "deposit.h"
#include "cashwithdrawal.h"
using namespace std;

class pinsecurity:protected Deposit,withdrawal
{
	public:

	int EnterPin()  //retrieves the pin for login
{
	cout<<"Enter your pin"<<endl;
	cin>>pin;
	return pin;
}

	void Login()
{
	if(pin==1000)
{ 
  cout<<"WELCOME"<<endl;
  Options();
}
	else 
{cout<<"Wrong pin!!"<<endl;}
}

	int Options()  //displays various options to be used 
{
	cout<<"Enter an option"<<endl;
	cout<<"1.DEPOSIT :"<<endl;
	cout<<"2.WITHDRAW:"<<endl;
	cin>>option;
return option;
}

void conditions()
{
  		 if(option==1)
	{
		setCashDeposit();//cash deposit.
		Newbalance();  //shows the balance after deposit is made.
	}
		else if(option==2)
	{
		setWithdrawal(cash); //calls the withdrawal function from cashwithdrawal.h
		getBalance();
	}
			else 
		{
			 cout<<"error! invalid input "<<endl;
		}
}

protected:
	int cash;
	int pin;
	int option;
};
#endif


