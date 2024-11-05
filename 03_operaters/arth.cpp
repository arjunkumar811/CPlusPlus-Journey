#include <iostream>

using namespace std;

int main() {
int cups, totalPrice, discountedPrice;

cout << "Enter the cups you want";
cin >> cups;

totalPrice = cups * 20;

if (cups > 20 ) {
     discountedPrice = totalPrice - (totalPrice * 0.05);
     cout << "Discount Price is :" << discountedPrice << endl;     
} else {
    cout << "The total no of cups you perchased are : " << totalPrice << endl;
}

    return 0;
}