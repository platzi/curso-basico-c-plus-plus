#include <iostream>

using namespace std;

int main()
{
    int option = 0;
    cout << "Introduce una opción: ";
    cin >> option;
    switch (option) {
    case 1:
        cout << "Opción 1";
        break;
    case 2:
        cout << "Opción 2";
        break;
    default:
        cout << "Esto no existe";
        break;
    }
}