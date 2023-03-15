#include <iostream>
#include <windows.h>

using namespace std;
int main() {
    //petla for
    SetConsoleOutputCP(CP_UTF8);
    cout<<"Zad 31:"<<endl;
    /*int n;
    do{
        cout<<"Podaj liczbę dodatnią n:"<<endl;cin>>n;
    }while(n<=0);
    for(int k=1; k<=n;k++){
        cout<<k*k<<endl;
    }*/
    cout<<"Zad 32:"<<endl;
    /*int n;
    int silnia=1;
    do{
        cout<<"Podaj liczbę dodatnią n:"<<endl;cin>>n;
    }while(n<=0);
    for(int k=1; k<=n;k++){
        silnia*=k;
    }
    cout<<silnia<<endl;*/
    cout<<"Zad 33 w domu"<<endl;
    /*int ilosc;
    float suma=0,n;
    cout<<"Ile chcesz liczb?: "<<endl;cin>>ilosc;
    for(int i=1; i<=ilosc; i++){
        cout<<"Podaj "<<i<<" liczbe:"<<endl;cin>>n;
        float odwroconaLiczba = 1/n;
        suma+=odwroconaLiczba;
    }
    cout<<"Suma odwróconych liczb: "<<suma<<endl;*/
    cout<<"Zad 35:"<<endl;
    /*int n;
    int suma=0;
    do{
        cout<<"Podaj liczbę dodatnią n:"<<endl;cin>>n;
    }while(n<=0);
    for(int k=1; k<=n;k++){
        suma+=2*k;
    }
    cout<<"Suma liczb "<<n<<" parzystych liczb dodatnich wynosi: "<<suma;*/
    cout<<"zad 36 w domu"<<endl;
    /*int n,suma;
    cout<<"Podaj ilość liczb: "<<endl;cin>>n;
    for(int i=1; i<=n; i++){
        if(i%2!=0){suma+=i;}
    }
    cout<<"Suma liczb nieparzystych do liczby "<<n<<" wynosi: "<<suma<<endl;*/
    //suma+=2*k-1; xD i tyle
    cout<<"zad 38 w domu"<<endl;
    /*int n,suma;
    cout<<"Podaj ilość liczb: "<<endl;cin>>n;
    for(int i=1; i<=n; i++){
        if(i%7==0){suma+=i;}
    }
    cout<<"Suma liczb podzielnych przez 7 do liczby "<<n<<" wynosi: "<<suma<<endl;*/
    /*int n;
    int suma=0;
    do{
        cout<<"Podaj liczbę dodatnią n:"<<endl;cin>>n;
    }while(n<=0);
    for(int k=1; k<=n;k++){
        suma+=7*k;
    }
    cout<<"Suma liczb "<<n<<" parzystych liczb dodatnich wynosi: "<<suma;*/
    cout<<"zad 40"<<endl;
    /*int n,l2,l3,l9;
    int suma=0;
    do{
        cout<<"Podaj liczbę dodatnią n:"<<endl;cin>>n;
    }while(n<=0);
    for(int k=1; k<=n; k++){
        if(k%3==0){
            l2+=n/3;
            l3+=n/3;
            l9+=n/3;
        }else if(n%3==1){
            l2+=n/3+1;
            l3+=n/3;
            l9+=n/3;
        }else{
            l2+=n/3+1;
            l3+=n/3+1;
            l9+=n/3;
        }
    }*/
    cout<<"zad 41 w domu"<<endl;
    int n,rob,suma;
    cout<<"Podaj ilość liczb:"<<endl;cin>>n;
    for(int i=0; i<=n; i++){
        rob=i%10;
        if(rob==1||rob==5||rob==11||rob==37) {
            suma+=i;
            cout<<"i "<<i<< endl;
        }
    }
    cout<<"Suma liczb wynosi: "<<suma<<endl;
    return 0;
}
