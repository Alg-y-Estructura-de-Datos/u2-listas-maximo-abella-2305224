#include <iostream>
#include "Lista/Lista.h"
using namespace std;

const void mostrarDesde(Lista<int> &li,int p) {
    int tam = li.getTamanio();


    for (int i = p; i < tam; i++)
    {
        std::cout<<li.getDato(i)<<"->";
    }
    std::cout<<"NULL"<<std::endl;
}


int main() {

    cout << "Ejercicio N° 1" << endl;
    Lista<int> list;
    int n;

    std::cout<<"Ingrese el tamanio de su lista"<<std::endl;
    std::cin>>n;
    int d;
    for (int i = 0; i < n; i++)
    {
        std::cout<<"Ingrese el dato numero: "<<i+1<<" de la lista"<<std::endl;
        std::cin>>d;
        list.insertarUltimo(d);
    }
    

    mostrarDesde(list,4);
    return 0;
}
