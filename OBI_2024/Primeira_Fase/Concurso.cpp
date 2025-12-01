#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N,K;
    cin >> N >> K;
    vector <int> Vetor(N);
    for(int i = 0; i < N; i++){
        cin >> Vetor[i];
    }
    sort(Vetor.begin(),Vetor.end());
    reverse(Vetor.begin(),Vetor.end());
    cout << Vetor[K - 1] << endl;
    
    return 0;
}
