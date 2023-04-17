#include "Fraction.hpp"

namespace ariel{

  

    //----------------------------------------
    // constructor
    //----------------------------------------
    Fraction::Fraction(int deno, int nume){
        this->denominator = 1;
        this->numerator = 1; 
    }

    //----------------------------------------
    // get's and set's
    //----------------------------------------
    int Fraction::getNumerator(){
        return this->numerator;
    }            
            
    int Fraction::getDenominator(){
        return this->denominator; 
    }

    //----------------------------------------
    // binary operators
    //----------------------------------------

    // Fraction to fraction 
    Fraction Fraction::operator+(const Fraction& frac){
        return *this;
    } 

    Fraction Fraction::operator-(const Fraction& frac){
        return *this;
    }

    Fraction Fraction::operator/(const Fraction& frac){
        return *this;
    }
    Fraction Fraction::operator*(const Fraction&frac){
        return *this;
    } 
    
    // Fraction to float 
    Fraction Fraction::operator+(const float num){
        return *this;
    }
    
    Fraction Fraction::operator-(const float num){
        return *this;
    }

    Fraction Fraction::operator/(const float num){
    return *this;
    }

    Fraction Fraction::operator*(const float num){
        return *this;
    }


    // float to fraction 
    Fraction operator+(const float num, const Fraction& frac){
        return frac; 
    }

    Fraction operator-(const float num, const Fraction& frac){
        return frac;
    }
    Fraction operator/(const float num, const Fraction& frac){
        return frac;
    }
    Fraction operator*(const float num, const Fraction& frac){
        return frac;
    }
    
    

    //--------------------------------------
    // Increment 
    //--------------------------------------

    // prefix 
    Fraction& Fraction::operator++(){
        return *this;
    }

    Fraction& Fraction::operator--(){
        return *this;
    } 


    // postfix
    Fraction Fraction::operator++(int){
        return *this;
    } 
    Fraction Fraction::operator--(int){
        return *this;
    }


    //----------------------------------------
    // Comparison operators
    //----------------------------------------
    
    // fraction to fraction 
    bool operator==(const Fraction& frac1, const Fraction& frac2){
        return false; 
    }
    bool operator>(const Fraction& frac1, const Fraction& frac2){
        return false; 
    }
    bool operator>=(const Fraction& frac1, const Fraction& frac2){
        return false; 
    }
    bool operator<(const Fraction& frac1, const Fraction& frac2){
        return false; 
    }
    bool operator<=(const Fraction& frac1, const Fraction& frac2){
        return false; 
    }

    // float to fraction
    bool operator==(const float, const Fraction& frac){
        return false; 
    }
    bool operator>(const float, const Fraction& frac){
        return false;
    }
    bool operator>=(const float, const Fraction& frac){
        return false; 
    }
    bool operator<(const float, const Fraction& frac){
        return false; 
    }
    bool operator<=(const float, const Fraction& frac){
        return false; 
    }

    // fraction to float 
    bool operator==(const Fraction& frac1, const float num){
        return false; 
    }
    bool operator>(const Fraction& frac1, const float num){
        return false; 
    }
    bool operator>=(const Fraction& frac1, const float num){
        return false; 
    }
    bool operator<(const Fraction& frac1, const float num){
        return false; 
    }
    bool operator<=(const Fraction& frac1, const float num){
        return false; 
    }


    
    //----------------------------------
    // IO operators
    //----------------------------------

    // IO to fraction 
    std::ostream& operator<<(std::ostream& output, const Fraction& frac){
        return output; 
    }
    std::istream& operator>>(std::istream& input , Fraction& frac){
        return input;
    }





}