#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N,M,P,G,C,X;
    cin >> N >> M;
    vector <int> Vetor;

    for(int i = 0; i < N; i++){
        cin >> P >> G >> C;
        X = 4 * P + 9 * G + 4 * C;
        Vetor.push_back(X);
    }

    for(int i = 0; i < N; i++){
        M -= Vetor[i];
    }
    cout << M << endl;
    return 0;
}
