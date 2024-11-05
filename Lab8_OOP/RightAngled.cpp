#include "RightAngled.h"
#include <sstream>

ostream& operator<<(ostream& os, const RightAngled& ra) {
    os << "Cathetus 1: " << ra.first
        << ", Cathetus 2: " << ra.second
        << ", Hypotenuse: " << ra.hypotenuse()
        << ", Area: " << ra.area();
    return os;
}

