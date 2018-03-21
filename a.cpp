#include <iostream>
#include <stdlib.h>
using namespace std;


float velocidade();
float velocidadei();
float tempo();
float posicaoi();

int main()
{
    setlocale(LC_ALL, "");
    int op;
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
    posicaoi();
}
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

float posicaoi()
{
    float s, s0, v0, a, t, v, r;
    cout<<"Achando a Posição\n\n";
    cout<<"Informe a velocidade inicial(v0): ";
    cin>>v0;
    cout<<"Informe a aceleração(a): ";
    cin>>a;
    cout<<"Informe o tempo(t): ";
    cin>>t;
    cout<<"Informe a posição inicial(S0): ";
    cin>>s0;
    cout<<"\nS=S0+V0*t+a*t²/2\n\n";
    cout<<"S="<<s0<<"+"<<v0<<"*"<<t<<"+"<<a<<"*"<<t<<"²"<<"/2\n";
    r=t*t;
    cout<<"S="<<s0<<"+"<<v0*t<<"+"<<a<<"*"<<r<<"/2\n";
    cout<<"S="<<s0<<"+"<<v0*t<<"+"<<a*r<<"/2\n";
    cout<<"S="<<s0+v0*t+a*r<<"/2\n";
    cout<<"S="<<s0+v0*t+a*r/2<<"\n";
    
}

