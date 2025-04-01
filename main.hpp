#pragma once

template<typename T>

class complex_number {
    static_assert(std::is_floating_point_v<T>);   //vincolo T ad essere floating point
    
private:
    T parte_reale;
    T parte_immaginaria;

public:
    //costruttore di default
    complex_number() : parte_reale(T(0)), parte_immaginaria(T(0)) {} 

    //costruttore user-defined per inizializzaizone di parte reale e immaginaria
    complex_number(T r, T i) : parte_reale(r), parte_immaginaria(i) {}

    //metodo che restituisce la parte reale
    T real() const {
        return parte_reale;
    }

    //metodo che restituisce la parte immaginaria
    T imag() const {
        return parte_immaginaria;
    }

    //metodo che restituisce il coniugato
    complex_number<T> coniugato() {
        return complex_number<T>(parte_reale, -parte_immaginaria);
    }

    //overload dell'operatore +=
    complex_number<T> operator+=(const complex_number& other) {    
        parte_reale += other.parte_reale;
        parte_immaginaria += other.parte_immaginaria;
        return *this;  
    } 
    
    //overload dell'operatore +
    complex_number<T> operator+(const complex_number& other) {
        complex_number<T> output;
        output.parte_reale = parte_reale + other.parte_reale;
        output.parte_immaginaria = parte_immaginaria + other.parte_immaginaria;
        return output;   
    }

    //overload dell'operatore *=
    complex_number<T> operator*=(const complex_number& other) {
        T temp = parte_reale;
        parte_reale = (parte_reale * other.parte_reale) - (parte_immaginaria * other.parte_immaginaria);
        parte_immaginaria = (temp * other.parte_immaginaria) +  (parte_immaginaria * other.parte_reale);
        return *this;    
    }

    //overload dell'operatore *
    complex_number<T> operator*(const complex_number& other) const {
        return complex_number<T>(parte_reale * other.parte_reale - parte_immaginaria * other.parte_immaginaria, parte_reale * other.parte_immaginaria + parte_immaginaria * other.parte_reale);   
    }


    //overload dell'operatore += con complesso, scalare in ordine
    complex_number<T> operator+=(T value) {
        parte_reale += value;
        return *this;
    }

    //overload dell'operatore + con complesso, scalare in ordine
    complex_number<T> operator+(T value) {
        return complex_number<T>(parte_reale + value, parte_immaginaria);
    }

    //overload dell'operatore *= con complesso, scalare in ordine
    complex_number<T>& operator*=(T value) {
        parte_reale *= value;
        parte_immaginaria *= value;
        return *this;
    }

    //overload dell'operatore * con complesso, scalare in ordine
    complex_number<T> operator*(T value) const {
        return complex_number<T>(parte_reale * value, parte_immaginaria * value);
    }    
    
};

//commutativita' degli operatori + e *
template<typename T>
std::ostream&
operator<<(std::ostream& os, const complex_number<T>& numero) {
    if (numero.imag() >= 0) {
        os << numero.real() << "+" << numero.imag() << "i";
    } else {
        os << numero.real() << numero.imag() << "i";  
    }  // blocco else serve se ho parte immaginaria negativa (include già segno meno)
    return os;
}

//overload dell'operatore + con scalare, complesso in ordine
template<typename T>
complex_number<T> operator+(T value, const complex_number<T>& numero) {
    return complex_number<T>(value + numero.real(), numero.imag());
}

//overload dell'operatore * con scalare, complesso in ordine
template<typename T>
complex_number<T> operator*(T value, const complex_number<T>& numero) {
    return complex_number<T>(value * numero.real(), value * numero.imag());
}