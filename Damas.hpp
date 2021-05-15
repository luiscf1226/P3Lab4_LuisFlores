#ifndef DAMAS_HPP
#define DAMAS_HPP
#include<string>
#include <iostream>
#include "Pieza.hpp"
#include "Casillas.hpp"
using namespace std;
class Damas{
    private:
		Casillas*** matriz;
		bool gano;
		bool puede;

    public:
		Damas();
		Damas(bool,bool);
		Casillas*** crear(int,int);
		~Damas();
		void free(int,int);
		void llenar(int,int,Casillas*);
		void print(int,int);
		void print2(int,int);
		bool ganador(int,int);
		bool valido();
		bool capturar(int,int,int);
		bool capturar2(int,int,int);
		void jugar();

	

};
#endif