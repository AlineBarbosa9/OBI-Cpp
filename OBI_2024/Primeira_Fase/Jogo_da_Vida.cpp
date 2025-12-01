#include <iostream>
#include <string>
using namespace std;

const int MAX = 51;

void JogoDaVida(int q, int n, int Matriz[][MAX]) {
    int Vec1[8] = {-1,-1,-1,0,0,1,1,1};
    int Vec2[8] = {-1,0,1,-1,1,-1,0,1};
    int Aux[MAX][MAX];

    for (int a = 0; a < q; a++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int vivos = 0;
                for (int k = 0; k < 8; k++) {
                    int ni = i + Vec1[k];
                    int nj = j + Vec2[k];
                    if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                        if (Matriz[ni][nj] == 1)
                            vivos++;
                    }
                }
                if (Matriz[i][j] == 1) {
                    Aux[i][j] = (vivos < 2 || vivos > 3) ? 0 : 1;
                } else {
                    Aux[i][j] = (vivos == 3) ? 1 : 0;
                }
            }
        }

        // Atualiza a matriz original
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                Matriz[i][j] = Aux[i][j];
    }
}

int main() {
    int N, Q;
    cin >> N >> Q;

    int Matriz[MAX][MAX];
    string linha;

    for (int i = 0; i < N; i++) {
        cin >> linha;
        for (int j = 0; j < N; j++) {
            Matriz[i][j] = linha[j] - '0';
        }
    }

    JogoDaVida(Q, N, Matriz);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << Matriz[i][j];
        }
        cout << endl;
    }

    return 0;
}
