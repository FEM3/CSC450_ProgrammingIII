#include <iostream>
using namespace std;

int main() {
    int first, second, third;

    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter second number: ";
    cin >> second;
    cout << "Enter third number: ";
    cin >> third;

    int* pointer1 = new int(first);
    int* pointer2 = new int(second);
    int* pointer3 = new int(third);

    cout << "Numbers from input: " << first << " " << second << " " << third << endl;
    cout << "Values: " << *pointer1 << " " << *pointer2 << " " << *pointer3 << endl;
    cout << "Memory addresses: " << pointer1 << " " << pointer2 << " " << pointer3 << endl;

    delete pointer1;
    delete pointer2;
    delete pointer3;

    return 0;
}