#include <iostream>
using namespace std;

void creartorre(int fila1, int fila2, int fila3){
    cout << "Fila 1: ";
    for(int i = 0; i < fila1; i++) cout << "|";
    cout << " (" << fila1 << ")" << endl;

    cout << "Fila 2: ";
    for(int i = 0; i < fila2; i++) cout << "|";
    cout << " (" << fila2 << ")" << endl;

    cout << "Fila 3: ";
    for(int i = 0; i < fila3; i++) cout << "|";
    cout << " (" << fila3 << ")" << endl;
}

void turnos(bool turno, string jugador1, string jugador2){
    if(turno)
        cout << "\nTurno de " << jugador1 << endl;
    else
        cout << "\nTurno de " << jugador2 << endl;
}

int main(){
    int opcion;
    int punteo1 = 0, punteo2 = 0;
    int partidas = 0;
    string jugador1, jugador2;

    while(true){
        cout << "1. Iniciar juego\n2. Instrucciones\n3. Salir\n";
        cin >> opcion;

        if(opcion == 3) break;

        switch(opcion){
            case 1:{
                cout << "Nombre jugador 1: ";
                cin >> jugador1;
                cout << "Nombre jugador 2: ";
                cin >> jugador2;

                int fila1 = 3, fila2 = 5, fila3 = 7;
                bool turno = true;
                int fila, cantidad, revancha;

                while(true){
                    cout << "\nEstado actual:\n";
                    creartorre(fila1, fila2, fila3);

                    turnos(turno, jugador1, jugador2);

                    if(fila1 == 0 && fila2 == 0 && fila3 == 0){
                        cout << "\nEmpate, no hay movimientos disponibles.\n";
                        punteo1 += 1;
                        punteo2 += 1;
                        break;
                    }

                    if(fila1 + fila2 + fila3 == 1){
                        if(turno){
                            cout << "\n" << jugador1 << " pierde. Gana " << jugador2 << endl;
                            punteo2 += 3;
                        }else{
                            cout << "\n" << jugador2 << " pierde. Gana " << jugador1 << endl;
                            punteo1 += 3;
                        }
                        break;
                    }

                    cout << "Seleccione fila (1-3): ";
                    cin >> fila;

                    cout << "Cantidad a retirar: ";
                    cin >> cantidad;

                    if(fila == 1){
                        if(cantidad > fila1 || cantidad <= 0){
                            cout << "Movimiento invalido\n";
                            continue;
                        }
                        fila1 -= cantidad;
                    }
                    else if(fila == 2){
                        if(cantidad > fila2 || cantidad <= 0){
                            cout << "Movimiento invalido\n";
                            continue;
                        }
                        fila2 -= cantidad;
                    }
                    else if(fila == 3){
                        if(cantidad > fila3 || cantidad <= 0){
                            cout << "Movimiento invalido\n";
                            continue;
                        }
                        fila3 -= cantidad;
                    }
                    else{
                        cout << "Fila invalida\n";
                        continue;
                    }

                    turno = !turno;
                }

                partidas++;

                cout << "\nResultados: \n";
                cout << jugador1 << ": " << punteo1 << " puntos\n";
                cout << jugador2 << ": " << punteo2 << " puntos\n";
                cout << "Partidas jugadas: " << partidas << endl;

                cout << "\n1. Jugar otra vez\n2. Volver al menu\n";
                cin >> revancha;

                if(revancha == 1){
                    continue;
                }

                break;
            }

            case 2:
                cout << "\nInstrucciones: \n";
                cout << "1. Dos jugadores se turnan.\n";
                cout << "2. Hay 3 filas: 3, 5 y 7 palillos.\n";
                cout << "3. Se elige una fila y cuantos quitar.\n";
                cout << "4. Si queda 1 objeto en tu turno, pierdes.\n";
                cout << "5. Ganas: 3 puntos | Empate: 1 punto\n";
                break;

            default:
                cout << "Opcion invalida\n";
        }
    }

    return 0;
}