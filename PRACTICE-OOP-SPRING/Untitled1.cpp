#include<iostream>
#include<string>
using namespace std;

class product{
    protected:
        int id;
        string name;
        float price;
        int quantity;
        string availability;
        string dateOfExpiry;
};

class Item : public product {
    public:
        Item(){ price=0; quantity=0; }

        void ADMINadditem(){
            cout << "Enter id: "; cin >> id;
            cout << "Enter name: "; cin >> name;
            cout << "Enter price: "; cin >> price;
            if(price < 0){ cout << "Invalid price!\n"; price = 0; }
            cout << "Enter quantity: "; cin >> quantity;
            availability = (quantity < 0) ? "out of stock" : "in stock";
            cout << "Enter date of expiry: "; cin >> dateOfExpiry;
        }

        void showitem(){
            cout << " ID:" << id << endl;
            cout << " NAME:" << name << endl;
            cout << " PRICE:" << price << endl;
            cout << " QUANTITY:" << quantity << endl;
            cout << " DATE OF EXPIRY:" << dateOfExpiry << endl;
        }

        void customerMenu(){
            cout << "\t\t CUSTOMER MENU \t\t\n";
            int choice;
            string cartName[50]; float cartPrice[50]; int cartQty[50];
            int cartCount = 0;
            do {
                cout << "\n1) View item\n2) Add to cart\n3) Remove from cart\n4) View cart\n5) Back\n";
                cin >> choice;
                switch(choice){
                    case 1: showitem(); break;
                    case 2: {
                        int BuyQty;
                        cout << "Enter quantity: "; cin >> BuyQty;
                        if(BuyQty <= quantity && BuyQty > 0){
                            cartName[cartCount]=name; cartPrice[cartCount]=price;
                            cartQty[cartCount]=BuyQty; cartCount++;
                            quantity -= BuyQty;
                            cout << "Item added\n";
                        } else cout << "Not enough stock\n";
                        break;
                    }
                    case 3:
                        if(cartCount > 0){ cartCount--; cout << "Item removed\n"; }
                        else cout << "Cart empty\n";
                        break;
                    case 4:
                        if(cartCount > 0)
                            for(int i=0;i<cartCount;i++)
                                cout << cartName[i] << " x" << cartQty[i] << " = " << cartPrice[i]*cartQty[i] << endl;
                        else cout << "Cart empty\n";
                        break;
                    case 5: break;
                    default: cout << "Invalid choice\n";
                }
            } while(choice != 5);
        }
};

class superMarket {
    int choice;
    Item stock;           // ? shared Item object
    bool itemAdded = false;

    public:
        void mainMenu(){
            cout << "\t\t SMART SUPERMARKET SYSTEM \t\t\n";
            cout << "1. Login as Administrator\n";
            cout << "2. Customer\n";
            cout << "3. Exit\n";
            cout << "Enter choice: "; cin >> choice;
            switch(choice){
                case 1: adminLogin(); break;
                case 2: customerMenu(); break;
                case 3: cout << "Exiting...\n"; exit(0);
                default: cout << "Invalid choice!\n"; mainMenu();
            }
        }

        void adminLogin(){
            string id, pass;
            cout << "\n===== ADMIN LOGIN =====\n";
            cout << "Enter ID: "; cin >> id;
            cout << "Enter Password: "; cin >> pass;
            if(id=="admin" && pass=="1234"){
                cout << "Login Successful!\n";
                AdminMenu();
            } else {
                cout << "Invalid ID or Password!\n";
                mainMenu();
            }
        }

        void AdminMenu(){
            cout << "\t\t ADMINISTRATOR MENU \t\t\n";
            cout << "1) Add item\n2) Delete item\n3) Modify item\n4) Back\n";
            cout << "Enter choice: "; cin >> choice;
            switch(choice){
                case 1:
                    stock.ADMINadditem();   // ? ab error nahi
                    itemAdded = true;
                    AdminMenu();
                    break;
                case 4: mainMenu(); break;
                default: cout << "Invalid choice\n"; AdminMenu();
            }
        }

        void customerMenu(){
            if(!itemAdded){
                cout << "No items available! Admin se pehle item add karwao.\n";
                mainMenu();
                return;
            }
            stock.customerMenu();   // ? wohi item customer dekhega
        }
};

int main(){ 
    superMarket s1;
    s1.mainMenu();
    return 0;
}
