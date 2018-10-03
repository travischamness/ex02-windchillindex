#include<iostream>
#include"windchillindex.h"
#include <cmath>
using std::cout;
using std::endl;
using std::cin;
using edu::vcccd::vc::csv13::computeWindChillIndex;

int main(int argc, char *argv[]) {
	
	cout <<computeWindChillIndex(5,11);

	return 0;
}