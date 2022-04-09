#include <bits/stdc++.h>

using namespace std;
int n;
bool cubeta[10000000];
int j, i;
int main()
{
    cin >> n;
    for (i=2; j<n ; i++){
        if (!cubeta[i]){
            j++;
            int aux=1;
            while(aux*i<9832717){
                cubeta[aux*i]=true;
                aux++;
            }
        }
    }
    cout << i-1;
    return 0;
}
