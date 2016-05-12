#include <iostream>
#include <conio.h>
#include <windows.h> 	//acotación número #1 (Leer README)


//acotación  número #2 (Leer README)
void color (int x){
	
	HANDLE hCon = GetStdHandle (STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute (hCon, x);
	
}

int main(int argc, char** argv) {
	
	for (int i=0; i<255; i++){
		
		color (i);		//acotación número #3 (Leer README)
		printf ("HOLA MUNDO = %d\n\n", i);
		color (8);		//acotación número #4 (Leer README)
	}
	
	getch();
	
	return 0;
}
