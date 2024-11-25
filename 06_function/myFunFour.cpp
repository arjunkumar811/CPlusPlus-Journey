#include <iostream>

using namespace std;

int hellooChai(){
 return 10;
}

int main(){
    
 
    auto preparedChai = [](int cups){
        cout << "Preparing " << cups << " cups of tea" << endl;
    };

    preparedChai(4);
    
    return 0;
}