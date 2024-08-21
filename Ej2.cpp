#include <iostream>
#include "Lista/Lista.h"
using namespace std;

const void borrarIf(Lista<int> &li, int numero) {
    int tam = li.getTamanio();
    for (int i = 0; i < tam; i++)
    {
        if (li.getDato(i) == numero)
        {
            li.remover(i);
            tam = li.getTamanio();
            i--;
        }
    }
}


int main() {

    cout << "Ejercicio N° 2" << endl;
    Lista<int> list;
    int n,eliminar;

    std::cout<<"Ingrese el tamanio de su lista"<<std::endl;
    std::cin>>n;
    int d;
    for (int i = 0; i < n; i++)
    {
        std::cout<<"Ingrese el dato numero: "<<i+1<<" de la lista"<<std::endl;
        std::cin>>d;
        list.insertarUltimo(d);
    }
    list.print();
    std::cout<<"Ingrese el numero que quiere eliminar de la lista"<<std::endl;
    std::cin>>eliminar;
    borrarIf(list,eliminar);
    list.print();


    return 0;
}
