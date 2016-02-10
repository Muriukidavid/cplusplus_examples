#ifndef BALANCECHECK_H
#define BALANCECHECK_H
#include <iostream>
#include "deposit.h"
using namespace std;

class balancecheck
{
	public:
	
void setDisplayBalance(int Balance)
{

 amount=Balance;
 
}

	int getBalance()
{
	return amount;
}

 int Accountbalance()
{

	cout<<"Your current balance is now "<<amount<<endl;

 	return amount=deposit+balance;
}
private:
	int amount;
	int balance;
};
#endif

int main()
{
int Balance;
balancecheck check;
check.setDisplayBalance(Balance);
check.DisplayBalance();
return 0;
}
