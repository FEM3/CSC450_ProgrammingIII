#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string userText;
    string fileText;
    char ch;

    cout << "Write text: ";
    getline(cin, userText);

    ofstream appendFile("CSC450_CT5_mod5.txt", ios::app);
    if (!appendFile) {
        cout << "Could not open file";
        return 1;
    }
    appendFile << userText << '\n';
    appendFile.close();

    ifstream readFile("CSC450_CT5_mod5.txt");
    if (!readFile) {
        cout << "Could not open file";
        return 1;
    }
    while (readFile.get(ch)) {
        fileText += ch;
    }
    readFile.close();

    ofstream reverseFile("CSC450-mod5-reverse.txt");
    if (!reverseFile) {
        cout << "Cannot create file";
        return 1;
    }
    for (int i = fileText.length() - 1; i >= 0; i--) {
        reverseFile << fileText[i];
    }
    reverseFile.close();

    cout << "Task complete";
    return 0;
}