#include "Pair.h"
#include <sstream>

Pair::operator string() const {
    stringstream ss;
    ss << "First: " << first << ", Second: " << second;
    return ss.str();
}

ostream& operator<<(ostream& os, const Pair& p) {
    os << string(p);
    return os;
}

istream& operator>>(istream& is, Pair& p) {
    cout << "Enter first number: ";
    is >> p.first;
    cout << "Enter second number: ";
    is >> p.second;
    return is;
}
