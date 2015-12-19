/***********************
   ATM implementation
***********************/
#include <iostream>
using namespace std;

class ATM
{
  public:
  void displayMessage();
  void pin(int);
  void session();
  
   
  ATM()	//constructor
  {
  	PIN=4142;
  	initBalance=1032;
  }
  ~ATM(){}	//destructor
  
  private:
  int PIN;
  int initBalance;
  //const int PIN=4142;
  //int initBalance=1032;
  int newBalance;
  int depBalance;
  int deposit;
  int withdraw;
  int option;
 
};

void ATM::displayMessage()
 {
 int pin1;
      	cout<<"\t    Welcome to ATM!"<<endl;
      	cout<<"\tPlease insert your pin: ";
      	cin>>pin1;
      	pin(pin1);
      	
 }

void ATM::pin(int x)
 {
 	if (PIN==x) {session();}
 	else {cout<<"Wrong pin"<<endl;}
 }

void ATM::session()
{
     cout<<"\n\tSelect transaction you wish to carry out\n";
     cout<<"\t[1] Check balance \n"
         <<"\t[2] Withdraw \n"
         <<"\t[3] Deposit \n"
         <<"\t[4] Quit \n"
         <<"\n"
         <<"\tEnter option: ";
     cin>>option;
     
   switch(option)
   {
   case 1:
    cout<<"\t  BALANCE INQUIRY\n";
    cout<<"\tYour current balance is Ksh: "<<initBalance<<"\n\n";
    break;
    
    case 2:
    cout<<"\t  WITHDRAW\n";
    cout<<"\tEnter amount Ksh: ";
    cin>>withdraw;
    newBalance = initBalance - withdraw;
    initBalance = newBalance;
    cout<<"\tYour balance is: "<<newBalance<<"\n\n";
    break;
    
    case 3:
    cout<<"\t  DEPOSIT\n";
    cout<<"\tEnter amount Ksh: ";
    cin>>deposit;
    depBalance = initBalance + deposit;
    cout<<"\tYour new balance is: "<<depBalance<<"\n\n";
    break;
    
    case 4:
    cout<<"\t  EXIT\n\n";
    break;
    default :
    cout<<"\tThat is an invalid option\n";
    cout<<"\tPlease try again \n";
    break;
    }
}

int main()
{
   ATM myAccount;
   myAccount.displayMessage();
   myAccount.session(); 
}


