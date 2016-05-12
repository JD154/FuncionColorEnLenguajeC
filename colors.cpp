#include <iostream>
#include <conio.h>
#include <windows.h>


//DECLARACIÓN DE LA FUNCIÓN COLOR	
void color (int x){
	
	HANDLE hCon = GetStdHandle (STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute (hCon, x);
	
}

int main(int argc, char** argv) {
	
	for (int i=0; i<255; i++){
		
		color (i);
		printf ("HOLA MUNDO = %d\n\n", i);
		color (8);
	}
	
	getch();
	
	return 0;
}
