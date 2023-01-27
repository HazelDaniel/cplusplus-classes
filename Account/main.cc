#include <iostream>
#include <string>

#include "account.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

void read_account_name(Account &account);
void check_account_balance(Account  &account);
void withdraw_from_account(Account &account,float amount);

int main (){

    Account Diamond;

    Diamond.set_name("Diamond");
    read_account_name(Diamond);
    Diamond.deposit(5000.0);
    Diamond.withdraw(600.0);
    check_account_balance(Diamond);
    withdraw_from_account(Diamond,200);

    return 0;
}

void read_account_name(Account &account){
    cout << "your account name is : " << account.get_name() << endl;
}
void check_account_balance(Account &account){
    cout << "your account balance is : $" << account.get_balance() << endl;
}
void withdraw_from_account(Account &account,float amount){

    if(account.withdraw(amount)){
        cout << "withdrawn successfull: $" << amount << endl;
    }else{
        cout << "failed to withdraw. insufficient funds!" <<endl;
    }
}