#pragma once
#include <iostream>
#include <math.h>
class EquationRoots {
protected:
	float a, b;
public:
	EquationRoots(float aK, float bK) : a{ aK }, b{ bK } {};
};

// View - ax+b=0
class LineEquation : public EquationRoots {
public:
	LineEquation(float aK, float bK) : EquationRoots(aK, bK) {};
	void solve() {
		std::cout << "x = " <<  - b / a << std::endl;
	}
};

class LineEquation : public EquationRoots {
	float c;
public:
	LineEquation(float aK, float bK, float cK) : EquationRoots(aK, bK), c{ cK } {};
	void solve() {
		int D = b * b - 4 * a * c;
		if (D < 0) std::cout << "Equation doesn't have any roots\n";
		if (D == 0) std::cout << "x = " << -b / 2 * a << std::endl;
		if (D > 0) {
			std::cout << "x1 = " << (-b + sqrt(D)) / 2 * a << std::endl;
			std::cout << "x2 = " << (-b - sqrt(D)) / 2 * a << std::endl;
		}
	}
};