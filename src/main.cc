#include<iostream>
#include<string>
#include "gtest/gtest.h"
#include"windchillindex.h"
#include <cmath>
using std::cout;
using std::endl;
using std::cin;
using edu::vcccd::vc::csv13::computeWindChillIndex;

int main(int argc, char *argv[]) {
	
	double t;
	double v;

	cout << "Please enter your local temperature(as long as its less than 10 celcius): ";
	cin >> t;
	cout << "\n Please enter your local wind Velocity in Meters/Second: ";
	cin >> v;


	double index = computeWindChillIndex(t, v);
	cout << "index: " << index << endl;

	return 0;
}