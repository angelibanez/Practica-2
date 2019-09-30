#include <stdio.h>
#include "iostream"

using namespace std;

int valores[19] = {4,256,256,1,4,256,4,4,4,4,4,4,8,4,256,256,256,4,3};
//string nombres[19] = {"ID","Nombre_Hospital","Direccion","Servicio","No_Trabajadores","Especialidad","Horario","Pacientes","Camas","Salas","Elevadores","Edificios","Extension","Telefono","Correo","Pagina_Web","Nombre_Director","Ranking","Fecha_Apertura"};
int registros = 50627392;
int Filas_Pagina = 35;

int Encontrar_No_Paginas();
int Encontrar_Tamano_Fila();
int Encontrar_Tamano_Pagina(int);
int Encuentra_Tamano_BD(int,int);

int main(){
	int No_Paginas = 0, Tamano_Filas = 0, Tamano_Pagina = 0, Tamano_BD = 0;
	
	No_Paginas = Encontrar_No_Paginas();
	Tamano_Filas = Encontrar_Tamano_Fila();
	Tamano_Pagina = Encontrar_Tamano_Pagina(Tamano_Filas);
	Tamano_BD = Encuentra_Tamano_BD(No_Paginas,Tamano_Pagina);
	
	printf("El tama%co de una fila para esta BD es: %d",164,Tamano_Filas);
	printf("\nEl tama%co de una pagina para esta BD es: %d",164,Tamano_Pagina);
	printf("\nEl tama%co de esta BD es: %d",164,Tamano_BD);
}

int Encontrar_No_Paginas(){
	int NoPaginas = 0;
	NoPaginas = registros/Filas_Pagina;
	return NoPaginas;
}

int Encontrar_Tamano_Fila(){
	int TamFilas = 0;
	int limite = (sizeof(valores)/sizeof(valores[0]));
    for (int i = 0; i < limite; i++){
            TamFilas += valores[i];
    }
	return TamFilas;
}

int Encontrar_Tamano_Pagina(int Tamano_Fila){
	int TamPagina = 0;
	TamPagina = Tamano_Fila*Filas_Pagina;
	return TamPagina;
}

int Encuentra_Tamano_BD(int No_Paginas,int Tamano_Pagina){
	int TamBD = 0;
	TamBD = No_Paginas*Tamano_Pagina;
	return TamBD;
}
