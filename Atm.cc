#include<iostream>
#include<string>
using namespace std;

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
		cout<<"Press 1 for Balance"<<endl;
		cout<<"Press 2 for Withdrawal"<<endl;
		cout<<"Press 3 to Quit"<<endl;
		//cout<<"Press 4 to Deposit"<<endl;
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
			else{
				cout<<"Withdrawing "<<amount<<"....."<<endl<<"Done."<<endl;
				balance=balance-amount;
				cout<<"Your new balance is "<<balance<<endl<<endl;
				cout<<"Do you want another transaction? "<<endl;
				cout<<" 1 for Yes"<<endl;
				cout<<" 2 for No"<<endl;
				cin>>checkout;
				
				if (checkout == 2){
					break;}
				else if (checkout == 1){
					continue;}
				else {
					cin>>checkout;}
			}
		}
		else if (flag == 3){break;}
		else{
			cout<<"Wrong Input!"<<endl;
		}
	}                
	cout<<"\nThank you!"<<endl;
        cout<<"********************************"<<endl;

}

int main(){
	money_machine bank;
        bank.input_name();
	bank.interface();
	return 0;
}
