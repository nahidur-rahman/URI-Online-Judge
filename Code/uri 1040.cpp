#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b,c,d,e,f,g;
    cin>>a>>b>>c>>d;
    e=((a*2)+(b*3)+(c*4)+d)/10;
    if(e>=7.0)
        cout<<fixed<<setprecision(1)<<"Media: "<<e<<endl<<"Aluno aprovado."<<endl;
    else if(e<5.0)
        cout<<fixed<<setprecision(1)<<"Media: "<<e<<endl<<"Aluno reprovado."<<endl;
    else if(e>=5.0&&e<=6.9)
    {
        cout<<fixed<<setprecision(1)<<"Media: "<<e<<endl<<"Aluno em exame."<<endl;
        cin>>f;
        cout<<fixed<<setprecision(1)<<"Nota do exame: "<<f<<endl;
        g=(e+f)/2;
        if(g>=5.0)
            cout<<"Aluno aprovado."<<endl;
        else if(g<=4.9)
            cout<<"Aluno reprovado."<<endl;
        cout<<"Media final: "<<g<<endl;
    }
    return 0;
}
