#pragma once
#include "Pair.h"
#include <cmath>

class RightAngled : public Pair {
public:
    RightAngled(double f = 0, double s = 0) : Pair(f, s) {}

    double hypotenuse() const {
        return sqrt(first * first + second * second);
    }

    double area() const {
        return (first * second) / 2;
    }

    operator string() const;
    friend ostream& operator<<(ostream& os, const RightAngled& ra); // Додано для виводу RightAngled
};

