#ifndef CASILLAS_HPP
#define CASILLAS_HPP
#include<string>
#include <iostream>
#include "Pieza.hpp"
using namespace std;
class Casillas{
    private:
    	Pieza *p;

    public:
		Casillas();
		Casillas(Pieza*);
		void setPieza(Pieza*);
		Pieza* getPieza();
		string toString();

	

};
#endif