#include <bits/stdc++.h>

using namespace std;
int n, cubeta[1050000], act;
long long res;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin >> n;
    int aux;
    cubeta[0]=1;
    for (int i=0; i<n; i++){
        cin >> aux;
        act^=aux;
        res+=cubeta[act];
        cubeta[act]++;
    }
    cout << res;
    return 0;
}
