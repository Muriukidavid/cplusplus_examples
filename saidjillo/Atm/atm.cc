
/*          atm.cc             */
#include "atm.h"
int main()
{
	cout<<"ATM SIMULATION"<<endl;
	authentication authen;
	authen.authenticate();
	return 0;
}

void authentication::authenticate()
{
	pin=9501;
	cout<<"Enter your card PIN : ";
	cin>>pin;

	if(pin==9501){myATM opt;  opt.options();}else
	{
		cout<<"Wrong PIN. (1 chance) !"<<endl;cout<<"Enter your card PIN : ";cin>>pin;
		if(pin==9501){myATM opt;  opt.options();}else{cout<<"Wrong PIN. (Last chance) !"<<endl;cout<<"Enter your card PIN : ";cin>>pin;
		if(pin==9501){myATM opt;  opt.options();}else{cout<<"You have exeeded the attempt limit. Goodbye"<<endl;}
	}
	} 

}
void myATM::options()
{ 
	myATM ATMOPT;  ATMOPT.atm_stuff();
	int opt;
	cout<<"Please select a transaction : ";cin>>opt;

	if(opt==1){cout<<"Deposit transaction"<<endl;myATM depost;  depost.acc_deposit();}else if(opt==2){cout<<"Balance inquiry"<<endl;myATM bal;  bal.acc_balance();}else if(opt==3){cout<<"Withdrawal  transaction"<<endl;myATM wthdrw;  wthdrw.withdrawal();}
	else{cout<<"Invalid choice ! Try again"<<endl; myATM opt;  opt.options();} 

}




void myATM::atm_stuff()
{
	cout<<"ATM OPTIONS"<<endl;
	cout<<"1: CASH DEPOSIT"<<endl; cout<<"2: BALANCE INQUIRY"<<endl; cout<<"3: CASH WITHDRAWAL"<<endl;
}



