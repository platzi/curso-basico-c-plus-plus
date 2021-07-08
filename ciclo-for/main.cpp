#include <iostream>

using namespace std;

int main()
{
    int lista[] = { 100,200,300 };
    int limite = sizeof(lista) / sizeof(lista[0]);
    for( int i=0; i < limite; i+=1){
        cout << lista[i] << endl;
        if(lista[i] == 200){
            break;
        }
    }
}