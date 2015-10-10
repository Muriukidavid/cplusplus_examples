/*          atm.h              */
#include<iostream>
using namespace std;

int inBal=47000;

class authentication
{
  private:
  int pin;
  public: 
  void authenticate();
};

class myATM
{
  private:
  int balance,deposit,withdraw,receipt;
  public: 
  void atm_stuff();
  void acc_balance();
  void withdrawal();
  void acc_deposit();
  void options();
};




void myATM::acc_deposit()
{
	int nxt_tran;
	cout<<"BALANCE : Ksh"<<inBal<<endl;
	cout<<"Enter the amount to deposit : ";cin>>deposit;
	double finBal=inBal+deposit;
	cout<<"Ammount accepted !"<<endl;
	cout<<"CURRENT BALANCE : Ksh"<<finBal<<endl;
	cout<<"Transaction complete !"<<endl;

	cout<<"Do you want to make another transaction ?"<<endl;
	cout<<"1: YES"<<endl;
	cout<<"2: NO"<<endl;
	cin>>nxt_tran;
	if(nxt_tran==1){myATM opt;  opt.options();}else{cout<<"Thank you, goodbye"<<endl;}
}

void myATM::acc_balance()
{
	int nxt_tran;
	balance=inBal;

	cout<<"CURRENT BALANCE : Ksh"<<balance<<endl;
	cout<<"Transaction complete !"<<endl;

	cout<<"Do you want to make another transaction ?"<<endl;
	cout<<"1: YES"<<endl;
	cout<<"2: NO"<<endl;
	cin>>nxt_tran;
	if(nxt_tran==1){myATM opt;  opt.options();}else{cout<<"Thank you, goodbye"<<endl;}
}








void myATM::withdrawal()
{
	int nxt_tran;
	double overdraft;
	balance=inBal;    
	double withdraw=0;
	cout<<"CURRENT BALANCE : Ksh"<<balance<<endl;
	cout<<"Enter the ammount to withdraw : ";cin>>withdraw;
	if(withdraw>balance){cout<<"Sorry, your account balance is insufficient to withdraw Ksh "<<withdraw
    <<". Do you however want to make an overdraft ? (You will be owing the bank in this case)"<<endl;
    cout<<"1: YES"<<endl;	cout<<"2: NO"<<endl;
    cin>>overdraft;
    if(overdraft==1)
    { 
    	double over_draft=withdraw-balance;
    	cout<<"Transaction complete !"<<endl; cout<<"Withdrawn : Ksh"<<withdraw<<endl;
	    cout<<"CURRENT BALANCE : Ksh0.00"<<endl;
	    cout<<"OVERDRAFT : Ksh"<<over_draft<<endl;

    }
    else if(overdraft==2)
    {
    	double withdraw_2=0;
    	cout<<"Enter the ammount to withdraw : ";cin>>withdraw_2;
    	double finBal_wth=balance-withdraw_2;
    	cout<<"Transaction complete !"<<endl; cout<<"Withdrawn : Ksh"<<withdraw_2<<endl;
	    cout<<"CURRENT BALANCE : Ksh"<<finBal_wth<<endl;
    }
	}
	else
    {
    	double finBal_wth=balance-withdraw;
    	cout<<"Transaction complete !"<<endl; cout<<"Withdrawn : Ksh"<<withdraw<<endl;
	    cout<<"CURRENT BALANCE : Kshs"<<finBal_wth<<endl;
    }
	
	cout<<"Do you want to make another transaction ?"<<endl;
	cout<<"1: YES"<<endl;
	cout<<"2: NO"<<endl;
	cin>>nxt_tran;
	if(nxt_tran==1){myATM opt;  opt.options();}else{cout<<"Thank you, goodbye !"<<endl;}


}