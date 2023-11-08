#include <iostream>
using namespace std;

void ordena (int a, int b);
void divide (double c);

int main(){
    int a, b;
    double numero;
    cin >> a;
    cin >> b;
    ordena(a,b);
    cin >> numero;
    divide(numero);
}
void ordena (int a, int b){
    int aux=0;
    if(a>b){
        aux = b;
        b = a;
        a = aux;
    }
    cout << a << " " << b << endl;
}
void divide(double c){
    int parteI;
    double parteF;
    parteI=int(c);
    parteF = c - parteF;
    cout << parteI << endl
         << parteF << endl;
}