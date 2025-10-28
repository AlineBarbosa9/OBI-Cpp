#include <iostream>
#include <algorithm>

using namespace std;

int somaLinha(int n, int m, int Matriz[][101]) {
    int maiorSoma = -1;
    for (int i = 0; i < n; i++) {
        int soma_linha = 0;
        for (int j = 0; j < m; j++) {
            soma_linha += Matriz[i][j];
        }
        if (soma_linha > maiorSoma) {
            maiorSoma = soma_linha;
        }
    }
    return maiorSoma;
}

int somaColuna(int n, int m, int Matriz[][101]) {
    int maiorSoma = -1;
    for (int j = 0; j < m; j++) {
        int soma_coluna = 0;
        for (int i = 0; i < n; i++) {
            soma_coluna += Matriz[i][j];
        }
        if (soma_coluna > maiorSoma) {
            maiorSoma = soma_coluna;
        }
    }
    return maiorSoma;
}

int main() {
    int N, M;
    cin >> N >> M;
    int Matriz[101][101];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> Matriz[i][j];
        }
    }

    int maiorSomaLinha = somaLinha(N, M, Matriz);
    int maiorSomaColuna = somaColuna(N, M, Matriz);

    if (maiorSomaLinha > maiorSomaColuna) {
        cout << maiorSomaLinha << endl;
    } else {
        cout << maiorSomaColuna << endl;
    }

    return 0;
}
