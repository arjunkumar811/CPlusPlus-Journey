// ## 2. Do-While Loop
// Challenge:
// Create a program that asks the user if they want more tea. Keep asking them until they type "no" (case-insensitive), using a do-while loop.

#include <iostream>
#include <string>

using namespace std;

int main() {
    int tea;
    string wish;
    cout << "want more tea ?" ;

getline(cin , wish);
do
{
  cout << "want more tea ?" ;
    getline(cin , wish);
} while (wish == "no");
    return 0;
}