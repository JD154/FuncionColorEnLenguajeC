#include <iostream>
#include <conio.h>
#include <windows.h> 	//LA LIBRERÍA 'windows.h' ES NECESARIA PARA LA FUNCIÓN COLOR


//DECLARACIÓN DE LA FUNCIÓN COLOR	
void color (int x){
	
	HANDLE hCon = GetStdHandle (STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute (hCon, x);
	
}

int main(int argc, char** argv) {
	
	for (int i=0; i<255; i++){
		
		color (i);		//LA LINEA 'COLOR ();' DEBE SER INCLUIDA ANTES DE LO QUE VAS A IMPRIMIR Y DENTRO DEL PARÉNTESIS INCLUYES EL CÓDIGO DEL COLOR
		printf ("HOLA MUNDO = %d\n\n", i);
		color (8);		//ESTA LINEA DEVUELVE A LAS SUBSECUENTES EL COLOR GRIS ORIGINAL DE LA CONSOLA, DE LO CONTRARIO IMPRIMIRÁ TODO DEL ÚLTIMO COLOR SELECCIONADO
	}
	
	getch();
	
	return 0;
}
