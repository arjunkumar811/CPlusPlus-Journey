// # 5. Continue Keyword
// Challenge:
// Write a program that skips brewing green tea if the user dislikes it. Use a continue statement to skip over green tea but brew other types of tea in a list.

#include <iostream>
#include <string>

using namespace std;

int main () {

string teaTypes[4] = {"Orange Tea", "Green Tea", "Black Tea", "Lemon tea"} 

for(int i = 0; i < 4; i++) {
    if(teaTypes[i] == "Green Tea"){
        cout <, "Skipping the " << teaTypes[i] << endl;
        continue;
    } 

    cout << "Brewing " << teaTypes[i] << "." << endl;
}


    return 0;
}