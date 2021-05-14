#include <iostream>
#include "Damas.hpp"
#include "Casillas.hpp"
#include "Pieza.hpp"
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	Casillas *casi= new Casillas();
	Damas *d=new Damas();
	d->crear(8,8);
	d->llenar(8,8,casi);
	d->print2(8,8);
	return 0;
}