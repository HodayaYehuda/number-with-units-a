#include <iostream>
#include <fstream>

#include <string>
#include "NumberWithUnits.hpp"
#include <map>
using namespace std;

namespace ariel{

static map<std::string ,map<std::string, double>> myMap;



istream& NumberWithUnits::read_units(istream& os){
return os;
}

NumberWithUnits operator + (const NumberWithUnits& a,const NumberWithUnits& b) {
    return NumberWithUnits(2, "cm");
}

NumberWithUnits operator - (const NumberWithUnits& a,const NumberWithUnits& b) {
    return NumberWithUnits(2, "cm");

}
NumberWithUnits operator += (const NumberWithUnits& a, const NumberWithUnits& b ){
    return NumberWithUnits(2, "cm");

}
NumberWithUnits operator -= (const NumberWithUnits& a, const NumberWithUnits& b) {
    return NumberWithUnits(2, "cm");

}



bool operator < (const NumberWithUnits& a, const NumberWithUnits& b) { return true; }
bool operator <= (const NumberWithUnits& a, const NumberWithUnits& b) { return true; }
bool operator > (const NumberWithUnits& a, const NumberWithUnits& b) { return true; }
bool operator >= (const NumberWithUnits& a, const NumberWithUnits& b) { return true; }
bool operator != (const NumberWithUnits& a, const NumberWithUnits& b) { return true; }
bool operator == (const NumberWithUnits& a, const NumberWithUnits& b) { return true; }

NumberWithUnits NumberWithUnits::operator++ () {
    NumberWithUnits t{2, "m"};
    return t;
} // ++a
NumberWithUnits NumberWithUnits::operator -- () {
     NumberWithUnits t{2, "m"};
    return t;
} // --a
NumberWithUnits operator ++ (NumberWithUnits&) {
     NumberWithUnits t{2, "m"};
    return t;
} //a++
NumberWithUnits operator -- (NumberWithUnits&) {
     NumberWithUnits t{2, "m"};
    return t;
} //a--


NumberWithUnits operator * (const NumberWithUnits& unit,const double num) {
     return NumberWithUnits(2, "cm");

}

NumberWithUnits operator * (const double num,const NumberWithUnits& unit) {
 NumberWithUnits t{2, "m"};
    return t;
}

ostream& operator << (ostream &os, const NumberWithUnits &u){
return os;
}
istream& operator >> (istream &is, NumberWithUnits &u){
return is;
}
}





