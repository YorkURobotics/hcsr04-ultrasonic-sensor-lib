#pragma once
#include <Arduino.h>

class HCSR04
{
public:
	// overloaded constructors & destructor
	HCSR04(int out, int echo);
	HCSR04(int out, int echo[], int n);
	~HCSR04();
	// utility functions
	float dist() const;
	float dist(int n) const;

private:
	void init(int out, int echo[], int n);
	int out;	// ouput pin
	int *echo;	// echo pin(s)
	int n;	// number of sensors, i.e., echo pins
};
