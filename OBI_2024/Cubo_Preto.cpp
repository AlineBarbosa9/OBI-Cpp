#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int total = N * N * N;
    int nenhum = 0,um = 0, dois = 0, tres = 0;

    um = 6 * ((N - 2)*(N - 2));
    dois = (((N - 2) * 4) * 2) + (4 * (N - 2));
    tres = 8;
    nenhum = total - um - dois - tres;

    cout << nenhum << endl;
    cout << um << endl;
    cout << dois << endl;
    cout << tres << endl;

    return 0;

}
