#include <iostream>
#include <string>
#include <map>
using std::map;

class unit {
    std::string unit;
    int amount;

};

namespace ariel {

    class NumberWithUnits{
    public:

        map<std::string ,map<std::string, double>> myMap;

        friend read_units(std:ostream &os);
        friend const NumberWithUnits operator + (const unit& unit) const;
        friend const NumberWithUnits operator - (const unit& unit) const;
        friend NumberWithUnits operator += (const unit& unit);
        friend NumberWithUnits operator -= (const unit& unit);
        friend const NumberWithUnits operator + () const; //unary
        friend const NumberWithUnits operator - () const; //unary

        bool NumberWithUnits operator < (const unit&) const;
        bool NumberWithUnits operator <= (const unit&) const;
        bool NumberWithUnits operator > (const unit&) const;
        bool NumberWithUnits operator >= (const unit&) const;
        bool NumberWithUnits operator != (const unit&) const;

        friend &operator ++ (); // ++a
        friend NumberWithUnits operator -- (); // --a
        friend NumberWithUnits operator ++ (const unit& unit); //a++
        friend NumberWithUnits operator -- (const unit& unit); //a--


        friend const NumberWithUnits operator * (const unit& unit, const double num);

        friend std::ostream& operator << (std:ostream &os, const unit &u);
        friend std::istream & operator >> (std::istream &is, unit &u);

    };
}