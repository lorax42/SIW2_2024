/*
 *
 * 1.a) Punkt(6|7)
 *   b) bewegt Grabungsgebiet nach y+ und etwas nach x-
 *      Punkt(5|11)
 *   c) Für jeden Punkt des Feldes schauen, wie viele Fundstätten innerhalb 6 LE liegen
 *      und Punkt mit größter Fundstättenanzahl ausgeben
 *
 */

#include <stdio.h>

#define LEN(arr) sizeof(arr)/sizeof(arr[0])

typedef struct Punkt{
    int x, // x-Koordinate
        y, // y-Koordinate
        i, // Anzahl der Fundstätten in Radius
        isFundstaette; // wenn 1, dann ist Fundstätte
}Punkt;

void pktInit(Punkt feld[][]){
    for(int x=0;x<=LEN(feld);x++){
        for(int y=0;y<=LEN(feld[x]);y++){
            feld[x][y].isFundstaette=0;
        }
    }
}

int main(int argc, char** argv){
    Punkt feld[25][20];

    pktInit(feld);

    feld[1][14].isFundstaette=1;
    feld[2][7].isFundstaette=1;
    feld[3][4].isFundstaette=1;
    feld[8][16].isFundstaette=1;
    feld[10][11].isFundstaette=1;

    for(int x=0;x<=LEN(feld);x++){
        for(int y=0;y<=LEN(feld[x]);y++){
            printf("(%d,%d):%d\n",x,y,feld[x][y].isFundstaette);
        }
    }

    return 0;
}

