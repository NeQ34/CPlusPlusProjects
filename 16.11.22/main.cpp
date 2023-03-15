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
    /*int n,nieparzyste=0,rob=0;
    int n2;
    cout<<"Podaj licze:"<<endl;cin>>n;
    n2=n;
    while(n>0){
        rob+=n%10;
        n/=10;
        if(rob%2!=0){nieparzyste+=rob;}
        rob=0;
    }
    cout<<"Suma liczb nieparzystych liczby "<<n2<<" wynosi: "<<nieparzyste<<endl;*/
    //s+=rob%10; oddac do if
    cout<<"zad 12 w domu"<<endl;
    /*int n,n2,n3,rob=0,aktualna_liczba=0,liczba_cyfr=0,suma=0;
    cout<<"Podaj licze:"<<endl;cin>>n;
    n2=n;
    n3=n;
    while(n>0){
        while(n2>0){
            liczba_cyfr++;
            cout<<"liczba cyfr: "<<liczba_cyfr<<endl;
            n2/=10;
        }
        rob+=n%10;
        n/=10;
        aktualna_liczba+=rob;
        cout<<"liczba cyfr: "<<liczba_cyfr<<endl;
        aktualna_liczba*=pow(10,--liczba_cyfr);
        suma+=aktualna_liczba;
        cout<<"ak: "<<aktualna_liczba<<endl;
        rob=0;
        aktualna_liczba=0;
    }
    cout<<n3<<"->"<<suma<<endl;*/
    cout<<"zad 14 w domu"<<endl;//podobne do 9
    /*int n,rob=0,n3,potega=0,wynik=0;
    cout<<"Podaj liczbe w systemie dwojkowym: "<<endl;cin>>n;
    n3=n;
    while(n>0){
        rob+=n%10;
        n/=10;
        if(rob==1){wynik+=pow(2, potega);}
        rob=0;
        potega++;
    }
    cout<<n3<<"(2) = "<<wynik<<"(10)"<<endl;*/
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
    /*int n,rob,n2,ilosc;
    cout<<"Podaj liczbe: "<<endl;cin>>n;
    n2=n;
    while(n>0){
        rob+=n%10;
        n/=10;
        if(rob==1){ilosc++;}
        rob=0;
    }
    cout<<"W liczbie "<<n2<<" znajduje się "<<ilosc<<" jedynek"<<endl;*/
    cout<<"zad 18 w domu"<<endl;
    /*int n=0,n2,rob=0,max=0,ilosc=0;
    cout<<"Podaj liczbe: "<<endl;cin>>n;
    n2=n;
    while(n>0){
        rob+=n%10;
        if(rob>=max){max=rob;ilosc++;}
        n/=10;
        rob=0;
    }
    cout<<"Największa cyfra w liczbie "<<n2<<" to "<<max<<", występuje "<<ilosc<<" razy"<<endl;*/
    cout<<"zad 21"<<endl;
    /*int n;
    int rob=1;
    while(rob<n){
        if(n % rob==0){
            cout<<rob<<" jest dzielnikiem"<<endl;
            rob++;
        }
    }
    //2 wersja:
    while(rob<=sqrt(n)){
        if(n%rob==0){
            cout<<rob<<","<<n/rob<<"są"<<endl;
            rob++;
        }
    }*/
    return 0;
}