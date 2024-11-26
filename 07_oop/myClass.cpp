#include <iostream>
#include <vector>

using namespace std;

// Having starting letter of class name is good practice 
class Chai {
public:
string teaName;
int servings;
vector<string> ingredients;


void displayChaiDetails() {
    cout << "Tea Name: " << teaName << endl;
    cout << "Serving: " << servings << endl;
    cout << "Ingredients: ";
    for(string ingredient : ingredients) {
        cout << ingredient << " ";
    }
    cout << endl;
}

};


int main() {
    Chai chaiOne; // Object Created

    chaiOne.teaName = "Arjun Tea";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"Water", "lemon", "Honey", "tea"};


     chaiOne.displayChaiDetails();
// Tea Name: Arjun Tea
// Serving: 2
// Ingredients: Water lemon Honey tea 




Chai chaiTwo; // Another Object Created

chaiTwo.teaName = "Kumar";
chaiTwo.servings = 4;
chaiTwo.ingredients = {"Water", "Milk", "Tea", "Ginger", "Masala"};

chaiTwo.displayChaiDetails();

// Tea Name: Kumar
// Serving: 4
// Ingredients: Water Milk Tea Ginger Masala 

    return 0;
}