#include <stdio.h>

void NombreDelJuego();
void Tablero(char tablero[3][3]);
int ingresarFila();
int ingresarColumna();
bool revisarGanador(char tablero[3][3]);

int main(){	
	char tablero[3][3]={{'-','-','-'},
		                {'-','-','-'},  
		                {'-','-','-'}
		                };
    int fila;	       
    int columna;
    bool ganador = false; //false = 0
    int turnos = 0;
   
	NombreDelJuego();	                 
	Tablero(tablero);
	while (ganador == false){
	    do{	
			if(turnos%2 == 0){
			printf("Jugador 1 ");
			} else {
				printf("Jugador 2 ");
				}
	fila = ingresarFila();
	columna = ingresarColumna();
	 }while(tablero[fila][columna] != '-');
	    if(turnos%2 == 0){
        tablero[fila][columna] = 'X';
       }else{
		    tablero[fila][columna] = 'O';
		   }
    Tablero(tablero);
    ganador = revisarGanador(tablero);
    turnos++;
    }
	return 0;
	}


int ingresarFila(){
	int fila;
	printf("Ingrese la fila:\n");
	scanf("%d", &fila);
	return fila;
	}
	
int ingresarColumna(){
	int columna;
	printf("Ingrese la columna:\n");
	scanf("%d", &columna);
	return columna;
	}
	
void Tablero(char tablero[3][3]){
	printf("%c | %c | %c \n", tablero[0][0], tablero[0][1], tablero[0][2]);
	printf("----------\n");
	printf("%c | %c | %c \n", tablero[1][0], tablero[1][1], tablero[1][2]);
	printf("----------\n");
	printf("%c | %c | %c \n", tablero[2][0], tablero[2][1], tablero[2][2]);
		}	
		
bool revisarGanador(char tablero[3][3]){
	if( (tablero[0][0]==tablero[0][1]) && (tablero[0][1]==tablero[0][2]) && (tablero[0][0] != '-') ){
		printf("Ganador en la fila 1.\n");
		return true;
		}
    if( (tablero[1][0]==tablero[1][1]) && (tablero[1][1]==tablero[1][2]) && (tablero[1][0] != '-') ){
		printf("Ganador en la fila 2.\n");
		return true;
		}
	if( (tablero[2][0]==tablero[2][1]) && (tablero[2][1]==tablero[2][2]) && (tablero[2][0] != '-') ){
		printf("Ganador en la fila 3.\n");
		return true;
		}
	if( (tablero[0][0]==tablero[1][0]) && (tablero[1][0]==tablero[2][0]) && (tablero[0][0] != '-') ){
		printf("Ganador en la columna 1\n");
		return true;
		}	
	if( (tablero[0][1]==tablero[1][1]) && (tablero[1][1]==tablero[2][1]) && (tablero[0][1] != '-') ){
		printf("Ganador en la columna 2.\n");
		return true;
		}	
	if( (tablero[0][2]==tablero[1][2]) && (tablero[1][2]==tablero[2][2]) && (tablero[0][2] != '-') ){
		printf("Ganador en la columna 3.\n");
		return true;
		}	
	if( (tablero[0][0]==tablero[1][1]) && (tablero[1][1]==tablero[2][2]) && (tablero[0][0] != '-') ){
		printf("Ganador en una de las diagonales.\n");
		return true;
		}	
	if( (tablero[0][2]==tablero[1][1]) && (tablero[1][1]==tablero[2][0]) && (tablero[0][2] != '-') ){
		printf("Ganador en una de las diagonales.\n");
		return true;
		}
		return false;
		}		
void NombreDelJuego(){
	printf("Gato.\n");
	}		
