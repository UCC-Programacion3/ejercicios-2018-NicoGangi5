//
// Created by Nico Gangi on 11/09/2019.
//

#include <iostream>
#include "Lista.h"
using namespace std;

int main(){
    Lista<int> l;

    l.insertarPrimero(3);
    l.insertarPrimero(2);
    l.insertarPrimero(1);

    cout << "Hola mingo"<< l.getTamanio() << endl;


    return 0;
}