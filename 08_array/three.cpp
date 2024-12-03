#include <iostream>

using namespace std;

int* prepareChaiOrder(order){
    int* orders = new int[cups];
    for(int i = 0; i<cups; i++) {
        orders[i] = (i + 1) * 10;
    }
return orders;
}

int main() {
int cups = 5;
int chaiOrder = prepareChaiOrder(cups);

for(i = 0; i<cups; i++) 
{
    cout << "Cups: " << i + 1 << "has" << chaiOrder[i] 
} 


delete[] chaiOrder;
   return 0; 
}