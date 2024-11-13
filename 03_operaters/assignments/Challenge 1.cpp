
1. **Challenge 1: Arithmetic Operators**\
   Write a program that calculates the price of tea packs. A user enters the number of tea packs they want, and the price per pack. Apply a 10% tax to the total price and display the final cost.


   #include <iostream> 

using namespace std;
#include <string> 

int main() {
    int packs;
    double packPrice = 100;  // Price per pack
    double totalPrice, finalPrice;

    // Ask user to enter the number of packs
    cout << "Enter the number of tea packs you want: ";
    cin >> packs;

    // Calculate total price
    totalPrice = packs * packPrice;

    // Apply a 10% tax
    finalPrice = totalPrice * 1.10;

    // Display the final price after tax
    cout << "The total price after 10% tax is: " << finalPrice << endl;

    return 0;
}
