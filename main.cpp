#include <iostream>
#include <iomanip>
#include <cstring>
#include <conio.h>

using namespace std;

int main() {
    char Str1[20];
    const char* Str2 = "K4FlAXxF4LZ";

   cout << "Enter password: ";

    cin >> setw(12) >> Str1;

    if (strcmp(Str1, Str2) == 0) {

        cout << "Successfully logged in\n";
    } else {

        cout << "Incorrect password\n";
    }
    cout << "\nPress any key to continue...\n";
    _getch();

    return 0;
}