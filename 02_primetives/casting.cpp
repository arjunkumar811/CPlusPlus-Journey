#include <iostream>

using namespace std;

int main(){

    float teaPrice = 49.99;
    int roundedTeaPrice = (int) teaPrice;

    int teaQuantity = 2;
    int totalPrice = teaPrice * teaQuantity;

    cout << totalPrice << endl; // 99
    cout << roundedTeaPrice << endl; // 49

    return 0;
}