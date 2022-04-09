#include <bits/stdc++.h>

using namespace std;

int n, res;

void exahustiva (int act, int nivel){
    if (nivel > n){
        return;
    }
    if (act > 21){
        return;
    }
    if (act == 21 && nivel == n){
        res++;
        return;
    }
    for (int i=0; i<10; i++){
        exahustiva(act+i, nivel+1);
    }
}

int main()
{
    cin >> n;
    exahustiva(0, 0);
    cout << res;
    return 0;
}
