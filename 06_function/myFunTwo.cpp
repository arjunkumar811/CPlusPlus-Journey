#include <iostream>

using namespace std;

void pourChai(int cups){
    cups = cups + 5;
    cout << "Poured cups: " << cups << endl; // Poured cups: 7
}

int main() {
int cups = 2; // alternative
pourChai(cups); // alternative
cout << "Total cups are " << cups << endl; // Total cups are 2
    return 0;
}