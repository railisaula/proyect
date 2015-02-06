// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
#include <list>          // std::list
using namespace std;


//devuelve true si todos los elementos de la cola son pares, de lo contrario devuelve false
bool sonPares(queue<int> mi_cola)
{
   while(!mi_cola.empty())/// Verificar si mi_cola esta vacia
        {
            if(mi_cola.front()%= 2)///divido toda mi cola
                {
                 return false;

                }mi_cola.pop();///Saque elementos de la cola
        }
    return true;/// Retorne verdadero
}

//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
bool sonPares(list<int> mi_lista)
{
       list<int>::iterator it;///Inicio Iterator

    for(it=mi_lista.begin(); it!=mi_lista.end(); it++)///Recorrer en el interior de la cola
    {
        if(*it %= 2)///Div la lista
            {
                return false;///Retorne falsa
            }mi_lista.pop_front();///Saque el primer elemento que esta enfrente.
    }

    return true;///Retorne verdadero
}
}


//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(queue<string> mi_cola, string str)
{
    while(!mi_cola.empty())///verifico si esta vacia mi cola
        {
            if(mi_cola.front()==str)///Igualando el primer elemento de mi cola con str
                {
                    return true;///que retorno verdader
                }mi_cola.pop();///
        }
    return false;///que retorne falso
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{
     list<string>::iterator it;///Iniciar Iterator

    for(it=mi_lista.begin(); it!=mi_lista.end(); it++)///Recorrer en el interior de la cola
    {
            if(*it == str)///igualando el iterator con str
                {
                    return true;///Retorne verdadero
                }
    }

    return false;///Retorne false
}

//devuelve la suma de los elementos de la cola
int getSuma(queue<int> mi_cola)
{
    int cont = 0;///decalrando variables

    while(!mi_cola.empty())///verificando si esta vacia
        {
            cont += mi_cola.front();/// Guarde lo que esta en el comienzo de mi cola en cont y que lo sume
            mi_cola.pop();
        }
    return cont;///Retorne cont
}

//devuelve la suma de la cantidad letras de cada cadena de la lista
int sumarLetras(list<string> mi_lista)
{
    int suma = 0;///Declarando variables
    string dato;///Declarando variables
    list<string>::iterator it;///Declarando iterator

    for(it=mi_lista.begin(); it!=mi_lista.end(); it++)///recorriendo mi lista
    {
            dato = *it;///Guardo el valor de mi iterator en dato
            suma += dato.length();///busco el tamaño de mi cadena y luego suma
    }

     return suma;/// que retorne suma
}

//Devuelve true si los elementos de la lista son estan ordenados alfabeticamente, de lo contrario devuelve false
bool estaOrdenada(list<char>mi_lista)
{
list<char>aux =  mi_lista;///decalro una lista auxiliar y la igualo a mi lista
    aux.sort();

    for(list<char>::iterator it= mi_lista.begin(); it!= mi_lista.end(); it++)///recorro la lista
    {
            if(mi_lista.front() == aux.front())///igualo los primeros elementos de las dos listas
            {
                mi_lista.pop_front();///saco los elementos
                aux.pop_front();
            }else
            {
                return false;
            }
    }
    return true;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
