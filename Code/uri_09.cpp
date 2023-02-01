#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,i,j,min;
    cin>>N;
    int X[N];
    for(i=0;i<N;i++)
        {
            cin>>X[i];
        }
    min=X[0];
    for(i=1;i<N;i++)
    {
        if(min>X[i])
        {
            min=X[i];
            j=i;
        }
    }
    cout<<"Menor valor: "<<min<<endl<<"Posicao: "<<j<<endl;
    return 0;
}
