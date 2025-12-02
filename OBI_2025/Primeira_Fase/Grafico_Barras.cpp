#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int Vetor[N];

    for(int i = 0; i < N; i++){
        cin >> Vetor[i];
    }

    int maior = Vetor[0];
    int indice = 0;
    for(int i = 0; i < N; i++){
        if(Vetor[i] > maior){
            maior = Vetor[i];
            indice = i;
        }
    }
    int Matriz[maior][N];

    for(int i = 0; i < maior; i++){
        for(int j = 0; j < N; j++){
            Matriz[i][j] = 0;
        }
    }

    for(int i = maior - 1; i >= 0; i--){
        for(int j = 0; j < N; j++){
            if(Vetor[j] > 0){
                Vetor[j]--;
                Matriz[i][j] = 1;
            }

        }
    }

    for(int i = 0; i < maior; i++){
        for(int j = 0; j < N; j++){
            cout << Matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
