// Challenge: Write a program that checks if a tea shop is open. If the current hour (input by the user) is between 8 AM and 6 PM, the shop is open; otherwise, it’s closed.

#include <iostream>

using namespace std;

int main() {
int timing;
cout << "Enter the timing you want to Enter the shop : ";

cin >> timing;

if(timing >=8 && timing <=18){
    cout << "Shop is Open";
} else {
    cout << "Shop is Closed";
}
    return 0;
}