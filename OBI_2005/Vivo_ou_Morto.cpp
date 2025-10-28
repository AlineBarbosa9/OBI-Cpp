#include <iostream>
#include <vector>
using namespace std;

int main() {
    int P, R, cont = 0;

    while (true) {
        cin >> P >> R;
        if (P == 0 && R == 0) break;

        cont++;
        vector<int> fila(P);
        for (int i = 0; i < P; ++i) {
            cin >> fila[i];
        }

        for (int rodada = 0; rodada < R; ++rodada) {
            int N, J;
            cin >> N >> J;

            vector<int> acoes(N);
            for (int i = 0; i < N; ++i) {
                cin >> acoes[i];
            }

            vector<int> novaFila;
            for (int i = 0; i < N; ++i) {
                if (acoes[i] == J) {
                    novaFila.push_back(fila[i]);
                }
            }

            fila = novaFila;
        }

        cout << "Teste " << cont << endl;
        cout << fila[0] << endl;
        cout << endl;
    }

    return 0;
}
