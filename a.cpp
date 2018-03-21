#include <iostream>
#include <stdlib.h>
using namespace std;


float velocidade();
float velocidadei();
float tempo();
int main()
{
    setlocale(LC_ALL, "");
    int op;
 cout<< "DIGITE O NUMERO CORRESPONDENTE AO QUE PRECISSA:\n";
 cout<< "1: Velocidade\n2: Velocidade Inicial\n3: Tempo\n4: Posição inicial\n5: Posição final\n6: Delta S\n";
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
