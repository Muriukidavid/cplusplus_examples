#include<iostream>
#include"tempcalc.h"

using namespace std;

int main(){
double sum, a=2.3, b=4.5;

calculator<double> calc;
sum = calc.add(a,b);
cout<<"The sum of "<<a<<" and "<<b<<" is "<<sum<<endl;
return 0;
}
