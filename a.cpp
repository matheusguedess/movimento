#include <iostream>
#include <stdlib.h>
using namespace std;

float velocidade();
float velocidadei();
float tempo();
float posicao();
float posicaoi();
float deltas();

int main()
{
    setlocale(LC_ALL, "");
    int op, op2;
do{
    system("cls");
 cout<< "DIGITE O NUMERO CORRESPONDENTE AO QUE PRECISSA:\n";
 cout<< "1: Velocidade\n2: Velocidade Inicial\n3: Tempo\n4: Posição\n5: Posição inicial\n6: Delta S\n";
 cin>>op;
 system("cls");
 switch(op)
 {
 case 1:
    velocidade();
    break;

 case 2:
    velocidadei();
    break;
 case 3:
    tempo();
    break;
 case 4:
    posicao();
    break;
 case 5:
    posicaoi();
    break;
 case 6:
    deltas();
    break;
 default:
    cout<<"\t    Operação invalida!\n\n\n";
    system("pause");
    return main();
}
cout<<"Deseja achar outro elemento?\n1: Sim  ||  2: Não\n";
cin>>op2;
}while(op2==1);
cout<<"\n\n   ----created by Matheus Guedes----\n\n";
system("pause");
}

float velocidade()
{
    float v0, a, t, v;
    cout<<"Achando a velocidade\n\n";
    cout<<"Informe o tempo(t): ";
    cin>>t;
    cout<<"Informe a aceleração(a): ";
    cin>>a;
    cout<<"Informe a velocidade inicial(v0): ";
    cin>>v0;
    cout<<"\nV=V0+a*t\n";
    cout<<"\nV="<<v0<<"+"<<a<<"*"<<t;
    cout<<"\nV="<<v0<<"+"<<a*t;
    cout<<"\nV="<<v0+a*t<<"\n\n";
}

float velocidadei()
{
    float v0, a, t, v, r;
    cout<<"Achando a velocidade Inicial\n\n";
    cout<<"Informe o tempo(t): ";
    cin>>t;
    cout<<"Informe a aceleração(a): ";
    cin>>a;
    cout<<"Informe a velocidade(V): ";
    cin>>v;
    cout<<"\nV=V0+a*t\n\n";
    cout<<v<<"="<<"v0"<<"+"<<a<<"*"<<t<<"\n";
    r=a*t;
    cout<<v<<"="<<r<<"v0\n";
    if(r>=0){
        cout<<v<<"-"<<r<<"=v0\n";
        cout<<v-r<<"=v0\n";
        cout<<"v0="<<v-r<<"\n\n";
    }
    else
    {
        cout<<v<<"+"<<r<<"=v0\n";
        cout<<v+r<<"=v0\n";
        cout<<"v0="<<v+r<<"\n\n";
    }
}

float tempo()
{
        float v0, a, t, v, r;
    cout<<"Achando o tempo\n\n";
    cout<<"Informe a velocidade inicial(v0): ";
    cin>>v0;
    cout<<"Informe a aceleração(a): ";
    cin>>a;
    cout<<"Informe a velocidade(V): ";
    cin>>v;
    cout<<"\nV=V0+a*t\n\n";
    cout<<v<<"="<<v0<<"+"<<a<<"*t\n";
    if(v0>=0){
        cout<<v<<"-"<<v0<<"="<<a<<"t\n";
        cout<<v-v0<<"="<<a<<"t\n";
        cout<<"t="<<v-v0<<"/"<<a<<"\n";
        cout<<"t="<<(v-v0)/a;
    }
    else
    {
        v0=-v0;
        cout<<v<<"+"<<v0<<"="<<a<<"t\n";
        cout<<v+v0<<"="<<a<<"t\n";
        cout<<"t="<<v+v0<<"/"<<a<<"\n";
        cout<<"t="<<(v+v0)/a;
    }
}

float posicao()
{
    float s0, v0, a, t, v, r;
    cout<<"Achando a Posição\n\n";
    cout<<"Informe a posição Inicial(S0): ";
    cin>>s0;
    cout<<"Informe a velocidade inicial(v0): ";
    cin>>v0;
    cout<<"Informe o tempo(t): ";
    cin>>t;
    cout<<"Informe a aceleração(a): ";
    cin>>a;
    cout<<"\nS=S0+V0*t+a*t²/2\n\n";
    cout<<"S="<<s0<<"+"<<v0<<"*"<<t<<"+"<<a<<"*"<<t<<"²"<<"/2\n";
    r=t*t;
    cout<<"S="<<s0<<"+"<<v0*t<<"+"<<a<<"*"<<r<<"/2\n";
    cout<<"S="<<s0+(v0*t)<<"+"<<(a*r)<<"/2\n";
    cout<<"S="<<s0+(v0*t)<<"+"<<(a*r)/2<<"\n";
    cout<<"S="<<s0+(v0*t)+((a*r)/2)<<"\n";
}

float posicaoi()
{
    float s, v0, a, t, v, r, r2;
    cout<<"Achando a Posição Inicial\n\n";
    cout<<"Informe a posição(S): ";
    cin>>s;
    cout<<"Informe a velocidade inicial(v0): ";
    cin>>v0;
    cout<<"Informe o tempo(t): ";
    cin>>t;
    cout<<"Informe a aceleração(a): ";
    cin>>a;
    cout<<"\nS=S0+V0*t+a*t²/2\n\n";
    cout<<s<<"=s0+"<<v0<<"*"<<t<<"+"<<a<<"*"<<t<<"²"<<"/2\n";
    r=t*t;
    cout<<s<<"=s0+"<<v0*t<<"+"<<a<<"*"<<r<<"/2\n";
    cout<<s<<"=s0+"<<(v0*t)<<"+"<<(a*r)<<"/2\n";
    cout<<s<<"=s0+"<<(v0*t)<<"+"<<(a*r)/2<<"\n";
    cout<<s<<"=s0+"<<(v0*t)+((a*r)/2)<<"\n";
    r2=(v0*t)+((a*r)/2);
    if(r2>=0){
        cout<<s<<"-"<<r2<<"=s0\n";
        cout<<s-r2<<"=s0\n";
        cout<<"s0="<<s-r2<<"\n";
    }
    else
    {
        r2=-r2;
        cout<<s<<"+"<<r2<<"=s0\n";
        cout<<s+r2<<"=s0\n";
        cout<<"s0="<<s+r2<<"\n";
    }
    }

float deltas()
{
    float v, v0, a, r, r2;
    cout<<"Achando o Delta S\n\n";
    cout<<"Informe a velocidade(v): ";
    cin>>v;
    cout<<"Informe a velocidade inicial(v0): ";
    cin>>v0;
    cout<<"Informe a aceleração(a): ";
    cin>>a;
    cout<<"\nV²=V0²+2*a*DeltaS\n\n";
    cout<<v<<"²="<<v0<<"²+2*"<<a<<"*DeltaS\n";
    cout<<v*v<<"="<<v0*v0<<"+"<<2*a<<"*DeltaS\n";
    r=v0*v0;
    if(r>=0){
        cout<<v*v<<"-"<<r<<"="<<2*a<<"*DeltaS\n";
        cout<<(v*v)-r<<"="<<2*a<<"*DeltaS\n";
        r2=2*a;
        cout<<(v*v)-r<<"/"<<r2<<"=DeltaS\n";
        cout<<((v*v)-r)/r2<<"=DeltaS\n";
        cout<<"DeltaS="<<((v*v)-r)/r2<<"\n";
    }
    else
    {
        r=-r;
        cout<<v*v<<"+"<<r<<"="<<2*a<<"*DeltaS\n";
        cout<<(v*v)+r<<"="<<2*a<<"*DeltaS\n";
        r2=2*a;
        cout<<(v*v)+r<<"/"<<r2<<"=DeltaS\n";
        cout<<((v*v)+r)/r2<<"=DeltaS\n";
        cout<<"DeltaS="<<((v*v)+r)/r2<<"\n";
    }
    }
