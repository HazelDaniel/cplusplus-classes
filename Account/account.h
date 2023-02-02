#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>

class Account {
private:
    std::string name;
    float balance;

public:
    Account()
    : name {""}, balance {0.0} {
    }
    std::string get_name();
    float get_balance();
	void set_name(std::string input_name);
    void deposit(float amount);
    bool withdraw(float amount);

};


std::string Account::get_name(){
    return name;
}
float Account::get_balance(){
    return balance;
}
void Account::set_name(std::string input_name){
	name = input_name;
}
void Account::deposit(float amount){
    balance += amount;
}
bool Account::withdraw(float amount){

    if(balance >= amount){
        balance -= amount;
        return true;
    }

    return false;
}


#endif