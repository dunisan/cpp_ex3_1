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
            Fraction operator+(float);
            Fraction operator-(float); 
            Fraction operator/(float);
            Fraction operator*(float);


            // float to fraction 
            friend Fraction operator+(float, const Fraction&);
            friend Fraction operator-(float, const Fraction&);
            friend Fraction operator/(float, const Fraction&);
            friend Fraction operator*(float, const Fraction&);
            
         

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
            friend bool operator==(const Fraction&, const Fraction&);
            friend bool operator>(const Fraction&, const Fraction&);
            friend bool operator>=(const Fraction&, const Fraction&);
            friend bool operator<(const Fraction&, const Fraction&);
            friend bool operator<=(const Fraction&, const Fraction&);

            // float to fraction
            friend bool operator==(float, const Fraction&);
            friend bool operator>(float, const Fraction&);
            friend bool operator>=(float, const Fraction&);
            friend bool operator<(float, const Fraction&);
            friend bool operator<=(float, const Fraction&);

            // fraction to float 
            friend bool operator==(const Fraction&, float);
            friend bool operator>(const Fraction&, float);
            friend bool operator>=(const Fraction&, float);
            friend bool operator<(const Fraction&, float);
            friend bool operator<=(const Fraction&, float);


            
            //----------------------------------
            // IO operators
            //----------------------------------

            // output  
            friend std::ostream& operator<< (std::ostream& output, const Fraction& frac);

            // input 
            friend std::istream& operator>> (std::istream&, Fraction&);
            //-------------------------------------
    };

}