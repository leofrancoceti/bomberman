#pragma once

#include<string>
#include<list>
#include<Vector.hpp>
using namespace std;

class Dibujo
{
private:
    list<string> lineas;
    Vector posicion;
    Vector velocidad;
public:
    Dibujo(/* args */) {}
    ~Dibujo() {}
    void AgregarLinea(string linea){
        this->lineas.push_back(linea);
    }
    list<string> ObtenerLineas(){
        return this->lineas;
    }
};
