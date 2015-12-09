#include<iostream>
using namespace std;

class atm
{
	private:
		int pin;
		int intialBal;
	public:
		int enterPin();
		int options();
		void balance();
		void deposit();
		void withdraw(); 
	atm()
	{
		int pin=1993;
		int initialBal=10000;
	}
	~atm(){}
};



int account::enterPin()
	{
	int a;
	 cout<<"Enter your 4-digit pin: ";
	 cin>>a;
	 	if (pin==a)
			{
			options();			
			}
		
		else{
			cout<<"Wrong PIN!"<<endl;
			enterPin();
			return 0;
			}
			
	}



void account::balance()
	{
	int bal;
	bal= initialBal;
	cout<<"Your current balance is: "<<bal<<endl;
	options();
	}
int account::withdraw ()
{ 	
	int newbal2,withdrawal;
	cout<<"Enter the amount you want to withdraw: ";
	cin>>withdrawal;
	newbal2 =initialBal;
	
	if (newbal2<withdrawal)
		{
			 cout<<"That amount is too large.\n You can only withdraw amounts below"<<initialBal<<endl;
			  withdraw ();
			  
			 }



else
		{
			newbal2= newbal2-withdrawal;
			initialBal = newbal2;
			balance();
			options();
		}
	
		return 0;		
}


void account::deposit ()
 {
 	int newbal, depo;
 	cout<<"Enter the amount you want to deposit: ";
 	cin>>depo;
 	newbal= balance;
 	newbal= newbal+depo;
 	balance=newbal;
 	balance();
 	



int account::options()
	{ 
		int o;
		o=0;
		cout<<"\npress:\n 1 to deposit\n 2 to withdraw\n 3 to check balance"<<endl;
		cin>>o;
		if (o==1){
			deposit ();
		}
		
			else if(o==2){
				withdraw ();
			}
			
				else if (o==3){
					balance();
						}
				else  {
					cout<<"\n\n INVALID choice!"<<endl;
					dispOptions();
							}
		
		
	}



int main ()
{
atm account;
account.enterPin();
return 0;
}
