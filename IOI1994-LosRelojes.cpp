#include <bits/stdc++.h>

using namespace std;
struct nodo{
    short act[9];
    string cam;
}ini;
queue<nodo>cola;
bool vis[4][4][4][4][4][4][4][4][4];
short movs[9][9]={1, 1, 0, 1, 1, 0, 0, 0, 0,
                  1, 1, 1, 0, 0, 0, 0, 0, 0,
                  0, 1, 1, 0, 1, 1, 0, 0, 0,
                  1, 0, 0, 1, 0, 0, 1, 0, 0,
                  0, 1, 0, 1, 1, 1, 0, 1, 0,
                  0, 0, 1, 0, 0, 1, 0, 0, 1,
                  0, 0, 0, 1, 1, 0, 1, 1, 0,
                  0, 0, 0, 0, 0, 0, 1, 1, 1,
                  0, 0, 0, 0, 1, 1, 0, 1, 1};
bool comp(nodo padre){
    for (int i=0; i<9; i++){
        if (padre.act[i]!=3)
            return false;
    }
    return true;
}
bool estoy(nodo a){
    return vis[a.act[0]][a.act[1]][a.act[2]][a.act[3]][a.act[4]][a.act[5]][a.act[6]][a.act[7]][a.act[8]];
}
void esta(nodo a){
    vis[a.act[0]][a.act[1]][a.act[2]][a.act[3]][a.act[4]][a.act[5]][a.act[6]][a.act[7]][a.act[8]]=true;
}
int main()
{
    for (int i=0; i<9; i++){
        cin >> ini.act[i];
        ini.act[i]/=3;
        ini.act[i]--;
    }
    cola.push(ini);
    while(!cola.empty()){
        nodo padre, hijo;
        padre=cola.front();
        cola.pop();
        if (comp(padre)){
            int N=padre.cam.size();
            for (int i=0; i<N; i++){
                cout << padre.cam[i]<<" ";
            }
            return 0;
        }
        for (int i=0; i<9; i++){
            hijo=padre;
            for (int j=0; j<9; j++){
                hijo.act[j]+=movs[i][j];
                hijo.act[j]%=4;
            }
            hijo.cam+=char(i+1+'0');
            if (!estoy(hijo)){
                esta(hijo);
                cola.push(hijo);
            }
        }
    }
    return 0;
}
