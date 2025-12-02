#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    int E,S,L;
    cin >> E >> S >> L;

    int total = abs(E - S) + abs(E - L) + abs(S - L);
    cout << total;

    return 0;
}
