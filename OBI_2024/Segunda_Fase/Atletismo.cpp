#include <iostream>
using namespace std;

int main(){
    int N,X;
    cin >> N;
    int Vetor[N + 1] = {0};
    for(int i = 1; i <= N; i++){
        cin >> X;
        Vetor[X] = i;
    }
    for(int i = 1; i <= N; i++){
        cout << Vetor[i] << endl;
    }
    return 0;
}
