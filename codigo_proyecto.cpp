#include <iostream>
using namespace std;
	
	int main() {
		int opciones;	
		
		while(1){
			printf("Seleccione una de las siguientes opciones:\n\n1. Iniciar juego\n2. Intrucciones\n3. Salir del juego\n\n");
			scanf("%i",&opciones);
			if (opciones == 1){
				char jugador1[20], jugador2[20];
				int filas[3] = {3,5,7};
				printf("\nJuego iniciado!\nIngrese el nombre del jugador 1: ");
				scanf("%s",jugador1);
				printf("Ingrese el nombre del jugador 2: ");
				scanf("%s",jugador2);
				
				// Funciones para ejecutar el juego
				
			}else if(opciones == 2){
				
				printf("Instrucciones:\n");
				printf("1. Juegan 2 personas un turno a la vez.\n");
				printf("2. Existen tres filas de objetos (fichas, palillos, etc). La primera fila contiene 3 elementos, la segunda 5 y la tercera 7.\n");
				printf("3. En el turno de un jugador este puede retirar cualquier cantidad de objetos dentro de una misma fila.\n");
				printf("4. El jugador que se quede con el unico objeto restante pierde.\n\n");
				
			}else if (opciones == 3){
				
				printf("Juego finalizado!\n");
				break;
				
			}else{
				printf("Ingrese un dato v?lido");
			}
		}
		return 0;
}

