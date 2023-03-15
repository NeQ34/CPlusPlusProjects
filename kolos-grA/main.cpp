#include <iostream>
#include "math.h"

using namespace std;
int main() {
    /*zad 1:
    float n;
    cout<<"Podaj liczbe:"<<endl;cin>>n;
    if(n<0 || n<1 && n>1 || n<3){
        cout<<n<<"C (-n;0)U(1;3)";
        cout<<"Wartosc: "<<(n*n)-2;
    }
    else if(n==1 || n>=3 && n<10){
        cout<<n<<" C {1} U [3;10)";
        cout<<"Wartosc: "<<sqrt(n+4);
    }
    else if(n>=10 || n>11){
        cout<<n<<" C [10;+n)";
        cout<<"Wartosc: "<<1/((2*n)-1);
    }*/
    /*zad 2:
    float x;
    int a,b;
    cout<<"Podaj liczby a b:"<<endl;cin>>a>>b;
    x = (float) ((2*a)+b+3)/(a-1-(4*b));
    cout<<"Wynik: "<<x;*/

    /*zad 3:
    int status;
    cout<<"Podaj status:"<<endl;cin>>status;
    switch(status){
        case 0:
            cout<<"Urzadzenie niegotowe";
            break;
        case 1:
            cout<<"Blad urzadzenia";
            break;
        case 2:
            cout<<"Operacja zakonczona pomyslnie";
            break;
        default:
            cout<<"Nierozpoznany blad";
            break;
    }*/
    /*zad 4:
    int n=0;
    cout<<"Podaj liczbe z przedzialu <0;100>:"<<endl;cin>>n;
    while(n<0 || n>100){
        cout<<n<<" nie nalezy do przedzialu <0;100>, podaj jeszcze raz:"<<endl;cin>>n;
    }*/
    cout<<"kolos 2:"<<endl;
    /*cout<<"zad 2:"<<endl;
    int x;
    cout<<"Podaj liczbe:"<<endl;cin>>x;
    if(x<0){cout<<"X wynosi: "<<0;}
    else if(x==0 && x<1){cout<<"X wynosi: "<<2*x;}
    else if(x>=1){cout<<"X wynosi: "<<(x*x)-(2*x)+3;}*/
    cout<<"zad 3"<<endl;
    /*int dt;
    cout<<"Podaj numer tygodnia:"<<endl;cin>>dt;
    switch(dt){
        case 0: cout<<"Nieczynne"<<endl; break;
        case 1: cout<<"Pn: 9-15"<<endl; break;
        case 2: cout<<"Wt: 9-17"<<endl; break;
        case 3: cout<<"śr: 10-18"<<endl; break;
        case 4: cout<<"Czw: 10-18"<<endl; break;
        case 5: cout<<"Pt: 10-18"<<endl; break;
        case 6: cout<<"Nieczynne"<<endl; break;
        default: cout<<"Błędne dane wejściowe"<<endl;
    }*/
    cout<<"zad 4:"<<endl;
    /*float m;
    cout<<"Podaj liczbę w m:"<<endl;cin>>m;
    if(m>0){
        cout<<m<<"m to "<<m*39.37<<"cali"<<endl;
    }*/
    cout<<"zad 5:"<<endl;
    /*int k;
    float cena=0;
    cout<<"Podaj ilość km:"<<endl;cin>>k;
    if(k>=0 && k<=10){cena=2;}
    else if(k>=11 && k<=30){cena=1+(k*0.10);}
    else if(k>30){cena=1+(k*0.08);}
    else{cena=-1;}
    cout<<"Cena za przejechanie "<<k<<"km wynosi: "<<cena<<"zl"<<endl;*/
    return 0;
}