#include<iostream>
#include<string>
using namespace std;
 
class withdrawal
{
	public:
	
	void setwithdrawal(int cash)
{
	
	int amount=10000;
	int withdraw=cash;

	cout<<"Please enter the amount";
	cin>>withdraw;
	
if (withdraw<amount)
{
	cout<<"an amount of "<<withdraw<<" has been withdrawn from your account"<<endl;
}
else if (withdraw>amount)
{
	cout <<"you have insufficient funds in your account"<<endl;
}
}
	int getwithdrawal()
{
 	return withdraw;
}

 private:
	int amount;
	int withdraw;
};

int main()
{
int cash;
withdrawal amounts;
amounts.setwithdrawal(cash);
amounts.getwithdrawal();
return 0;
}
