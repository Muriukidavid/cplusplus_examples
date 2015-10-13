//Bernie Gach
#include<iostream>
#include<string>
#include"atm.h"
using namespace std;

atm::atm()
{
 password=1200;
}
void atm::session()
{
 while(1)
 {
  int choice;
  double amount;
  int allow;
  cout<<"Enter the password"<<endl;
  cin>>allow;
  if(!security(allow))
  {
   cerr<<"Wrong password"<<endl;
  continue;
  }
  cout<<"Enter\n1 for deposit\n2 for withdraw\n3 for check balance and CTRL+Z to     terminate"<<endl; 
  cin>>choice;
  switch(choice)
  {
   case 1:
    cout<<"Enter the amount to deposit"<<endl;
    cin>> amount;
    deposit(amount);
    break;
   case 2:
     cout<<"Enter the amount to withdraw"<<endl;
    cin>> amount;
    withdraw(amount);
    break;
   case 3:
     cout<<"Balance is: "<<get_balance()<<endl;
    break;
   default:
    cerr<<"wrong input"<<endl;
  }
 }
}
double atm::get_balance()
{
 return balance;
}
bool atm::security(int pass)
{
  return (pass==password);
}
void atm::deposit(double num)
{
 if(num>0)
  balance+=num;
 else
  cerr<<"input correct figuren\n";
}
bool atm::withdraw(double num)
{
 if(num<=balance)
 {
  balance-=num;
 return true;
 }
 else
  return false;
}

int main()
{
 atm bank;
 bank.session();
}
