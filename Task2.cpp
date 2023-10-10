#include<iostream>
using namespace std;

struct BankAccount
{
    int Accnum, balance;
    string Name;
};

void deposit(BankAccount &bankacc, int x)
{
    bankacc.balance+=x;
}
void withdraw(BankAccount &bankacc, int x)
{
    bankacc.balance-=x;
}
void display(BankAccount bankacc)
{
    cout<<"Bank Account details"<<endl;
    cout<<"Account name: "<<bankacc.Name<<endl;
    cout<<"Account number: "<<bankacc.Accnum<<endl;
    cout<<"Account balance: "<<bankacc.balance<<endl;
}


int main()
{
    BankAccount client1;
    client1.Accnum=34562;
    client1.Name="Asifur";
    client1.balance=5400;
    deposit(client1,2000);
    withdraw(client1,500);
    display(client1);

    return 0;
}
