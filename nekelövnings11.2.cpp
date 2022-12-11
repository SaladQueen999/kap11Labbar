#include "functions.h"

void ovaPaPekarnotation(){
cout << "Övar på pekarnotation" << endl;
double x = 1.0;
// TODO: inför variablerna pX ppX och pppX och
// ändra sedan x till 2 med hjälp av pppX
double* pX;
pX = &x;
double *ppX;
ppX = pX;
double *pppX;
pppX = ppX;
*pppX = 2;
cout << "x är nu " << x << endl;
// assert( x == 2.0);
cout << "Övningen lyckades." << endl;
}
void ingangTillPekare(){
ovaPaPekarnotation();
}
int main(){
    ovaPaPekarnotation();
}