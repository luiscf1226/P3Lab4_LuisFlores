#include "Casillas.hpp"
Casillas::Casillas(){
	
}
Casillas::Casillas(Pieza* pp){
	this->p=pp;
}
void Casillas::setPieza(Pieza* pp){
	this->p=pp;
}
Pieza* Casillas::getPieza(){
	return this->p;
}
string Casillas::toString(){
		if(p){
			return p->toString();
		}else{
			return "-";
		}
		

	
}