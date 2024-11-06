// ### 4. **Logical Operators**

// ### **Challenge:** Create a program that checks if a user is eligible for a tea subscription discount. The discount applies if the user is either a student or has purchased more than 15 cups. Ask the user to input their status (student or not) and their cup count.

// > > && and || operators
#include <iostream>

using namespace std;

int main() {
int cups;
bool isStrudent;

cout << "Enter the cups you have " << endl;
cin >> cups;

cout << "Mention that you are a studen or not" << endl;
cin >> isStrudent;

if(isStrudent || cups >= 20) {
 cout << "you are elegiable for membership ";
} else {
    cout << "Sorry you have to purchase cups to have our menbership" << endl;
}

    return 0;
}