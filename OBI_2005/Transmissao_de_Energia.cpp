#include <cstdio>
#include <vector>
using namespace std;

#define MAXN 50050

int n,m;
int componente[MAXN];
vector <int> lista[MAXN];

void dfs(int x){
    for(int i = 0; i < (int)lista[x].size();i++){
        int v = lista[x][i];
        if(componente[v] == -1){
            componente[v] = componente[x];
            dfs(v);
        }
    }
}

int main(){
    int cont = 0;

    while(true){
        scanf("%d %d",&n,&m);
        if(n == 0 && m == 0){
            break;
        }
        cont++;
        for(int i = 1; i <= n; i++)
        componente[i] = -1;

        for(int i = 1; i <= m;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        lista[a].push_back(b);
        lista[b].push_back(a);  
        }
    int numero_componentes = 0;
        for(int i = 1; i <=n; i++){
        if(componente[i] == -1){
            numero_componentes++;
            componente[i] = numero_componentes;
            dfs(i);
        }
    }
    printf("Teste %d\n",cont);
    if(numero_componentes == 1){
        printf("normal\n\n");
    }else{
        printf("falha\n\n");
    }
        for(int i = 1; i <= m; i++){
            lista[i].clear();
        } 
    }
    return 0;
}
