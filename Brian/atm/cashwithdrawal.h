#ifndef CASHWITHDRAWAL_H
#define CASHWITHDRAWAL_H
#include<iostream>
#include "deposit.h"
using namespace std;
 

class withdrawal
{
	public:
	
	int setWithdrawal(int cash)
{
	cout<<"Please enter your withdrawal amount :";
	cin>>cash;
	int withdraw=cash;
	
	if (withdraw<amount) 
{
	cout<<"an amount of "<<withdraw<<" has been withdrawn from your account"<<endl;
}
	else if (withdraw>amount)
{
	cout <<"you have insufficient funds in your account"<<endl;
 	 
}
		return withdraw;
}
	

	int getBalance()   //gets the balance.
{
	balance=10000-withdraw;
	return balance;
	
}

	void displayBalance(int balance)
{
	cout<<"your balance after withdrawal is :"<<balance<<endl;
}

 protected:
	int cash;
	int amount;
	int withdraw;
	int balance;
};
#endif


