#include <iostream>
using namespace std;

bool LiczbyPitagorejskie(int a, int b, int c){
    if((a*a)+(b*b)==(c*c)) return true;
    else return false;
}
int potega(int n, int p){
    int suma=1;
    for(int i=0; i<p; i++){
        suma*=n;
    }
    return suma;
}

int main() {
    cout<<"zad 17"<<endl;
    int a,b,c;
    cout<<"Podaj 3 liczby"<<endl;
    cin>>a>>b>>c;
    if(LiczbyPitagorejskie(a,b,c))cout<<"Te liczby spelniaja warunek"<<endl;
    else cout<<"Te liczby nie spelniaja warunku"<<endl;

    cout<<"f zad 6 w domu"<<endl;
    float n,p;
    cout<<"Wprowadź liczbę i jej potęgę:"<<endl;cin>>n>>p;
    cout<<n<<"^"<<p<<"="<<potega(n,p);

    return 0;
}
