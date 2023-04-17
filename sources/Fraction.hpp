#pragma once 

#include <iostream>

namespace ariel{

    class Fraction{

        private:
            int numerator;
            int denominator; 

        public:

            //----------------------------------------
            // constructor
            //----------------------------------------
            Fraction(int, int);

            //----------------------------------------
            // get's and set's
            //----------------------------------------
            int getNumerator();
            int getDenominator();
            int setNumerator(); 
            int setDenominator(); 


            //----------------------------------------
            // binary operators
            //----------------------------------------

            // Fraction to fraction 
            Fraction operator+(const Fraction&); 
            Fraction operator-(const Fraction&); 
            Fraction operator/(const Fraction&);
            Fraction operator*(const Fraction&); 
            
            // Fraction to float 
            Fraction operator+(const float);
            Fraction operator-(const float); 
            Fraction operator/(const float);
            Fraction operator*(const float);


            // float to fraction 
            friend Fraction operator+(const float, const Fraction&);
            friend Fraction operator-(const float, const Fraction&);
            friend Fraction operator/(const float, const Fraction&);
            friend Fraction operator*(const float, const Fraction&);
            
         

            //--------------------------------------
            // Increment 
            //--------------------------------------

            // prefix 
            Fraction& operator++(); 
            Fraction& operator--(); 


            // postfix
            Fraction operator++(int); 
            Fraction operator--(int); 


            //----------------------------------------
            // Comparison operators
            //----------------------------------------
            
            // fraction to fraction 
            friend bool operator==(const Fraction& frac1, const Fraction& frac2);
            friend bool operator>(const Fraction& frac1, const Fraction& frac2);
            friend bool operator>=(const Fraction& frac1, const Fraction& frac2);
            friend bool operator<(const Fraction& frac1, const Fraction& frac2);
            friend bool operator<=(const Fraction& frac1, const Fraction& frac2);

            // float to fraction
            friend bool operator==(const float, const Fraction& frac);
            friend bool operator>(const float, const Fraction& frac);
            friend bool operator>=(const float, const Fraction& frac);
            friend bool operator<(const float, const Fraction& frac);
            friend bool operator<=(const float, const Fraction& frac);

            // fraction to float 
            friend bool operator==(const Fraction& frac1, const float);
            friend bool operator>(const Fraction& frac1, const float);
            friend bool operator>=(const Fraction& frac1, const float);
            friend bool operator<(const Fraction& frac1, const float);
            friend bool operator<=(const Fraction& frac1, const float);


            
            //----------------------------------
            // IO operators
            //----------------------------------

            // output  
            friend std::ostream& operator<< (std::ostream& output, const Fraction& frac);

            // input 
            friend std::istream& operator>> (std::istream& input , Fraction& frac);
            //-------------------------------------


    
    };

}