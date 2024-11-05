#include <iostream>

using namespace std;
 int main() {
 int Nobags;


 cout << "Enter the Nobags that you have purshaesd";
 cin >> Nobags;

 if ( Nobags > 5 )
 {

    Nobags += 5;
    cout << "Congratulations! You win 5 more bags!" << endl;
 } 

 cout << "Your total Nobags are : " << Nobags << endl;

    return 0;
}