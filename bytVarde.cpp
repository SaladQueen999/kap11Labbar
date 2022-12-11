#include "functions.h"

void bytVarden (int *pA, int *pB){
    int *gammaltA;
    gammaltA = pA;
    pA = pB;
    pB = gammaltA;
}
void bytVarden (double *pA, double *pB){
    double *gammaltA; 
    gammaltA= pA; 
    pA = pB;
    pB = gammaltA; 
}


void automattestaBytVarden(){
    cout << "Testar bytVarden" << endl;
    int a = 1;
    int b = 2;
    bytVarden(&a, &b);
    assert( a==2 && b==1 );
    double x = 1.5;
    double y = 2.5;
    bytVarden(&x, &y);
    assert( x==2.5 && y==1.5 );
    cout << "Testet av bytVarden lyckades!" << endl;
}