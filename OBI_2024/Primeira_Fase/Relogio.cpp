#include <iostream>

using namespace std;

int main(){
    long long int H, M, S, T;
    cin >> H >> M >> S >> T;

    // Soma T segundos aos segundos atuais
    S += T;

    // Ajusta minutos e segundos
    M += S / 60;
    S = S % 60;

    // Ajusta horas e minutos
    H += M / 60;
    M = M % 60;

    // Ajusta horas para formato 24h
    H = H % 24;

    cout << H << endl;
    cout << M << endl;
    cout << S << endl;

    return 0;
}
