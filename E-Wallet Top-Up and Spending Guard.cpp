// E-Wallet Top-Up and Spending Guard.cpp

#include <iostream>
using namespace std;

class EWallet
{
private:
    int balance;

public:
    void set_balance(int new_balance)
    {
        if (new_balance >= 0)
        {
            balance = new_balance;
        }
        else
        {
            cout << "Invaild Balance!" << endl << endl;
        }
    }

    int get_balance()
    {
        return balance;
    }

    void spend(int amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Payment Declined!" << endl << endl;
        }
    }

};

int main()
{
    EWallet wallet;

    int initial_balance;
    int spend_amount;

    cin >> initial_balance;
    cin >> spend_amount;
    cout << endl;

    wallet.set_balance(initial_balance);
    wallet.spend(spend_amount);
    cout << "Final Balance: " << wallet.get_balance() << endl;

    return 0;
}