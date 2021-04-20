#include <iostream>
#include <string>
#include <map>
using std::map;

namespace ariel {

    class NumberWithUnits{
    public:

        std::string unit;
        int amount;
        NumberWithUnits(const double a, const std::string str):amount(a), unit(str){}
        
        static std::istream& read_units(std::istream&);
        friend NumberWithUnits operator + (const NumberWithUnits& a,const NumberWithUnits& b ) ;
        friend NumberWithUnits operator - (const NumberWithUnits& a,const NumberWithUnits& b ) ;
        friend NumberWithUnits operator += (const NumberWithUnits& a,const NumberWithUnits& b);
        friend NumberWithUnits operator -= (const NumberWithUnits& a,const NumberWithUnits& b);


        friend bool operator < (const NumberWithUnits& a, const NumberWithUnits& b) ;
        friend bool operator <= (const NumberWithUnits& a, const NumberWithUnits& b) ;
        friend bool operator > (const NumberWithUnits& a, const NumberWithUnits& b) ;
        friend bool operator >= (const NumberWithUnits& a, const NumberWithUnits& b) ;
        friend bool operator != (const NumberWithUnits& a, const NumberWithUnits& b) ;
        friend bool operator == (const NumberWithUnits& a, const NumberWithUnits& b) ;


       NumberWithUnits& operator ++ (){
                       return *this;

       } // ++a
       NumberWithUnits& operator -- (){
                       return *this;


       } // --a
       const NumberWithUnits operator ++ (int a){
                       return NumberWithUnits(amount, unit);

       } //a++
       const NumberWithUnits operator -- (int a){
                       return NumberWithUnits(amount, unit);

       } //a--


        friend NumberWithUnits operator * (const NumberWithUnits&, const double);
        friend NumberWithUnits operator * (const double , const NumberWithUnits&);

        friend std::ostream &operator << (std::ostream&, const NumberWithUnits&);
        friend std::istream &operator >> (std::istream&, NumberWithUnits&);


        const NumberWithUnits operator + () const {
            return NumberWithUnits(amount, unit);
        } //unary

       const NumberWithUnits operator - () const {
            return NumberWithUnits(amount, unit);

        } //unary
};
    
}
