#include <iostream>
#include <string>
using namespace std; 

int main() {
    int attempt = 1;  

    while (attempt <= 3) {
        string firstInput, secondInput;

        cout << "Round " << attempt << ' ';
        cout << "Type first text: ";
        getline(cin, firstInput);  

        cout << "Type second text: ";
        getline(cin, secondInput); 

        cout << "Output => " << firstInput << " " << secondInput << endl;
        attempt++;  
    }

    return 0;
}