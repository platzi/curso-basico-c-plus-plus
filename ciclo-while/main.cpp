#include <iostream>

using namespace std;

int main()
{

    // while(true) {
    //     char respuesta;
    //     cout << "Deseas continuar?" << endl;
    //     cin >> respuesta;
    //     if(respuesta == 'y') {
    //         cout << "bye bye";
    //         break;
    //     }
    // };

    do {
        char respuesta;
        cout << "Deseas continuar?" << endl;
        cin >> respuesta;
        if(respuesta == 'y') {
            cout << "bye bye";
            break;
        }
    } while(true);
}