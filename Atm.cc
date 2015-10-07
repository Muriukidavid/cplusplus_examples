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
		  int balance, flag, amount, checkout;
		  std::string name;
	public:
		  void input_name();
		  void interface();
};
void money_machine::input_name(){
	cout<<"Please enter your name "<<endl;
	cin>>name;
}

void money_machine::interface(){
	cout<<"********************************"<<endl;
	cout<<"  Welcome "<<name<<endl;
	cout<<"Your default standard account has 3000"<<endl;
	balance = 3000;
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

}



int main(){
	money_machine account;
        account.input_name();
	account.interface();
	return 0;
}
