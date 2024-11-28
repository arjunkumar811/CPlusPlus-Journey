#include <iostream>

using namespace std;

int main() {
int chaiTemperature[5] = {10, 29, 23, 34, 34};

cout << "Chai temperature";
for(int i = 0; i < 5; i++) {
    cout << chaiTemperature[i] << "degree C \n " << endl;
}

// 29 degree C 
// 23 degree C 
// 34 degree C 
// 34 degree C  

    return 0;
}