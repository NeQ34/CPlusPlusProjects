#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    //petla while
    cout<<"zad 8"<<endl;
    /*int n;
    cout<<"Podaj liczbe calkowitą"<<endl;cin>>n;
    int rob = abs(n);
    int s=0;
    while(rob>0){
        cout<<"rob: "<<rob<<endl;
        s+=rob%10;
        rob/=10;
    }
    cout<<"Suma cyfr liczby "<<n<<" wynosi: "<<s<<endl;*/
    cout<<"zad 9"<<endl;
    /*int n;
    cout<<"Podaj liczbe naturalną"<<endl;cin>>n;
    int rob = abs(n);
    long long s=0;
    while(rob>0){
        rob/=10;
        s++;
        cout<<"rob: "<<rob<<endl;
    }
    cout<<"Suma cyfr "<<s<<endl;*/
    cout<<"zad 10"<<endl;
    /*int n,s,g;
    cout<<"Podaj liczbe calkowita dodatnia:"<<endl;cin>>n;
    while(n/10>0){
        s=0;
        g=n;
        while(n>0){
            s+=n%10;
            n/=10;
        }
        cout<<"Suma cyfr liczby "<<g<<" wynosi "<<s<<endl;
        n=s;
    }*/
    cout<<"zad 11 w domu"<<endl;
    /*int n,s=0;
    cout<<"Podaj liczbę "<<endl;cin>>n;
    int rob = abs(n);
    while(rob>0){
        if((rob%10)%2!=0){
            s+=rob%10;
            cout<<"s: "<<s<<endl;
        }
        rob/=10;
    }
    cout<<"Suma liczby nieparzystych liczby "<<rob<<" wynosi"<<s<<endl;*/
    cout<<"zad 12 w domu"<<endl;
    int n;
    int s=0;
    int cyfry=0;
    cout<<"Podaj liczbe: "<<endl;cin>>n;
    int rob = abs(n);
    while(rob>0){
        cout<<"rob: "<<rob<<endl;
        s+=rob%10;
        rob/=10;
        cyfry++;
    }
    cout<<"suma cyfr liczby "<<rob<<" wynosi: "<<cyfry<<endl;
    cout<<"zad 14 w domu"<<endl;//podobne do 9
    cout<<"zad 15"<<endl;
    /*int n;
    cout<<"Podaj liczbe calkowitą"<<endl;cin>>n;
    int rob = abs(n);
    int s=1;
    while(rob>0) {
        if (rob%10!=0) {
            s*=(rob%10);
            rob/=10;
        }
    }
    cout<<"Iloczyn cyfr liczby "<<n<<" wynosi: "<<s<<endl;*/
    cout<<"zad 16 w domu"<<endl;
    cout<<"zad 18 w domu"<<endl;
    cout<<"zad 21"<<endl;
    /*int n;
    int rob=1;
    while(rob<n){
        if(n % rob==0){
            cout<<rob<<" jest dzielnikiem"<<endl;
            rob++;
        }
    }*/
    //2 wersja:
    /*while(rob<=sqrt(n)){
        if(n % rob==0){
            cout<<rob<<","<<n/rob<<"są"<<endl;
            rob++;
        }
    }*/
    return 0;
}