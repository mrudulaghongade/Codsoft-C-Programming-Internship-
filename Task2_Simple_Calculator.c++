#include<math.h>
#include<iostream>

using namespace std;

int main()
{
    int ch;
    do
    {
        cout << "\n---------------------- WELCOME TO THE SIMPLE CALCULATOR ----------------------\n" << endl;
        int a, b;
        int op;
        cout << "Enter two number seperated by spaces : "<<endl;
        cin >> a;
        cin >> b;
        cout << "\n-----------------------------------------------------------------------------\n" << endl;
        cout << "Press 1 for Addition (+) " << endl;
        cout << "Press 2 for Subtraction (-) " << endl;
        cout << "Press 3 for Multiplication (*) " << endl;
        cout << "Press 4 for Division (/) " << endl;
        cout << "\nSelect your choice : ";
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "Addition is : "<<(a + b) << endl;
            break;
        case 2:
            cout << "Subtraction is : "<<(a - b) << endl;
            break;
        case 3:
            cout << "Multiplication is : "<< (a * b) << endl;
            break;
        case 4:
            cout << "Division is : "<<(a / b) << endl;
            break;
        default:
            cout << "Operation not Found...! Please Try Again...\n";
            break;
        }
        cout << "-----------------------------------------------------------------------------\n" << endl;
        cout << "\nDo You want to Continue? (1/0) : ";
        cin >> ch;
    }
    while (ch);

    cout << "\nThank You for using this Calculator...!\n";

    return 0;
}
