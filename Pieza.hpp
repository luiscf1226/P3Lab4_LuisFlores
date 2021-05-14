#ifndef PIEZA_HPP
#define PIEZA_HPP
#include<string>
#include <iostream>
using namespace std;
class Pieza{
    private:
	bool color;
	bool reina;
	bool nada;

    public:
	Pieza();
	Pieza(bool,bool,bool);
	Pieza(bool);
	Pieza(bool,bool);
	bool getNada();
	void setNada(bool);
	bool getColor();
	void setColor(bool);
	bool getReina();
	void setReina(bool);
	
	string toString();
	

};
#endif