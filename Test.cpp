//
// Created by Hodaya on 4/18/2021.
//

#include <iostream>
#include <string>
#include "NumberWithUnits.hpp"
#include <map>
#include <iostream>
#include <fstream>
#include "doctest.h"

using namespace ariel;
using namespace std;


ifstream my_file{"units.txt"};

TEST_CASE("+ , - , * , += , -="){
NumberWithUnits::read_units(my_file);
NumberWithUnits a{2, "km"};
NumberWithUnits b{100, "m"};
NumberWithUnits c{60, "sec"};
NumberWithUnits d{1, "min"};

CHECK_EQ(b*20, a);
CHECK_EQ(2*a, NumberWithUnits{4, "km"});
CHECK_EQ(a*2, NumberWithUnits{4, "km"});
CHECK_EQ(b*2, a*100);
CHECK_FALSE(a+b == b);
CHECK_EQ(1*c,d);
CHECK_EQ(c*2,d*2);
CHECK_EQ(c+d,d*2);
CHECK_FALSE(c+d == d);
CHECK_EQ(c+=d,d+c);
CHECK_EQ(c-d,d*0);
CHECK_EQ(c-=d,d*0);
CHECK_EQ(-d, NumberWithUnits{-1, "min"});


NumberWithUnits x{2, "km"};
CHECK_EQ(x++,NumberWithUnits{3, "km"});
NumberWithUnits y{2, "km"};

CHECK_EQ(++y,NumberWithUnits{2, "km"});
NumberWithUnits z{2, "km"};

CHECK_EQ(z--,NumberWithUnits{1, "km"});
NumberWithUnits w{2, "km"};

CHECK_EQ(--w,NumberWithUnits{2, "km"});




}


TEST_CASE("< > , exc "){
NumberWithUnits::read_units(my_file);
NumberWithUnits a{2, "km"};
NumberWithUnits c{60, "min"};
NumberWithUnits d{1, "hour"};
CHECK_FALSE(c<d);
CHECK_FALSE(c>d);
CHECK_EQ(c<=d , true);
CHECK_EQ(c>=d, true);
CHECK_EQ(c<c+d, true);


NumberWithUnits e{2, "km"};
NumberWithUnits f{100, "m"};
CHECK_EQ(e<=f , false);
CHECK_EQ(e<f , false);
CHECK_EQ(e==f , false);
CHECK_EQ(e!=f , true);
CHECK_EQ(e>f , true);
CHECK_EQ(e>=f , true);


try {
    cout << (a+c) << endl;  
  } catch (const std::exception& ex) {
    cout << ex.what() << endl; // Prints "Units do not match - [m] cannot be converted to [kg]"
  }

  try {
    cout << (a+d) << endl;  
  } catch (const std::exception& ex) {
    cout << ex.what() << endl; // Prints "Units do not match - [m] cannot be converted to [kg]"
  }
}

TEST_CASE("<< , >> "){







}




