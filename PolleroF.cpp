#include <bits/stdc++.h>

using namespace std;
int n, k, arre[1000002], r;

int bs(int ini, int fin, int aux){
    if (ini==fin)
        return ini;
    int mitad=(ini+fin)/2+1;
    if (arre[mitad]+aux<=k)
        return bs(mitad, fin, aux);
    return bs(ini, mitad-1, aux);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>k;

    for(int i=0;i<n;i++){
        cin>>arre[i];
    }

    sort(arre, arre+n);

    for (int i=0; i<n-1; i++){
        int ul=bs(i, n-1, arre[i]);
        r+=ul-i;
    }

    cout << r;
    return 0;
}
