## Challenge 3:
Favorite Tea Input Write a program that takes the user’s favorite tea as input using getline and also asks how many cups of tea they want using cin. Display the result in a fun message.
> Hint: Combine cin and getline carefully to avoid input issues.

#include <iostream>
#include <string>

using namespace std;



int main() {
    string favoriteTea;
    int cups;

    // Ask for the user's favorite tea
    cout << "What is your favorite tea? ";
    getline(cin, favoriteTea);

    // Ask how many cups of tea they want
    cout << "How many cups of " << favoriteTea << " would you like? ";
    cin >> cups;

    // Display the fun message
    cout << "Wow! Enjoy " << cups << " cups of delicious " << favoriteTea << " tea " << endl;

    return 0;
}
