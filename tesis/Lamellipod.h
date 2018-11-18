/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lamellipod.h
 * Author: annie
 *
 * Created on November 17, 2018, 9:57 PM
 */
#include <string>
#ifndef LAMELLIPOD_H
#define LAMELLIPOD_H

class Lamellipod {
public:
    Lamellipod();
    Lamellipod(const Lamellipod& orig);
    ~Lamellipod();
    void CalcularVelocidad();
    void CalcularDensidadNodosCitoesqueleticos(double tiempo);
    double CalcularDensidadPolimerosAgrupados(double tiempo);
    double CalcularDensidadPolimerosLibres(double tiempo);
    double CalcularContraccion();
    double ObtenerCoordenadasDelanteras();
    double ObtenerCoordenadasTraseras();
    double ObtenerDistanciaParteDelanteraTrasera();
    void SetDensidadFilamentosAgrupadosEnBorde(double densidadFilamentosAgrupadosEnBorde);
    double GetDensidadFilamentosAgrupadosEnBorde() const;
    void SetLongitudHazEnReposo(double longitudHazEnReposo);
    double GetLongitudHazEnReposo() const;
    void SetTasaDeCambio(double tasaDeCambio);
    double GetTasaDeCambio() const;
    void SetCoeficienteArrastreTrasero(double coeficienteArrastreTrasero);
    double GetCoeficienteArrastreTrasero() const;
    void SetCoeficienteArrastre(double coeficienteArrastre);
    double GetCoeficienteArrastre() const;
    void SetLongitudCuerpoCelular(double longitudCuerpoCelular);
    double GetLongitudCuerpoCelular() const;
    void SetDistanciaParteTraseraApHCritico(double distanciaParteTraseraApHCritico);
    double GetDistanciaParteTraseraApHCritico() const;
    void SetDistanciaCitoesqueletoYposterior(double distanciaCitoesqueletoYposterior);
    double GetDistanciaCitoesqueletoYposterior() const;
    void SetCoordenadasTraseras(double coordenadasTraseras);
    double GetCoordenadasTraseras() const;
    void SetCoordenadasDelanteras(double coordenadasDelanteras);
    double GetCoordenadasDelanteras() const;
    void SetContraxionCitoesqueleto(double contraxionCitoesqueleto);
    double GetContraxionCitoesqueleto() const;
    void SetDensidadPolimerosLibres(double densidadPolimerosLibres);
    double GetDensidadPolimerosLibres() const;
    void SetDensidadPolimerosAgrupados(double densidadPolimerosAgrupados);
    double GetDensidadPolimerosAgrupados() const;
    void SetDensidadNodosCitoesqueleticos(double densidadNodosCitoesqueleticos);
    double GetDensidadNodosCitoesqueleticos() const;
    void SetVelocidad(double velocidad);
    double GetVelocidad() const;
private:
    
    double velocidad;    
    double densidadNodosCitoesqueleticos;
    double densidadPolimerosAgrupados;
    double densidadPolimerosLibres;
    double contraccionCitoesqueleto;
    double coordenadasDelanteras;
    double coordenadasTraseras;
    double distanciaCitoesqueletoYposterior;
    double distanciaParteTraseraApHCritico;
    double longitudCuerpoCelular;
    double coeficienteArrastre;
    double coeficienteArrastreTrasero;
    double tasaDeCambio;
    double longitudHazEnReposo;
    double densidadFilamentosAgrupadosEnBorde;
};

#endif /* LAMELLIPOD_H */

