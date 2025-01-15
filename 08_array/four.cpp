#include <iostream>

using namespace std;

int main() {
int chaiSales[3][7] = {
    {10, 23, 34, 34, 34, 56, 45},
    {10, 23, 34, 34, 34, 56, 45},
    {10, 23, 34, 34, 34, 56, 45}
};

for(int i = 0; i < 3; i++){
cout << "Iam at shop:" << i+1 << "\n";
for(int j = 0; j < 7; j++) {
    cout << chaiSales[i] [j] << "cups";
}
cout << "\n";
}
    return 0;
}


