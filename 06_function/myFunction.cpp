// returnType functionName(parameter) {
//     // function body
// }
// void

#include <iostream>

using namespace std;


int checkTemperature(int tempreture){
    return tempreture;
}

/////////////////////////////////////////////////////////

void makeChai() {
    cout << "Making the chai served later wait for a min....";
}

void serveChai(int cups); // function declaration

int main() {
makeChai();
    serveChai(30);
int temp = checkTemperature(20);
cout << temp; // 20
    return 0;
}


// function defination

void serveChai(int cups){
    cout << "serveChai : " << cups;
}
