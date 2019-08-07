// This is the header file for class Account. It contains class Account's interface
// Class Account represents a customer's bank account.

// class Amount's interface
class Account
{
public:
    Account( int ); // constructor to initialize balance
    int credit(); // function to add amount to the balance
    int debit(); // function to remove an amount from the balance
    int getBalance(); // function to get the balance
private:
    int balance; // data member declaration
}; // end class
