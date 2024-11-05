#pragma once
#include <iostream>
using namespace std;

class Pair {
protected:
    double first;
    double second;

public:
    Pair(double f = 0, double s = 0) : first(f), second(s) {}
    void setFirst(double f) { first = f; }
    void setSecond(double s) { second = s; }
    double getFirst() const { return first; }
    double getSecond() const { return second; }
    double multiply() const { return first * second; }
    operator string() const;
    friend ostream& operator<<(ostream& os, const Pair& p);
    friend istream& operator>>(istream& is, Pair& p);
};
