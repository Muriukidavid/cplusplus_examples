#include <iostream>

using namespace std;
class account{
	private:
		//int  deposit;
		 int pin;
		int balance;
	public:
	 int enterPin();
	 int dispOptions();
	 void displayBalance();
	void deposit ();
	 int withdraw ();
	
	account(){
	 pin=4040;
	balance=10304;
	}
	
	 ~account(){
	 
	 }
	 
};

int account::enterPin()
	{
	int x;
	 cout<<"Please enter your current pin: ";
	 cin>>x;
	 
		if (pin==x){
			cout<<"\nPlease wait while your card is being processed."<<endl;
			dispOptions();			
			
			}
		
		else{
			cout<<"\nWrong PIN!"<<endl;
			return 0;
			}
			
	}
	
void account::displayBalance()
{
	int bal;
	bal= balance;
	cout<<"\nYour current balance is: "<<bal<<endl;
	dispOptions();
	//cout<<"Your current balance is: "<<getBalance()<<endl;
}

 void account::deposit ()
 {
 	int newbal, depo;
 	cout<<"Enter the amount you want to deposit: ";
 	cin>>depo;
 	newbal= balance;
 	newbal= newbal+depo;
 	balance=newbal;
 	displayBalance();
 	
 	
 }

int account::withdraw ()
{ 	
	int newbal2,withdrawal;
	cout<<"Enter the amount you want to withdraw: ";
	cin>>withdrawal;
	newbal2 =balance;
	
	if (newbal2<withdrawal)
		{
			 cout<<"\nYou have insufficient account balance!\nPlease try again"<<endl;
			  withdraw ();
			  
			 }
			 
	else
		{
			newbal2= newbal2-withdrawal;
			balance = newbal2;
			displayBalance();
			
		}
	
		return 0;		
}





	
int account::dispOptions()
	{ 
		int o;
		o=0;
		cout<<"\npress:\n 1 to deposit\n 2 to withdraw\n 3 to check balance\n 4 to exit "<<endl;
		cin>>o;
		if (o==1){
			deposit ();
		}
		
			else if(o==2){
				withdraw ();
			}
			
				else if (o==3){
					displayBalance();
						}
				
					else if (o==4){
						return 0;}
						
				else  {
					cout<<"\n\n INVALID choice!"<<endl;
					dispOptions();
							}
		
		
	}


