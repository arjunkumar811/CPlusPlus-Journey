// Tea Information Display Write a program that declares variables to store the type of tea, its price per kilogram (float), and its rating (char). Use data types effectively and print them in a formatted output using escape sequences.

#include <iostream>
#include <string>

using namespace std;

int main() {
string teaType;
float price;
char rating;

cout << "Enter the type of tea" << endl; // arjun
 getline(cin, teaType); 

cout << "Enter the price of tea " << endl; // 12
cin >> price;

cin.ignore();

cout << "Enter your rating on tea " << endl; // 5
cin >>  rating;

cout << "Finally Your tea type is: " << teaType << "\nand price is : $" << price
 << "\nand finnaly the rating: " << rating << endl;

    return 0;
}



// Answer

// Finally Your tea type is: arjun
// and price is : $12
// and finnaly the rating: 5