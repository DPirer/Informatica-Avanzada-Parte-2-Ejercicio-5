// EJERCICIO 5

// AUTOR: PEDRO ESTÉVEZ

/* Escribir una función plantilla ‘palindromo’, que acepte un vector y devuelva 1 si
 * se trata de un palíndromo (los elementos del vector tomados de derecha a izquierda
 * coinciden con los tomados de izquierda a derecha) y 0 en caso contrario*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// PROTOTIPO DE FUNCIONES
// Creamos nuestra función plantilla
template <class tipo_dato>
void palindromo(vector<tipo_dato>);


// MAIN
int main() {

    // Vector de enteros
    vector <int> v_enteros(5,1);

    // Vector de float
    vector <float> v_float(5,1.5);

    // Vector de caracteres
    vector <char> v_char = {'h', 'o', 'l', 'a'};

    // Llamamos a nuestra función para cada tipo de dato
    palindromo(v_enteros);
    palindromo(v_float);
    palindromo(v_char);

    cout<<endl;
    system("pause");
    return  0;
}


// FUNCIONES
template <class tipo_dato>
void palindromo(vector<tipo_dato> v){

    // Inicializamos una bandera que indica que el vector es palíndromo
    bool flag = true;

    // Creamos nuestro iterador del mismo tipo que el vector
    // Como los iteradores dependen de una plantilla, es decir, del tipo de dato, hay que usar typename
    typename vector <tipo_dato> :: iterator it, rit;

    // Vamos comparando los elementos y en el momento en el que no son iguales, ponemos la bandera a false
    rit = v.end() - 1;
    for (it = v.begin(); it < rit; it++){
        if(*it != *rit){ 
            flag = false;
            break;
        }
        rit--;
    }

    if (flag == true){
        cout<<"El vector es palindromo"<<endl;
    }
    else {
        cout<<"El vector no es palindromo"<<endl;
    }

}
