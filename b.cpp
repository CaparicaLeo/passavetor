// O erro do código do exercício seria que o código em si
// so avalia o primeiro termo do vetor, por conta do return dentro do loop.

// o codigo abaixo corrije esse erro.

#include <iostream>
using namespace std;
bool has_zero(int a[], int n) {
    int i, contador=0;
    for (i = 0; i < n; i++){
        if (a[i] == 0){
            contador++;
        }
    }
    if(contador > 0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n=3,vetor[n];
    for(int i=0;i<n;i++){
        cin>> vetor[i];
    }
    cout << has_zero(vetor,n); 
}
