/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FilamentoMSP.h
 * Author: annie
 *
 * Created on November 17, 2018, 11:10 PM
 */

#ifndef FILAMENTOMSP_H
#define FILAMENTOMSP_H

class FilamentoMSP {

    //Metodos publicos
  public:
    FilamentoMSP();
    ~FilamentoMSP();
    void CalcularTasaDesmontaje();
    void CalcularPolimerizacion();
    
    //Atributos privados
  private:
    double TasaDesagregacion = 0.175;
    double TasaDesmontaje;
    double TasaDespolimerizacionDelantera = 0.025;
    double TasaDespolimerizacionTrasera = 0.0225;
    double TasaMontajeMSP = 3.2;
    double CResorteFilamentoLibre = 1;
    double CResorteFilamentoAgrupado = 1;
    double TasaDesmontajeTrasera = 1.25;
};

#endif /* FILAMENTOMSP_H */

