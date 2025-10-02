#include <iostream>
using namespace std;

#define MAX 100000

int Seq[MAX], Sub[MAX];
int A, B;

bool Nsei(int iSeq, int iSub) {
    if (iSub == B) return true;        // Toda a subsequência foi encontrada
    if (iSeq == A) return false;       // A sequência acabou antes

    if (Seq[iSeq] == Sub[iSub]) {
        return Nsei(iSeq + 1, iSub + 1);  // Avança os dois se forem iguais
    } else {
        return Nsei(iSeq + 1, iSub);      // Avança só na sequência
    }
}

int main() {
    cin >> A >> B;
    for (int i = 0; i < A; i++) {
        cin >> Seq[i];
    }
    for (int i = 0; i < B; i++) {
        cin >> Sub[i];
    }

    if (Nsei(0, 0)) {
        cout << "S";
    } else {
        cout << "N";
    }

    return 0;
}
