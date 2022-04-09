#include <bits/stdc++.h>

using namespace std;
int n, e, t, res;
vector<int>grafo[102];
int vis[102];
int bfs(int act){
    queue<int>cola;
    vis[act]=1;
    cola.push(act);
    while (!cola.empty()){
        int pa=cola.front();
        cola.pop();
        if (pa==n){
            return vis[pa];
        }
        int N=grafo[pa].size();
        for (int i=0; i<N; i++){
            int hijo=grafo[pa][i];
            if (vis[hijo]==0){
                vis[hijo]=vis[pa]+1;
                cola.push(hijo);
            }
        }
    }
}
void limpia(){
    for (int i=1; i<=100; i++){
        vis[i]=0;
    }
}
int main()
{
    cin >> n >> e >> t;
    int de, a;
    for (int i=0; i<e; i++){
        cin >> de >> a;
        grafo[de].push_back(a);
        grafo[a].push_back(de);
    }
    for (int i=1; i<n; i++){
        if (bfs(i)<=t)
            res++;
        limpia();
    }
    cout << res;
    return 0;
}
