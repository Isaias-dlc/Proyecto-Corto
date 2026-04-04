#include <stdio.h>
#include <stdbool.h>

void torre(int filas[]){
	int i = 0;
	printf("\n");
	while(i < 3){
		printf("Fila %i: ", i + 1);
		int j = 0;		
		
		while(j < filas[i]){
			printf("|");
			j++;
		}

		printf("(%i)", filas[i]);
		printf("\n");
		i++;
	}
	printf("\n\n");
}

void turnos(bool *turno, char jugador1[20], char jugador2[20]){
	if(*turno){
		printf("\nTurno de: %s\n", jugador1);
	}else{
		printf("\nTurno de: %s\n", jugador2);
	}
		
	*turno = !(*turno);
}

void puntos(){
	int puntosjugador1 = 0;
	int puntosjugador2 = 0;
}

void quitarPalitos(int filas[],bool *turno){		
	int fila;
	int cantidad;
	printf("Seleccione la fila (1-3): ");
	scanf("%i", &fila);
	printf("Cuantos palitos desea retirar: ");
	scanf("%i", &cantidad);
		
	if(fila < 1 || fila > 3){
		printf("\nFila invalida\n");
		*turno = !(*turno);
	}else if(cantidad < 1 || cantidad > filas[fila-1]){
		printf("\nCantidad invalida\n");
		*turno = !(*turno);
	}else{
		filas[fila-1] -= cantidad;
	}
}

int main(int argc, char *argv[]) {
	int opciones;	
	
	while(1){
		printf("Seleccione una de las siguientes opciones:\n\n1. Iniciar juego\n2. Intrucciones\n3. Salir del juego\n\n");
		scanf("%i",&opciones);
		if (opciones == 1){
			bool turno = true;
			char jugador1[20], jugador2[20];
			int filas[3] = {3,5,7};
			printf("\nJuego iniciado!\nIngrese el nombre del jugador 1: ");
			scanf("%s",jugador1);
			printf("Ingrese el nombre del jugador 2: ");
			scanf("%s",jugador2);
			
			while(filas[0] + filas[1] + filas[2] > 1){
				turnos(&turno, jugador1,jugador2);
				torre(filas);
				quitarPalitos(filas,&turno);
			}
			
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
			printf("Ingrese un dato v�lido");
		}
	}
	return 0;
}7
