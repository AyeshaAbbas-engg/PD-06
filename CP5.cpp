#include <iostream>
using namespace std;
string price(string name, string day, double quantity);

main()
{
    string name = " ", day = " ";
    double quantity = 0.0;
    cout << "Enter name of fruit:";
    cin >> name;
    cout << "Enter quantity";
    cin >> quantity;
    cout << "Enter day :";
    cin >> day;
    price(name, day, quantity);
}
string price(string name, string day, double quantity)
{
    if (name == "banana" && day == "sunday")
    {
        cout << "Amount is :" << quantity * 2.70;
    }
    else if (name == "banana" && day != "sunday")
    {
        cout << "Amount is :" << quantity * 2.50;
    }
    else if (name == "apple" && day == "sunday")
    {
        cout << "Amount is :" << quantity * 1.25;
    }
    else if (name == "apple" && day != "sunday")
    {
        cout << "Amount is :" << quantity * 1.20;
    }
    else if (name == "orange" && day == "sunday")
    {
        cout << "Amount is :" << quantity * 0.90;
    }
    else if (name == "orange" && day != "sunday")
    {
        cout << "Amount is :" << quantity * 0.85;
    }
    else if (name == "grapefruit" && day == "sunday")
    {
        cout << "Amount is :" << quantity * 1.60;
    }
    else if (name == "grapefruit" && day != "sunday")
    {
        cout << "Amount is :" << quantity * 1.45;
    }
    else if (name == "kiwi" && day == "sunday")
    {
        cout << "Amount is :" << quantity * 3.00;
    }
    else if (name == "kiwi" && day != "sunday")
    {
        cout << "Amount is :" << quantity * 2.70;
    }
    else if (name == "pineapple" && day == "sunday")
    {
        cout << "Amount is :" << quantity * 5.60;
    }
    else if (name == "pineapple" && day != "sunday")
    {
        cout << "Amount is :" << quantity * 5.50;
    }
    else if (name == "grapes" && day == "sunday")
    {
        cout << "Amount is :" << quantity * 4.20;
    }
    else if (name == "grapes" && day != "sunday")
    {
        cout << "Amount is :" << quantity * 3.85;
    }
    else{
        cout << "Error";
    }
}
