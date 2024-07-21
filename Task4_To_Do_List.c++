#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> todoList;
    int choice;
    string item;

    while (true) {
        // Display menu
        cout << "===== To-Do List Menu =====" << endl;
        cout << "1. Add item" << endl;
        cout << "2. Remove item" << endl;
        cout << "3. View list" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter item to add: ";
                cin.ignore(); 
                getline(cin, item); 
                todoList.push_back(item); 
                cout << "Item added to the list." << endl;
                break;
            case 2:
                if (todoList.empty()) {
                    cout << "List is empty. Nothing to remove." << endl;
                } else {
                    
                    cout << "Current items in the list:" << endl;
                    for (int i = 0; i < todoList.size(); ++i) {
                        cout << i + 1 << ". " << todoList[i] << endl;
                    }
                    
                    cout << "Enter number of item to remove: ";
                    int index;
                    cin >> index;
                    if (index < 1 || index > todoList.size()) {
                        cout << "Invalid index. Please enter a valid number." << endl;
                    } else {
                        
                        todoList.erase(todoList.begin() + index - 1);
                        cout << "Item removed from the list." << endl;
                    }
                }
                break;
            case 3:
                if (todoList.empty()) {
                    cout << "List is empty." << endl;
                } else {
                    cout << "Current items in the list:" << endl;
                    for (const auto& task : todoList) {
                        cout << "- " << task << endl;
                    }
                }
                break;
            case 4:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
                break;
        }

        cout << endl; 
    }

    return 0;
}
