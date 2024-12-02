#include <iostream>

using namespace std;

int totalChaiServed(int chai[], int size) {
    int total = 0;
    for(int i = 0; i < size; i++){
        // total = total + chai[i];
        total+=chai[i];
    }
    return total;
}

int main() {
   int chaiServed[7] = {23, 45, 56, 34, 32, 34, 34};

   int total = totalChaiServed(chaiServed, 7);

   
    return 0;
}



//  cout << "Chai cups served on Day 1: " << chaiServed[0];
//  cout << "Chai cups served on Day 2: " << chaiServed[1];