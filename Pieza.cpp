#include "Pieza.hpp"
Pieza::Pieza(){
	
}
Pieza::Pieza(bool b,bool v,bool f){
	this->color=b;
	this->reina=v;
	this->nada=f;
}
Pieza::Pieza(bool v){
	this->color=v;
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
		return" ";
	}

			if(color==false&&nada==false){
				return "X";
			}
				
			if(color==true&&nada==false){
				return "0";
			}
			if(color==false &&reina==true&&nada==false){
				return "RX";
			}
			if(color==true &&reina==true&&nada==false){
				return "RO";	
			}


	
}
