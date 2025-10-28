#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int calcularPontuacao(vector<int> cartas) {
    sort(cartas.begin(), cartas.end());

    // Regra 1: Sequência
    bool sequencia = true;
    for (int i = 0; i < 4; ++i) {
        if (cartas[i + 1] != cartas[i] + 1) {
            sequencia = false;
            break;
        }
    }
    if (sequencia) {
        return cartas[0] + 200;
    }

    map<int, int> counts;
    for (int carta : cartas) {
        counts[carta]++;
    }

    // Regra 2: Quadra
    for (auto const& [carta, count] : counts) {
        if (count == 4) {
            return carta + 180;
        }
    }

    // Regra 3: Trinca e Par (Full House)
    bool trinca = false;
    int valor_trinca = 0;
    bool par = false;
    int valor_par = 0;

    for (auto const& [carta, count] : counts) {
        if (count == 3) {
            trinca = true;
            valor_trinca = carta;
        } else if (count == 2) {
            par = true;
            valor_par = carta;
        }
    }
    if (trinca && par) {
        return valor_trinca + 160;
    }

    // Regra 4: Trinca
    if (trinca) {
        return valor_trinca + 140;
    }

    // Regra 5: Dois Pares
    int num_pares = 0;
    vector<int> valores_pares;
    for (auto const& [carta, count] : counts) {
        if (count == 2) {
            num_pares++;
            valores_pares.push_back(carta);
        }
    }
    if (num_pares == 2) {
        sort(valores_pares.rbegin(), valores_pares.rend());
        return 3 * valores_pares[0] + 2 * valores_pares[1] + 20;
    }

    // Regra 6: Um Par
    for (auto const& [carta, count] : counts) {
        if (count == 2) {
            return carta;
        }
    }

    // Regra 7: Todas distintas
    return 0;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        vector<int> cartas(5);
        for (int j = 0; j < 5; ++j) {
            cin >> cartas[j];
        }
        cout << "Teste " << i << endl;
        cout << calcularPontuacao(cartas) << endl;
        cout << endl;
    }
    return 0;
}
