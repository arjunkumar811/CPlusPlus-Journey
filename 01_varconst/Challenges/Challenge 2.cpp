#include <iostream>
using namespace std;

int main() {
    int basePrice;
    cout << "Enter the base price of tea: "; // 12
    cin >> basePrice;

    // Calculate 10% increase and cast result to float
    float increasePrice = static_cast<float>(basePrice) * 0.10f;

    // Calculate new total price
    float totalPrice = static_cast<float>(basePrice) + increasePrice;

    // Cast the total price to int for rounding
    int roundedPrice = static_cast<int>(totalPrice + 0.5f); // Adding 0.5 for rounding up

    cout << "The new rounded price of tea is: " << roundedPrice << endl; // 13

    return 0;
}
