/**
*This is aprogram that tries to show how an atm machine works
*it asks the user for name and pin which by default is set to 1234, sets the default amount in the account to be 3000
*and allows the user to perform a number of transaction such as withdrawal, deposit and even check balance
*wATCH
*/

#include<iostream>
#include<string>
using namespace std;

class bank{
	public:
		  int money;
		  void deposit(void){
			  cout<<"HOw much do you want to deposit?"<<endl;
			  cin>>money;
			  cout<<"\nYou have deposited "<<money<<endl;
		  }
};

class money_machine{
	protected:
		  int balance, flag, amount, checkout, pin;
		  std::string name;
	public:
		  void input_name();
		  int interface();
};
void money_machine::input_name(){
	cout<<"Name: ";
	cin>>name;
        cout<<"Pin : ";
	cin>>pin;
}

int money_machine::interface(){
	if (pin != 1234)      //Checks the pin with the default which is 1234
	{
		cout<<"I'm sorry you entered the wrong pin!"<<endl<<"Check and try again"<<endl;
		return 1;
	}
	cout<<"********************************"<<endl;
	cout<<"  Welcome "<<name<<endl;
	cout<<"Your default standard account has 3000"<<endl;
	balance = 3000;   //The default amount in the account is set to 3000 which can be changed
	while (1){
		cout<<"______________________________"<<endl;
		cout<<"Press 1 for Balance\t";
		cout<<"Press 2 for Withdrawal"<<endl;
		cout<<"Press 3 for Deposit\t";
		cout<<"Press 4 to Quit"<<endl;
                cout<<"______________________________"<<endl;
		cin>>flag;
		if (flag == 1){
			cout<<"Your Balance is "<<balance<<endl<<endl;
		}
		else if(flag == 2){
			cout<<"How much do you want to withdraw"<<endl;
			cin>>amount;
			if (amount >= balance){
				cout<<"SOrry you do not have enough money in your account\n"<<endl;
			}
			else if(amount >= 0){
				cout<<"Withdrawing "<<amount<<" ....."<<endl<<"Done."<<endl;
				balance=balance-amount;
				cout<<"Your new balance is "<<balance<<endl<<endl;
			}
			else{
				cout<<"Error ocurred!";
				break;
			}
		}
		else if (flag == 4){break;}
		else if (flag == 3){bank transaction; transaction.deposit(); if (transaction.money < 0){cout<<"Error ocurred!"<<endl; break; }balance = balance + transaction.money;cout<<"new balance = "<<balance<<endl<<endl;}
		else{
			cout<<"Wrong Input!"<<endl;
		}
		
		cout<<"Do you want another transaction? "<<endl;
		cout<<" 1 for Yes"<<endl;
		cout<<" 2 for No"<<endl;
		cout<<"\n";
		cin>>checkout;
		
		while ((not(checkout == 1)) && (not(checkout == 2))){cin>>checkout;}
				
		if (checkout == 2){
			break;}
		else if (checkout == 1){
			continue;}
		else {
			//cin>>checkout;
		}
	}                
	
	cout<<"\nThank you!"<<endl;
        cout<<"********************************"<<endl;
        return 0;
}



int main(){
	money_machine account;
        account.input_name();
	account.interface();
	return 0;
}
