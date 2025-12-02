#include <iostream>
using namespace std;

int main(){

    int N,cont = 0;
    cin >> N;
    int Vetor[N];

    for(int i = 0; i < N; i++){
        cin >> Vetor[i];
    }
    int maior = Vetor[N-1];

    for(int i = N - 2; i >= 0; i--){
        if(Vetor[i] <= maior){
            cont++;
        }else{
            maior = Vetor[i];
        }
    }

    cout << cont << endl;

    return 0;
}
