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
		
		Pieza *p=new Pieza();
		//p->setNada(true);
		p->setColor(false);
		casi->setPieza(p);
		
		
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				//this->matriz[i][j]=casi;
					if(i%2==0 && j%2==0&&i<=2) {
						this->matriz[i][j]=new Casillas(new Pieza(false,false,true));
					}
					else {
						if(i%2!= 0 && j%2!=0&&i<=2) {
							this->matriz[i][j]=new Casillas(new Pieza(false,false,true));

						} else {
							this->matriz[i][j]=new Casillas(new Pieza(false,false,false));
							
						}
					}
			}
		}
	//this->matriz[i][j]=new Casillas(new Pieza(false,false,true));
	//
	this->matriz[3][0]=new Casillas(new Pieza(false,false,true));
    this->matriz[3][1]=new Casillas(new Pieza(false,false,true));
    this->matriz[3][2]=new Casillas(new Pieza(false,false,true));
    this->matriz[3][3]=new Casillas(new Pieza(false,false,true));
    this->matriz[3][4]=new Casillas(new Pieza(false,false,true));
    this->matriz[3][5]=new Casillas(new Pieza(false,false,true));
    this->matriz[3][6]=new Casillas(new Pieza(false,false,true));
    this->matriz[3][7]=new Casillas(new Pieza(false,false,true));
    //
    this->matriz[4][0]=new Casillas(new Pieza(false,false,true));
    this->matriz[4][1]=new Casillas(new Pieza(false,false,true));
    this->matriz[4][2]=new Casillas(new Pieza(false,false,true));
    this->matriz[4][3]=new Casillas(new Pieza(false,false,true));
    this->matriz[4][4]=new Casillas(new Pieza(false,false,true));
    this->matriz[4][5]=new Casillas(new Pieza(false,false,true));
    this->matriz[4][6]=new Casillas(new Pieza(false,false,true));
    this->matriz[4][7]=new Casillas(new Pieza(false,false,true));
 //
 	this->matriz[5][1]=new Casillas(new Pieza(false,false,true));
    this->matriz[5][3]=new Casillas(new Pieza(false,false,true));
    this->matriz[5][5]=new Casillas(new Pieza(false,false,true));
    this->matriz[5][7]=new Casillas(new Pieza(false,false,true));
    this->matriz[6][2]=new Casillas(new Pieza(false,false,true));
    this->matriz[6][4]=new Casillas(new Pieza(false,false,true));
    this->matriz[6][6]=new Casillas(new Pieza(false,false,true));
    this->matriz[6][0]=new Casillas(new Pieza(false,false,true));
    this->matriz[7][1]=new Casillas(new Pieza(false,false,true));
    this->matriz[7][3]=new Casillas(new Pieza(false,false,true));
    this->matriz[7][5]=new Casillas(new Pieza(false,false,true));
    this->matriz[7][7]=new Casillas(new Pieza(false,false,true));
	   //mitad abajo 
	this->matriz[5][0]=new Casillas(new Pieza(true,false,false));
    this->matriz[5][2]=new Casillas(new Pieza(true,false,false));
    this->matriz[5][4]=new Casillas(new Pieza(true,false,false));
    this->matriz[5][6]=new Casillas(new Pieza(true,false,false));
    this->matriz[6][1]=new Casillas(new Pieza(true,false,false));
    this->matriz[6][3]=new Casillas(new Pieza(true,false,false));
    this->matriz[6][5]=new Casillas(new Pieza(true,false,false));
    this->matriz[6][7]=new Casillas(new Pieza(true,false,false));
    this->matriz[7][0]=new Casillas(new Pieza(true,false,false));
    this->matriz[7][2]=new Casillas(new Pieza(true,false,false));
    this->matriz[7][4]=new Casillas(new Pieza(true,false,false));
    this->matriz[7][6]=new Casillas(new Pieza(true,false,false));
	    
	   
		
		
	
}
void Damas::print(int filas,int columnas){

}
void Damas::print2(int filas,int columnas){
	//cout<<"imprimo"<<endl;;
	for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				cout<<matriz[i][j]->toString();
			}
			cout<<endl;
		}
}
bool Damas::valido(){
	int fila,columna;
	int fila1,columna1;
	bool si=false;
	cout<<"JUGADOR 1 SERA X "<<endl<<"JUGADOR 2 SERA 0"<<endl;
	//return si;
	int cc=1;
	while(cc==1){
		cout<<"Jugador 1 escoja cual ficha: "<<endl;
		cout<<"fila de su ficha: ";
		cin>>fila;
		cout<<"columna de su ficha: ";
		cin>>columna;
		Pieza *p;
		bool comido;
		
		if(matriz[fila][columna]->getPieza()->getColor()==false){
			cout<<"si hay ficha: "<<endl;
			cout<<"se movera en diagonal"<<endl;
			cout<<"fila : ";
			cin>>fila1;
			cout<<"columna : ";
			cin>>columna1;
			if(fila1+1&&columna1-1||fila1+1&&columna1+1){
				cout<<"si es diagonal: "<<endl;
				comido=capturar(fila1,columna1);
				if(comido==true){
					cout<<"voy a saltar"<<endl;
					matriz[fila1][columna1]=matriz[fila][columna];
					matriz[fila1+1][columna1-1]=matriz[fila][columna];
					
				}
				matriz[fila1][columna1]=matriz[fila][columna];
				matriz[fila][columna]=new Casillas(new Pieza(false,false,true));
				print2(8,8);
				cc=0;
			}else{
				cout<<"NO ES DIAGONAL "<<endl;
				cc=0;
			}
			
			
		}
		else{
			cout<<"no hay ficha: "<<endl;
			break;
			
		}
		
		
	}
	cc=2;
	while(cc==2){
		cout<<"Jugador 2 escoja cual ficha: "<<endl;
		cout<<"fila de su ficha: ";
		cin>>fila;
		cout<<"columna de su ficha: ";
		cin>>columna;
		Pieza *p;
		if(matriz[fila][columna]->getPieza()->getColor()==true){
			
			cout<<"si hay ficha: "<<endl;
			cout<<"se movera en diagonal"<<endl;
			cout<<"fila : ";
			cin>>fila1;
			cout<<"columna : ";
			cin>>columna1;
			if(fila1-1&&columna1+1||fila1-1&&columna1-1){
				cout<<"si es diagonal: "<<endl;
				
				//capturar(fila1,columna1);
				matriz[fila1][columna1]=matriz[fila][columna];
				matriz[fila][columna]=new Casillas(new Pieza(false,false,true));
				print2(8,8);
				cc=0;
			}else{
				cout<<"NO ES DIAGONAL "<<endl;
				cc=0;
			}
			
			
		}
		else{
			cout<<"no hay ficha: "<<endl;
			break;
			
		}
		
		
	}
	return si;
}
bool Damas::capturar(int filas,int columnas){
	bool capt=false;
	while (capt==false){
		if(matriz[filas][columnas]->getPieza()->getColor()==true&&matriz[filas+1][columnas-1]->getPieza()->getNada()==true){
			cout<<"COMO"<<endl;
			
			capt=true;
			return capt;
		}else{
			cout<<"no comi"<<endl;
			return capt;
		}
	}
}
bool Damas::capturar2(int filas,int columnas){
	bool capt=false;
	while (capt==false){
		if(matriz[filas][columnas]->getPieza()->getColor()==false&&matriz[filas+1][columnas-1]->getPieza()->getNada()==true){
			cout<<"COMO"<<endl;
			
			capt=true;
			return capt;
		}else{
			cout<<"no comi"<<endl;
			return capt;
		}
	}

}
		
	
	
	
