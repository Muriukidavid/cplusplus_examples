#ifndef DEPOSIT_H
#define DEPOSIT_H
#include <iostream>
#include "cashwithdrawal.h"
using namespace std;

class Deposit
{
   	public:
	
   int setCashDeposit() //get the deposit.
{
	cout<<"How much would you like to deposit:"<<endl;
	cin>>cashdeposit;
	return cashdeposit;
}

 
 	void Newbalance() //show balance after deposit.
{
	int amount=10000+cashdeposit;
	cout<<"Your new balance is "<<amount<<endl;

}
  protected:
	int cashdeposit;
	int deposit;
	int amount;
};
#endif

  

  




























