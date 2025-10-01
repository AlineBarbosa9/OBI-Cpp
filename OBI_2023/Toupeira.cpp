#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 1001;
vector<int> lista[MAXN]; // Lista de adjacência

// Verifica se há aresta direta entre a e b
bool temArestaDireta(int a, int b) {
    for (int i = 0; i < lista[a].size(); i++) {
        if (lista[a][i] == b) return true;
    }
    return false;
}

int main() {
    int S, T;
    cin >> S >> T;

    // Leitura dos túneis
    for (int i = 0; i < T; ++i) {
        int X, Y;
        cin >> X >> Y;
        lista[X].push_back(Y);
        lista[Y].push_back(X);
    }

    int P;
    cin >> P;
    int possiveis = 0;

    // Verificação dos passeios
    for (int i = 0; i < P; ++i) {
        int N;
        cin >> N;
        vector<int> passeio(N);
        for (int j = 0; j < N; ++j) {
            cin >> passeio[j];
        }

        bool valido = true;
        for (int j = 0; j < N - 1; ++j) {
            int atual = passeio[j];
            int proximo = passeio[j + 1];
            if (!temArestaDireta(atual, proximo)) {
                valido = false;
                break;
            }
        }

        if (valido) possiveis++;
    }

    cout << possiveis << endl;
    return 0;
}
