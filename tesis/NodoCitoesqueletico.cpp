
#include "Lamellipod.h"
#include "NodoCitoesqueletico.h"
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
//Se define un objeto de la clase Fichero
//Fichero fichero;


/*Constructor de la clase
 *Recibe un QString con la ruta del archivo a leer. Posteriormente con esta ruta se leen los datos
 *del archivo txt seleccionado anteriormente, y se igualan a sus variables correspondientes.
 *Se definen los vectores a usar y se calculan los beneficios para cada cosecha.
 *
 */


NodoCitoesqueletico::NodoCitoesqueletico()
{
    velocidad = 0;
    coeficienteArrastre = 0;
}

void NodoCitoesqueletico::SetVelocidad(double velocidad) {
    this->velocidad = velocidad;
}

double NodoCitoesqueletico::GetVelocidad() const {
    return velocidad;
}

void NodoCitoesqueletico::SetCoeficienteArrastre(double coeficienteArrastre) {
    this->coeficienteArrastre = coeficienteArrastre;
}

double NodoCitoesqueletico::GetCoeficienteArrastre() const {
    return coeficienteArrastre;
}

NodoCitoesqueletico::~NodoCitoesqueletico()
{

}