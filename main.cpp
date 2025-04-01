#include <iostream>
#include <type_traits>
#include "main.hpp"

int main() {
    //FLOATING POINT
    std::cout << "Se in input ho dei floating point: " << std::endl;

    //overload dell'operatore << per la stampa del numero complesso
    complex_number<float> c1(3.0, 5.0);
    complex_number<float> c2(6.0, -9.0);
    complex_number<float> prima_copia_c1 = c1; //per calcoli successivi
    complex_number<float> seconda_copia_c1 = c1;
    complex_number<float> terza_copia_c1 = c1;
    complex_number<float> prima_copia_c2 = c2;

    std::cout << "Numero complesso 1: " << c1 << std::endl;
    std::cout << "Numero complesso 2: " << c2 << std::endl;

    //parte reale
    std::cout << "Parte reale del numero complesso 1: " << c1.real() << std::endl;
    std::cout << "Parte reale del numero complesso 2: " << c2.real() << std::endl; 
    //parte immaginaria
    std::cout << "Parte immaginaria del numero complesso 1: " << c1.imag() << std::endl;
    std::cout << "Parte immaginaria del numero complesso 2: " << c2.imag() << std::endl; 
    //coniugato
    std::cout << "Coniugato del numero complesso 1: " << c1.coniugato() << std::endl;
    std::cout << "Coniugato del numero complesso 2: " << c2.coniugato() << std::endl; 
    
    //operatore +
    complex_number<float> sum = c1 + c2;
    std::cout << "Operatore c1+c2: " << sum << std::endl; 

    //operatore +=
    c1 += c2;
    std::cout << "Operatore c1+=c2: " << c1 << std::endl; 

    //operatore *
    complex_number<float> prod = prima_copia_c1 * c2;
    std::cout << "Operatore c1*c2: " << prod << std::endl; 

    //operatore *=
    prima_copia_c1 *= c2;
    std::cout << "Operatore c1*=c2: " << prima_copia_c1 << std::endl;

    //operatore += con complesso, scalare in ordine   
    seconda_copia_c1 += 3.0; 
    std::cout << "c1+=3.0: " << seconda_copia_c1 << std::endl;

    //operatore + con complesso, scalare in ordine
    complex_number<float> sum2 = terza_copia_c1 + 3.0f; 
    std::cout << "c1+3.0: " << sum2 << std::endl;
    //commutativita' +
    std::cout << "commutativita' dell'operatore +: " << 3.0f + terza_copia_c1 << std::endl;

    //operatore *= con complesso, scalare in ordine
    c2 *= 2.0; 
    std::cout << "c2*=2.0: " << c2 << std::endl;

    //operatore * con complesso, scalare in ordine 
    complex_number<float> prod2 = prima_copia_c2 * 2.0f;  
    std::cout << "c2*2.0: " << prod2 << std::endl;
    //commutativita' *
    std::cout << "commutativita' dell'operatore *: " << 2.0f * prima_copia_c2 << std::endl;

 
    //DOUBLE
    std::cout << "Se in input ho dei double: " << std::endl;

    //overload dell'operatore << per la stampa del numero complesso
    complex_number<double> c3(3.0, 5.0);
    complex_number<double> c4(6.0, -9.0);
    complex_number<double> prima_copia_c3 = c3; //per calcoli successivi
    complex_number<double> seconda_copia_c3 = c3;
    complex_number<double> terza_copia_c3 = c3;
    complex_number<double> prima_copia_c4 = c4;

    std::cout << "Numero complesso 3: " << c3 << std::endl;
    std::cout << "Numero complesso 4: " << c4 << std::endl;

    //parte reale
    std::cout << "Parte reale del numero complesso 3: " << c3.real() << std::endl;
    std::cout << "Parte reale del numero complesso 4: " << c4.real() << std::endl; 
    //parte immaginaria
    std::cout << "Parte immaginaria del numero complesso 3: " << c3.imag() << std::endl;
    std::cout << "Parte immaginaria del numero complesso 4: " << c4.imag() << std::endl; 
    //coniugato
    std::cout << "Coniugato del numero complesso 3: " << c3.coniugato() << std::endl;
    std::cout << "Coniugato del numero complesso 4: " << c4.coniugato() << std::endl; 
    
    //operatore +
    complex_number<double> sum_d = c3 + c4;
    std::cout << "Operatore c3+c4: " << sum_d << std::endl; 

    //operatore +=
    c3 += c4;
    std::cout << "Operatore c3+=c4: " << c1 << std::endl; 

    //operatore *
    complex_number<double> prod_d = prima_copia_c3 * c4;
    std::cout << "Operatore c3*c4: " << prod_d << std::endl; 

    //operatore *=
    prima_copia_c3 *= c4;
    std::cout << "Operatore c3*=c4: " << prima_copia_c3 << std::endl;
    
    //operatore += con complesso, scalare in ordine   
    seconda_copia_c3 += 3.0; 
    std::cout << "c3+=3.0: " << seconda_copia_c3 << std::endl;

    //operatore + con complesso, scalare in ordine
    complex_number<double> sum2_d = terza_copia_c3 + 3.0; 
    std::cout << "c3+3.0: " << sum2_d << std::endl;
    //commutativita' +
    std::cout << "commutativita' dell'operatore +: " << 3.0 + terza_copia_c3 << std::endl;

    //operatore *= con complesso, scalare in ordine
    c4 *= 2.0; 
    std::cout << "c4*=2.0: " << c4 << std::endl;

    //operatore * con complesso, scalare in ordine 
    complex_number<double> prod2_d = prima_copia_c4 * 2.0;  
    std::cout << "c4*2.0: " << prod2_d << std::endl;
    //commutativita' *
    std::cout << "commutativita' dell'operatore *: " << 2.0 * prima_copia_c4 << std::endl;

    return 0;

};