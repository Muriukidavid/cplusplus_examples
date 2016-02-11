//Bernie Gach
#ifndef ATM_H
#define ATM_H
#include<string>
class atm
{
 public:
  atm();
  void session();
  double get_balance();
  bool security(int);
  void deposit(double);
  bool withdraw(double);
 private:
  double balance;
  double password;
};
#endif
