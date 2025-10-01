#include <iostream>
using namespace std;

int main() {
    int N, M;
    string P, S;
    cin >> N >> P;
    cin >> M >> S;

    int menor = min(N, M);
    int cont = 0;

    for (int i = 0; i < menor; i++) {
        if (P[i] == S[i]) {
            cont++;
        } else {
            break;  // Para no primeiro caractere diferente
        }
    }

    cout << cont << "\n";

    return 0;
}
