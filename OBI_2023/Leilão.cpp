#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N,A,Maior = -1;
    vector <pair<int,string>> Lance;
    string S;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> S;
        cin >> A;
        if(A >Maior){
            Maior = A;
        }
        Lance.push_back({A,S});
    }
    for(int i = 0; i < N;i++){
        if (Lance[i].first == Maior){
            cout << Lance[i].second << endl;
            cout << Lance[i].first << endl;
            return 0;
        }
    }

    return 0;
}
