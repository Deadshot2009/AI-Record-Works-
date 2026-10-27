#include<iostream>
#include<string>
using namespace std;

class Account{
protected:
    string holder;
    double balance;
public: // This Is A public Access Specifier 
    Account(string h,double b): holder(h),balance(b){
    void deposit(double amt)
    {
        balance+=amt;
    }
    void show() const
    {
        cout<<holder<<"->Rs."<<balance<<endl;

    }
    }
};


class SavingAccount : public Account{  // Inheritance Concept Begins From Here 
    double rate;
public: 
    SavingsAccount(string h, double b, double r): Account(h,b), rate(r)
    void addInterest()
    {
        balance+=balance* rate/100;
    }
};

class PremiumSavings: public SavingsAccount{
public: 
    PremiumSavings(string h , double b): SavingsAccount(h,b,6)
    {
        void bonus()
        {
            balance+=500;
        }
    }
};


class CurrentAccount : public Account{
    double overcarft ;
public:
    CurrentAccount( string h , double b , double o): Account(h,b), overdarft(o)
    {
        void showOverdraft()const
        {
            cout<<"Overdraft Limit:"<< overdraft <<endl;
        }
    }


};

class Notifier
{
public:
    void sendSMS(string msg)
    {
        cout<<"SMS:"<<msg<<endl;
    }
};


class SmartAccount : public Account , public Notifier{
public: 
    void sendSMS(string msg)
    {
        cout<<"SMS:"<<msg<<endl;
    }
};

class SmartAccount : public Account , public Notifier
{
public : 
    SmartAcount(string h , double b) : Account(h, b)
    {

    }
}


int main ()
{
    SavingsAccount s("Ravi", 10000, 5);
    s.deposit(1000); s.addInterest();s.show();

    premiumSavings p("Meena", 20000)
    p.addInterest(); p.bonus();p.show();


    CurrentAccount c("Kumar", 50000,10000);
    c.show(); c.showOverdraft();

    SmartAccount sm("Anu", 3000);
    sm.deposit(500); sm.show(); sm.sendSMS("Rs.500 Credited")
    return 0; 

    // This Is The Exam Point Of View Of The Code 
}