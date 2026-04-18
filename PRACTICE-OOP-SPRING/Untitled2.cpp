#include <iostream>
using namespace std;

class Bank {
public:
    
    static int totalAccounts; 

    
    Bank() {
        totalAccounts++; 
    }

    
    static void showTotalAccounts() {
        cout << "Total Bank Accounts created: " << totalAccounts << endl;
    }
};

int Bank::totalAccounts = 0;

int main() {
    cout << "--- Creating Accounts ---" << endl;
    
   
    Bank account1; 
    Bank account2;
    Bank account3;
	Bank account4;
	Bank blahhhhh; 
    
    cout << "3 accounts have been created successfully.\n" << endl;

  
    Bank::showTotalAccounts(); 

    return 0;
}
