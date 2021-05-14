#include "Pieza.hpp"
Pieza::Pieza(){
	
}
Pieza::Pieza(bool c, bool r){
	this->color=c;
	this->reina=r;
}
bool Pieza::getColor(){
	return this->color;
}
void Pieza::setColor(bool c){
	this->color=c;
}
bool Pieza::getNada(){
	return this->nada;
}
void Pieza::setNada(bool r){
	this->nada=r;
}
bool Pieza::getReina(){
	return this->reina;
}
void Pieza::setReina(bool r){
	this->reina=r;
}
string Pieza::toString(){
	if(nada==true){
		return"-";
	}
if(nada==false){
			if(color==false){
				return "X";
			}
				
			if(color==true){
				return "0";
			}
			if(color==false &&reina==true){
				return "RX";
			}
			if(color==true &&reina==true){
				return "RO";	
			}
	}

	
}
