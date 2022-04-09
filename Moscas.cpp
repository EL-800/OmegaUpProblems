#include <bits/stdc++.h>

using namespace std;
int n, arre[60002], maxi;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin >> n;
    int na, mu;
    for (int i=0; i<n; i++){
        cin >> na >> mu;
        arre[na]++;
        arre[mu]--;
    }
    int act=0;
    for (int i=1; i<=60000; i++){
        act+=arre[i];
        maxi=max(act, maxi);
    }
    cout << maxi<<"\n";
    act=0;
    bool rango=false;
    for (int i=1; i<=60000; i++){
        act+=arre[i];
        if (act==maxi && !rango){
            cout << i<<" ";
            rango=true;
        }
        if (act!=maxi && rango){
            cout <<i<<"\n";
            rango=false;
        }
    }
    return 0;
}
