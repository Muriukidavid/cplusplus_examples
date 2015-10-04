#include <iostream>

using namespace std;
class account{
	private:
		int  deposit;
		const int pin=4040;
		int balance=10304;
	public:
	 int enterPin(int);
	 void displayBalance();
	 int setBalance (int);
	 int getBalance ();
	 int dispOptions();
};

int account::enterPin(int x)
	{
		if (pin==x){
			cout<<"\nPlease wait while your request is being processed."<<endl;
						
			return 0;
			}
		
		else{
			cout<<"\nWrong PIN!"<<endl;
			return 1;
			}
			
	}
	
void account::displayBalance()
{
	//int y;
	//y=balance;
	cout<<"Your current balance is: "<<getBalance()<<endl;
}

int account::getBalance()
	{
		//cout<<"Enter the amount you want to deposit: "<<endl;
		//cin>>z;
		return balance;
	}
int account::setBalance (int z)
	{
		int totalBalance;
		totalBalance=balance;
		totalBalance=z+totalBalance;
		balance=totalBalance;
		//cout<<"\nyour new account balance is: "<<totalBalance<<endl;
		
	}
	
int account::dispOptions()
	{ 
		int o;
		cout<<"press:\n 1 to deposit\n 2 to check balance\n"<<endl;
		cin>>o;
		return o;
	}

