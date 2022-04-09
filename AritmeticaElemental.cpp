#include <bits/stdc++.h>

using namespace std;
int a,b,l,r, aux, n;
string pitor;
string potor;
int main()
{
    cin>>potor;
    cin>>pitor;
    n=max(potor.size(), pitor.size());
    reverse(potor.begin(), potor.end());
    reverse(pitor.begin(), pitor.end());
    pitor.resize(n);
    potor.resize(n);
    for(int i=0; i<n; i++){
        if (potor[i]=='\0')
            potor[i]='0';
        if (pitor[i]=='\0')
            pitor[i]='0';
        a=potor[i]-48;
        b=pitor[i]-48;
        aux=a+b+l;
        if(aux>=10){
            l=1;
            r++;
        }
        else
            l=0;
    }
    cout<<r;

    return 0;
}
