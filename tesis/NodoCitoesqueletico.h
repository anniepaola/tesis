/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoCitoesqueletico.h
 * Author: annie
 *
 * Created on November 17, 2018, 10:06 PM
 */

#ifndef NODOCITOESQUELETICO_H
#define NODOCITOESQUELETICO_H
#include <string>

class NodoCitoesqueletico
{
    //Metodos publicos
  public:
    NodoCitoesqueletico();
    ~NodoCitoesqueletico();
    double CalcularVelocidad();
    void CalcularArrastre();
    void SetVelocidad(double velocidad);
    double GetVelocidad() const;
    void SetCoeficienteArrastre(double coeficienteArrastre);
    double GetCoeficienteArrastre() const;
    
    //Atributos privados
  private:
    double velocidad;
    double coeficienteArrastre;
};

#endif /* NODOCITOESQUELETICO_H */

