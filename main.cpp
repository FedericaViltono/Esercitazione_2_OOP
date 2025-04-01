#include <iostream>
#include <type_traits>
#include "main.hpp"

int main() {
    //overload dell'operatore << per la stampa del numero complesso
    complex_number<float> c1(3.0, 5.0);
    complex_number<float> c2(6.0, -9.0);
    complex_number<float> prima_copia_c1 = c1; //per calcoli successivi
    complex_number<float> seconda_copia_c1 = c1;
    complex_number<float> terza_copia_c1 = c1;

    std::cout << "Numero complesso 1: " << c1 << std::endl;
    std::cout << "Numero complesso 2: " << c2 << std::endl;

    //parte reale
    std::cout << "Parte reale del numero complesso 1: " << c1.real() << std::endl; 
    //parte immaginaria
    std::cout << "Parte immaginaria del numero complesso 1: " << c1.imag() << std::endl; 
    //coniugato
    std::cout << "Coniugato del numero complesso 1: " << c1.coniugato() << std::endl; 
    

    //operatore +
    complex_number<float> sum = c1 + c2;
    std::cout << "Operatore c1+c2: " << sum << std::endl; //9 - 4i

    //operatore +=
    c1 += c2;
    std::cout << "Operatore c1+=c2: " << c1 << std::endl; 

    //operatore *
    complex_number<float> prod = prima_copia_c1 * c2;
    std::cout << "Operatore c1*c2: " << prod << std::endl; //63 + 3i

    //operatore *=
    prima_copia_c1 *= c2;
    std::cout << "Operatore c1*=c2: " << prima_copia_c1 << std::endl;

    
    //PARTE OPZIONALE: vincolo T ad essere floating point
    
    
    seconda_copia_c1 += 3.0; 
    std::cout << "c1 dopo aver sommato 3.0: " << seconda_copia_c1 << std::endl;

    complex_number<float> c2new = c2 * 2.0f;  
    std::cout << "c2 dopo aver molt. per  2.0: " << c2new << std::endl;
    std::cout << "commutatività del prodotto per scalare:" << 2.0f * c2 << std::endl;

    
    complex_number<float> sum2 = 3.0f + terza_copia_c1; 
    std::cout << "Somma tra un scalare 3.0 e il numero complesso c1: " << sum2 << std::endl;
    std::cout << "commutatività" << terza_copia_c1 + 3.0 << std::endl;
    complex_number<float> prod2 = 2.0f * terza_copia_c1 ; 
    std::cout << "Prodotto tra un scalare 2.0 e il numero complesso c1: " << prod2 << std::endl;
    std::cout << "commutatività" <<terza_copia_c1 * 2.0 << std::endl;
    std::cout << "Se in input ho dei double: " << std::endl;

    
    complex_number<double> c3(3.0, 5.0);
    complex_number<double> c4(6.0, -9.0);
    complex_number<double> prima_copia_c3 = c3;
    complex_number<double> seconda_copia_c3 = c3;
    complex_number<double> terza_copia_c3 = c3;


    std::cout << "Numero complesso 1: " << c3 << std::endl;
    std::cout << "Numero complesso 2: " << c4 << std::endl;

    
    complex_number<double> somma = c3 + c4;
    std::cout << "Somma: " << somma << std::endl;

    
    c3 += c4;
    std::cout << "Somma tramite +=: stampo il nuovo c1 " << c3 << std::endl;

    prima_copia_c3 *= c4;
    std::cout << "prodotto tramite *=: stampo il nuovo c1  " << prima_copia_c3<< std::endl;

    
    complex_number<double> prodotto = seconda_copia_c3 * c4;
    std::cout << "Prodotto: " << prodotto << std::endl;

    
    std::cout << "Coniugato di c2: " << c4.coniugato() << std::endl;

    
    seconda_copia_c3 += 3.0; 
    std::cout << "c1 dopo aver sommato 3.0: " << seconda_copia_c3 << std::endl;

    c4 = c4 * 2.0;  
    std::cout << "c2 dopo aver molt. per  2.0: " << c4 << std::endl;

    
    complex_number<double> somma2 = 3.0 + terza_copia_c3; 
    std::cout << "Somma tra un scalare 3.0 e il numero complesso c1: " << somma2 << std::endl;

    complex_number<double> prodotto2 = 2.0 * terza_copia_c3; 
    std::cout << "Prodotto tra un scalare 2.0 e il numero complesso c1: " << prodotto2 << std::endl;
     


    


    return 0;


};