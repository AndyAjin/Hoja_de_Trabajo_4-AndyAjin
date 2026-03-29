#include <iostream>
using namespace std;

int main(){
    int opcion, numero;

    do{
        cout << "Menu de opciones: " << endl;
        cout << "1. Mostrar los numeros del 1 al 5" << endl;
        cout << "2. Mostrar los numeros pares de 2 a 10" << endl;
        cout << "3. Ingresas un numero y mostrar si es positivo o negativo" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch(opcion){

            case 1:
            for (int i = 1; i <= 5; i++){
                cout << i << endl;
            }
            break;

            case 2:
            for (int c = 2; c <= 10; c+=2){
                cout << c << endl;
            }
            break;

            case 3:
            cout << "Ingrese un numero: ";
            cin >> numero;
            if (numero < 0){
                cout << "El numero es negativo: " << numero << endl;
            }else{
                cout << "El numero es positivo: " << numero << endl;
            }
            break;

            case 4:
            cout << "Gracias por usar el programa Saliendo..." ;
            break;

            default:
            cout << "opcion invalida" << endl;
            continue;
        }

    }while(opcion !=4);

    return 0;
}