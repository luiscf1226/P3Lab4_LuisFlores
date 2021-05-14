#include "Damas.hpp"
#include "Casillas.hpp"
#include "Pieza.hpp"
#include <string>
#include <iostream>
using namespace std;

Damas::Damas(){
	
}
Damas::Damas(bool gg,bool cc){
	this->gano=gg;
	this->puede=cc;
}
Casillas*** Damas::crear(int filas,int columnas){
	 this->matriz=new Casillas**[filas];
    for(int i=0;i<filas;i++){
        this->matriz[i]=new Casillas*[columnas];

    }
    cout<<"creado"<<endl;
    return this->matriz;
}
void Damas::llenar(int filas,int columnas,Casillas* c){
	//0,1 / 0,3 /0,5/0,7/1,0/1,2/1,4/1,6/3,1/3,3/3,5/3,7
		cout<<"lleno"<<endl;
		Casillas *casi=new Casillas();
		Casillas *casi2=new Casillas();
		Pieza *p=new Pieza();
		Pieza *p2=new Pieza();
		p->setNada(false);
		p->setColor(true);
		casi->setPieza(p);
		
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				this->matriz[i][j]=new Casillas(p);
			}
		}
		p->setNada(false);
		p->setColor(false);
		casi->setPieza(p);
		this->matriz[0][1]=new Casillas(p);
	    this->matriz[0][3]=new Casillas(p);
	    this->matriz[0][5]=new Casillas(p);
	    this->matriz[0][7]=new Casillas(p);
	    this->matriz[1][0]=new Casillas(p);
	    this->matriz[1][2]=new Casillas(p);
	    this->matriz[1][4]=new Casillas(p);
	    this->matriz[1][6]=new Casillas(p);
	    this->matriz[2][1]=new Casillas(p);
	    this->matriz[2][3]=new Casillas(p);
	    this->matriz[2][5]=new Casillas(p);
	    this->matriz[2][7]=new Casillas(p);
		
		
	
}
void Damas::print(int filas,int columnas){

}
void Damas::print2(int filas,int columnas){
	cout<<"imprimo"<<endl;;
	for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				cout<<matriz[i][j]->toString();
			}
			cout<<endl;
		}
}