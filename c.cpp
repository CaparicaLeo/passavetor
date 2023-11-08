#include <iostream>
using namespace std;
int funcaoUm(int v[],int n);
int funcaoDois(int v[],int n);
int funcaoTres(int v[],int n);
void funcaoQuatro(int v[],int n);
int funcaoCinco(int *v, int n);
int main(){
    int n;
    cout << "Tamanho do vetor: ";
    cin >> n;
    int vetor[n];
    for(int i=0;i<n;i++){
        cout << "Elemento " << i+1 << " : ";
        cin >> vetor[i];
    }
    cout << "Maior termo do vetor: "<< funcaoUm(vetor,n)<< endl; 
    cout << "Media dos termos do vetor: " << funcaoDois(vetor,n) << endl;
    cout << "Numero de termos positivos do vetor: " << funcaoTres(vetor,n) << endl;
    funcaoQuatro(vetor,n);
    int maior, menor;
    cout << "Os maiores e menores termos respectivamente: " << funcaoCinco(vetor, n) << endl;
}
int funcaoUm(int v[],int n){
    int maior=0;
    for(int i=0;i<n;i++){
        if(v[i]>maior){
            maior = v[i];
        }
    }
    return maior; 
}
int funcaoDois(int v[],int n){
    int soma=0, media;
    for(int i=0;i<n;i++){
        soma+=v[i];
    }
    media = soma/n;
    return media;
}
int funcaoTres(int v[],int n){
    int contador=0;
    for(int i=0;i<n;i++){
        if(v[i]>0){
            contador++;
        }
    }
    return contador;
}
void funcaoQuatro(int v[], int n){
    for(int i=0;i<n;i++){
        cout << "Elemento " << i+1 << " : ";
        cout << v[i] << endl;
    }
}
int funcaoCinco(int v, int n){
    int maior=0, menor=0;
    for(int i=0;i<n;i++){
        if(v[i]>maior){
            maior = v[i];
        }
    }
    for(int i=0;i<n;i++){
        if(v[i]<menor){
            menor= v[i];
        }
    }
    return maior && menor;
}