// ## 1. While Loop
// Challenge:
// Write a program that keeps track of tea orders. Each time a cup of tea is made, decrease the number of cups remaining. The loop should run until all cups are served.

#include <iostream>
#include <string>

using namespace std;

int main() {
    int teaCups;

    cout << "Enter the number of tea cups to serve : ";
    cin >> teaCups

while (teaCups > 0)
{
    teaCups--;
  cout << "Serving a cup of tea \n" << teaCups << "remaining" << endl;
}

cout << "All tea cups are serve " << endl;

    return 0;
}