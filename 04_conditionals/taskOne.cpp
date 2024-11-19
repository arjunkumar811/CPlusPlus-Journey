// Challenge: Write a program that checks if the user wants to order Green Tea. If the user types "Green Tea," the program should confirm their order.

#include <iostream>
#include <string>

using namespace std;

int main() {
string Order;

cout << "Enter the tea you want :";
getline(cin, Order);

if(Order == "Green Tea") {
    cout << "Your Order in Confirmed.";
} else {
    cout << " Sorry we only have Green Tea";
}

    return 0;
}
