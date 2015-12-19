#include<iostream>
#include"tempcalc.h"

using namespace std;

int main(){
int sum, a=2, b=4;

calculator<int> calc;
sum = calc.add(a,b);
cout<<"The sum of "<<a<<" and "<<b<<" is "<<sum<<endl;
return 0;
}
