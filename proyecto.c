#include <stdio.h>
#include <stdbool.h>

void crear_torre(int fila1, int fila2, int fila3){
    printf("Fila 1: ");
    for(int i = 0; i < fila1; i++) printf("|");
    printf(" (%d)\n", fila1);

    printf("Fila 2: ");
    for(int i = 0; i < fila2; i++) printf("|");
    printf(" (%d)\n", fila2);

    printf("Fila 3: ");
    for(int i = 0; i < fila3; i++) printf("|");
    printf(" (%d)\n", fila3);
}

void turnos(bool turno, char jugador1[], char jugador2[]){
    if(turno)
        printf("\nTurno de %s\n", jugador1);
    else
        printf("\nTurno de %s\n", jugador2);
}

int main(){
    int opcion;
    int punteo1 = 0, punteo2 = 0;
    int partidas = 0;
    char jugador1[20], jugador2[20];

    while(1){
        printf("1. Iniciar juego\n2. Instrucciones\n3. Salir\n");
        scanf("%d", &opcion);

        if(opcion == 3) break;

        switch(opcion){
            case 1: 
            {
                printf("Nombre jugador 1: ");
                scanf("%s", jugador1);
                printf("Nombre jugador 2: ");
                scanf("%s", jugador2);

                int fila1 = 3, fila2 = 5, fila3 = 7;
                bool turno = true;
                int fila, cantidad, revancha;

                while(1){
                    printf("\nEstado actual:\n");
                    crear_torre(fila1, fila2, fila3);
                    turnos(turno, jugador1, jugador2);

                    if(fila1 == 0 && fila2 == 0 && fila3 == 0){
                        printf("\nEmpate, no hay movimientos disponibles.\n");
                        punteo1 += 1;
                        punteo2 += 1;
                        break;
                    }

                    if(fila1 + fila2 + fila3 == 1){
                        if(turno){
                            printf("\n%s pierde. Gana %s\n", jugador1, jugador2);
                            punteo2 += 3;
                        }else{
                            printf("\n%s pierde. Gana %s\n", jugador2, jugador1);
                            punteo1 += 3;
                        }
                        break;
                    }

                    printf("Seleccione fila (1-3): ");
                    scanf("%d", &fila);

                    printf("Cantidad a retirar: ");
                    scanf("%d", &cantidad);

                    // Validaciones
                    if(fila == 1){
                        if(cantidad > fila1 || cantidad <= 0){
                            printf("Movimiento inválido\n");
                            continue;
                        }
                        fila1 -= cantidad;
                    }else if(fila == 2){
                        if(cantidad > fila2 || cantidad <= 0){
                            printf("Movimiento inválido\n");
                            continue;
                        }
                        fila2 -= cantidad;
                    }else if(fila == 3){
                        if(cantidad > fila3 || cantidad <= 0){
                            printf("Movimiento inválido\n");
                            continue;
                        }
                        fila3 -= cantidad;
                    }else{
                        printf("Fila inválida\n");
                        continue;
                    }

                    turno = !turno;
                }

                partidas++;

                printf("\nResultados finales: \n");
                printf("%s: %d puntos\n", jugador1, punteo1);
                printf("%s: %d puntos\n", jugador2, punteo2);
                printf("Partidas jugadas: %d\n", partidas);

                printf("\n1. Jugar otra vez\n2. Volver al menú\n");
                scanf("%d", &revancha);

                if(revancha == 1){
                    continue;
                }
                break;
            }

            case 2:
                printf("\nIntrucciones:\n");
                printf("1. Dos jugadores se turnan.\n");
                printf("2. Hay 3 filas: 3, 5 y 7 palillos.\n");
                printf("3. Se elige una fila y cuántos quitar.\n");
                printf("4. Si queda 1 objeto en tu turno, pierdes.\n");
                printf("5. Ganas: 3 puntos | Empate: 1 punto\n");
                break;

            default:
                printf("Opción inválida\n");
                break;
        }
    }

    return 0;
}