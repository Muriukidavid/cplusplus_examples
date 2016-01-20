#ifndef BALANCECHECK_H
#define BALANCECHECK_H
#include <iostream>
#include<string>
#include "cashwithdrawal.h"
#include "deposit.h"
using namespace std;

class balancecheck
{
 	public:

	void DisplayBalance()
{

	cout<<"Your current balance is "<<amount<<endl;
}
	 protected:
		int amount;
		int Balance;
};
#endif
