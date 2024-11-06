// ### 3. **Relational Operators**

// ### **Challenge:** A tea shop offers a loyalty program. Customers who buy more than 20 cups of tea get a special "Gold" badge, and those who buy 10 to 20 cups get a "Silver" badge. Write a program to display the badge they will receive based on the number of cups they buy.

// > > , >=, <, <=

#include <iostream>

using namespace std;

int main() {
int cups;


cout << "Enter the cups you purchased" << endl;
cin >> cups;



if (cups > 20) {
 cout << "you got gold card";
} else if (cups >= 10 && cups <= 20) {
    cout << "you got silver card" << endl;
} else {
    cout << "you got nothing sorry you should buy more cups to get card" << endl ;
}

    return 0;
}