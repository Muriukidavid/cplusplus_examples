#include <iostream>
#include "atm.h"
using namespace std;
int main ()
{
int PIN,depo,c,d;
account me;
	cout<<"Please enter your current PIN: "<<endl;
	cin>>PIN;
	
c=me.enterPin(PIN);
if (c==0){

 d=me.dispOptions();
 	
 	if (d==1){
 
 	//me.displayBalance();

		cout<<"Enter the amount you want to deposit: "<<endl;
		cin>>depo;
	
 		me.setBalance (depo);
 		me.displayBalance();
 		}
 		
 			else{
				me.displayBalance();		
 			}
}
	else
	cout<<"Your account has been blocked!"<<endl;

return 0;
 
 }
