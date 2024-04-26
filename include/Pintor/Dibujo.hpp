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
    Dibujo()[];
    ~Dibujo()[];

void AgregarLineas(string linea){
    this->lineas.push_back(lineas);
      }

       list<string> ObtenerLineas();
         return this->lineas;


};


