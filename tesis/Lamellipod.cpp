

#include "Lamellipod.h"
#include "NodoCitoesqueletico.h"
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

Lamellipod::Lamellipod()
{

    velocidad = 0;    
    densidadNodosCitoesqueleticos = 0;
    densidadPolimerosAgrupados = 0;
    densidadPolimerosLibres= 0;
    contraccionCitoesqueleto = 0;
    coordenadasDelanteras = 10;
    coordenadasTraseras = 0;
    distanciaParteTraseraApHCritico = 11;
    longitudCuerpoCelular = 10;
    coeficienteArrastre = 70;
    coeficienteArrastreTrasero = 50;
    tasaDeCambio = 1;
    longitudHazEnReposo = 1;
    densidadFilamentosAgrupadosEnBorde = 500;

    
}

void Lamellipod::SetDensidadFilamentosAgrupadosEnBorde(double densidadFilamentosAgrupadosEnBorde) {
    this->densidadFilamentosAgrupadosEnBorde = densidadFilamentosAgrupadosEnBorde;
}

double Lamellipod::GetDensidadFilamentosAgrupadosEnBorde() const {
    return densidadFilamentosAgrupadosEnBorde;
}

void Lamellipod::SetLongitudHazEnReposo(double longitudHazEnReposo) {
    this->longitudHazEnReposo = longitudHazEnReposo;
}

double Lamellipod::GetLongitudHazEnReposo() const {
    return longitudHazEnReposo;
}

void Lamellipod::SetTasaDeCambio(double tasaDeCambio) {
    this->tasaDeCambio = tasaDeCambio;
}

double Lamellipod::GetTasaDeCambio() const {
    return tasaDeCambio;
}

void Lamellipod::SetCoeficienteArrastreTrasero(double coeficienteArrastreTrasero) {
    this->coeficienteArrastreTrasero = coeficienteArrastreTrasero;
}

double Lamellipod::GetCoeficienteArrastreTrasero() const {
    return coeficienteArrastreTrasero;
}

void Lamellipod::SetCoeficienteArrastre(double coeficienteArrastre) {
    this->coeficienteArrastre = coeficienteArrastre;
}

double Lamellipod::GetCoeficienteArrastre() const {
    return coeficienteArrastre;
}

void Lamellipod::SetLongitudCuerpoCelular(double longitudCuerpoCelular) {
    this->longitudCuerpoCelular = longitudCuerpoCelular;
}

double Lamellipod::GetLongitudCuerpoCelular() const {
    return longitudCuerpoCelular;
}

void Lamellipod::SetDistanciaParteTraseraApHCritico(double distanciaParteTraseraApHCritico) {
    this->distanciaParteTraseraApHCritico = distanciaParteTraseraApHCritico;
}

double Lamellipod::GetDistanciaParteTraseraApHCritico() const {
    return distanciaParteTraseraApHCritico;
}

void Lamellipod::SetDistanciaCitoesqueletoYposterior(double distanciaCitoesqueletoYposterior) {
    this->distanciaCitoesqueletoYposterior = distanciaCitoesqueletoYposterior;
}

double Lamellipod::GetDistanciaCitoesqueletoYposterior() const {
    return distanciaCitoesqueletoYposterior;
}

void Lamellipod::SetCoordenadasTraseras(double coordenadasTraseras) {
    this->coordenadasTraseras = coordenadasTraseras;
}

double Lamellipod::GetCoordenadasTraseras() const {
    return coordenadasTraseras;
}

void Lamellipod::SetCoordenadasDelanteras(double coordenadasDelanteras) {
    this->coordenadasDelanteras = coordenadasDelanteras;
}

double Lamellipod::GetCoordenadasDelanteras() const {
    return coordenadasDelanteras;
}

void Lamellipod::SetContraxionCitoesqueleto(double contraxionCitoesqueleto) {
    this->contraccionCitoesqueleto = contraxionCitoesqueleto;
}

double Lamellipod::GetContraxionCitoesqueleto() const {
    return contraccionCitoesqueleto;
}

void Lamellipod::SetDensidadPolimerosLibres(double densidadPolimerosLibres) {
    this->densidadPolimerosLibres = densidadPolimerosLibres;
}

double Lamellipod::GetDensidadPolimerosLibres() const {
    return densidadPolimerosLibres;
}

void Lamellipod::SetDensidadPolimerosAgrupados(double densidadPolimerosAgrupados) {
    this->densidadPolimerosAgrupados = densidadPolimerosAgrupados;
}

double Lamellipod::GetDensidadPolimerosAgrupados() const {
    return densidadPolimerosAgrupados;
}

void Lamellipod::SetDensidadNodosCitoesqueleticos(double densidadNodosCitoesqueleticos) {
    this->densidadNodosCitoesqueleticos = densidadNodosCitoesqueleticos;
}

double Lamellipod::GetDensidadNodosCitoesqueleticos() const {
    return densidadNodosCitoesqueleticos;
}

void Lamellipod::SetVelocidad(double velocidad) {
    this->velocidad = velocidad;
}

double Lamellipod::GetVelocidad() const {
    return velocidad;
}



//Destructor
Lamellipod::~Lamellipod()
{

}


void Lamellipod::CalcularVelocidad(){

NodoCitoesqueletico nodo;
nodo.CalcularVelocidad();
this->velocidad = nodo.GetVelocidad();

 
}


void Lamellipod::CalcularDensidadNodosCitoesqueleticos(double posicion){

double x = posicion;    
    
densidadNodosCitoesqueleticos = 1.38344*pow(x,5)-
                                0.0774871*pow(x,4)+
                                0.0289578*pow(x,3)+
                                0.00344696*pow(x,2)+
                                0.00015357*(x)-0.0000023135;
    
    
}

void Lamellipod::CalcularDensidadPolimerosAgrupados(double posicion){

double x = posicion;    
    
densidadPolimerosAgrupados = 348.638*pow(x,3)+
                             2.888947*pow(x,2)+
                             0.301573*pow(x)-0.00339938;

}

void Lamellipod::CalcularDensidadPolimerosLibres(double posicion){

double x = posicion;    
    
densidadPolimerosLibres = 130.552*pow(x,3)-
                             21.02681*pow(x,2)-
                             0.420892*pow(x)-0.00735723;

}

void Lamellipod::CalcularContraccion(double posicion){

    contraccionCitoesqueleto = 

}