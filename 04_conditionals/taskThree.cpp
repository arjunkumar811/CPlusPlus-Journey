// Challenge: A tea shop offers discounts based on the number of tea cups ordered. Write a program that checks the number of cups ordered and applies a discount:* More than 20 cups: 20% discount
// Between 10 and 20 cups: 10% discount
// Less than 10 cups: No discount

#include <iostream>

using namespace std;

int main() {
  int noCups;
  double pricePerCup = 2.5;
  double totalePrice;
  double discountPrice;

  cout << "Enter the number of Cups you want";

  cin >> noCups;

totalePrice = noCups * pricePerCup;

 if(noCups >= 20 ) {
cout << "You are Eligiable for 20% discount";
discountPrice = 0.20;

 } else if (noCups >=10 && noCups<=20) {
cout << "You are Eligiable for 10% discount";
discountPrice = 0.10;

} else {
    cout << "You are not Eligiable for discount";
    discountPrice = 0;
}

totalePrice = totalePrice - (totalePrice * discountPrice);


cout << "Total price after discount is : " << totalePrice << endl;

    return 0;
}