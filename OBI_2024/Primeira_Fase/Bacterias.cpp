#include <iostream>
using namespace std;

int main() {
    long long N, P;
    cin >> N >> P;

    int dias = 0;
    long long bact = 1;

    while (bact <= N) {
        dias++;
        bact *= P;
    }

    // O último dia extrapolou a capacidade, então subtraímos 1
    cout << dias - 1 << endl;
    return 0;
}
