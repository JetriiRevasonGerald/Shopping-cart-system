#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> cart;
    int choice;
    string item;

    do {
        cout << "\n1. Add Item\n2. View Cart\n3. Remove Item\n4. Exit\nYour choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter item to add: ";
                cin >> item;
                cart.push_back(item);
                cout << "Item added!\n";
                break;
            case 2:
                cout << "Your Cart:\n";
                for (int i = 0; i < cart.size(); i++)
                    cout << i + 1 << ". " << cart[i] << endl;
                break;
            case 3:
                cout << "Enter item number to remove: ";
                int index;
                cin >> index;
                if (index > 0 && index <= cart.size()) {
                    cart.erase(cart.begin() + index - 1);
                    cout << "Item removed!\n";
                } else {
                    cout << "Invalid item number!\n";
                }
                break;
            case 4:
                cout << "Exiting Shopping Cart System.\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);

    return 0;
}