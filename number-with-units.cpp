#include <iostream>
#include <string>
#include "number-with-units.hpp"
#include <map>
using std::map;

friend read_units(std:ostream &os){

}

NumberWithUnits::operator + (const unit& unit) {

}
friend const NumberWithUnits operator - (const unit& unit) const{

}
friend NumberWithUnits::operator += (const unit& unit){

}
friend NumberWithUnits::operator -= (const unit& unit) {

}
friend const NumberWithUnits::operator + () const {

} //unary
friend const NumberWithUnits::operator - () const {

} //unary

bool NumberWithUnits::operator < (const unit&) const { return true; }
bool NumberWithUnits::operator <= (const unit&) const { return true; }
bool NumberWithUnits::operator > (const unit&) const { return true; }
bool NumberWithUnits::operator >= (const unit&) const { return true; }
bool NumberWithUnits::operator != (const unit&) const { return true; }

friend NumberWithUnits& NumberWithUnits::operator++ () {
    unit t = new unit;
    return t;
} // ++a
friend NumberWithUnits::operator -- () {
    unit t = new unit;
    return t;
} // --a
friend NumberWithUnits::operator ++ (const unit& unit) {
    unit t = new unit;
    return t;
} //a++
friend NumberWithUnits::operator -- (const unit& unit) {
    unit t = new unit;
    return t;
} //a--


void convertMap::operator * (const unit& unit, const double num) {

}

void std::ostream& operator << (std:ostream &os, const unit &u){

}
void std::istream & operator >> (std::istream &is, unit &u){

}








