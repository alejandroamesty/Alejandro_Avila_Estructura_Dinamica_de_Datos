// Realizar un ejercicio práctico con arreglos dinámicos en donde se demuestre el uso de los operadores new y delete.

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void pedir_notas();
void mostrar_notas();
int num_notas;
int *notas;

int main(){
	
	pedir_notas();
	mostrar_notas();

	delete[] notas;
	
	return 0;
}

void pedir_notas(){
	
	printf("Ingrese el numero de notas: ");
	scanf("%d", &num_notas);

	notas = new int[num_notas];

	for(int i=0; i<num_notas; i++){
	
	printf("Ingrese una nota: ");
	scanf("%d", &notas[i]);

	}
}

void mostrar_notas(){
	
	printf("\n\nMostrando las notas ingresadas: \n");

	for(int i=0; i<num_notas; i++){
		
	printf("%d \n", notas[i]);

	}
}
