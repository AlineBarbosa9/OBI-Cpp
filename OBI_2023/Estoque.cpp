#include <iostream>

#define MAX 501

using namespace std;

int main(){
    int Matriz[MAX][MAX];
    int vendas = 0;
    int N,M,P,I,J;
    cin >> M >> N;
    for(int i = 1; i <= M; i++){
        for(int j = 1; j <= N; j++){
            cin >> Matriz[i][j];
        }
    }
    cin >> P;
    for(int i = 0; i < P; i++){
       cin >> I >> J;
        if(Matriz[I][J] > 0){
            Matriz[I][J]--;
            vendas++;
        }
    }
    cout << vendas;

    return 0;
}
