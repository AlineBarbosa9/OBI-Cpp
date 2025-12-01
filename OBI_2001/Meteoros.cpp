#include <iostream>
using namespace std;

int main() {
    int X1, Y1, X2, Y2, N, X, Y, teste = 1;
    while (true) {
        cin >> X1 >> Y1 >> X2 >> Y2;
        if (X1 == 0 && Y1 == 0 && X2 == 0 && Y2 == 0) break;

        int cont = 0;
        cin >> N;
        for (int i = 0; i < N; ++i) {
            cin >> X >> Y;
            if (X >= X1 && X <= X2 && Y >= Y2 && Y <= Y1) {
                cont++;
            }
        }

        cout << "Teste " << teste++ << endl;
        cout << cont << endl;
        cout << endl;
    }
    return 0;
}
