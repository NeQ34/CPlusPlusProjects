#include <iostream>
#include <Windows.h>
using namespace std;
void f(int a, int &b);
int zerujRowne(int n,int tc[],int a){
    int ilr=0;
    for(int i=0; i<n; i++){
        if(tc[i]==a){
            tc[i]==0;
            ilr++;
        }
    }
    return ilr;
}
int ileDzielnikow(int k){
    k=abs(k);
    int ildz=0;
    for(int i=1; i<=k; i++){
        if(k%i==0){
            ildz++;
        }
    }
    return ildz;
}
void funkcja(int &a, int b){
    if(a%2==0){
        a=a+2;
    }else{
        a=a-2;
    }
    b=b*2;
    cout<<a<<" "<<b<<" ";
}
int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout<<"Pętle w pętli"<<endl;
    cout<<"Zad 1:"<<endl;
//    int liczba;
//    cout<<"Podaj liczbę całkowitą dodatnią:"<<endl;
//    cin>>liczba;
//    while(liczba<0){
//        cout<<"Wprowadź jeszcze raz liczbę: ";cin>>liczba;
//    }
//    cout<<"Poprawnie wprowadziłeś liczbę "<<liczba<<endl;
    cout<<"Zad 2:"<<endl;
//    int a;
//    do{
//        cout<<"Podaj dodatnią liczbę boku kwadratu a:";cin>>a;
//    }while(a<0);
//    cout<<"Pole kwadratu wynosi: "<<a*a<<endl;
    cout<<"Zad 8:"<<endl;
//    int l,rob,lc;
//    cout<<"Podaj liczbę całkowitą:"<<endl;
//    cin>>l;
//    lc=l;
//    while(l>0){
//        rob+=l%10;
//        l/=10;
//    }
//    cout<<"Suma liczb liczby "<<lc<<" wynosi: "<<rob<<endl;
    cout<<"Zad 50:"<<endl;
//    int h;
//    cout<<"Podaj wysokość: ";cin>>h;
//    cout<<endl;
//    for(int i=1; i<=h; i++){
//        for(int j=1; j<=i; j++){
//            cout<<i*j<<" ";
//        }
//        cout<<endl;
//    }
    cout<<"Zad 49:"<<endl;
//    int a;
//    cout<<"Podaj bok kwadratu:";cin>>a;
//    for(int i=0; i<a; i++){
//        for(int j=0; j<a; j++){
//            cout<<"K ";
//        }
//        cout<<endl;
//    }
    cout<<"Pytanie 1:"<<endl;
//    const int a=3,b=6;
//    for(int i=1; i<=a; i++){
//        for(int j=1; j<=b; j++){
//            cout<<i;
//        }
//        cout<<endl;
//    }
    cout<<"Pytanie z tablicami:"<<endl;
//    int tab[6];
//    for(int i=0; i<6; i++){
//        tab[i]=3*i;
//    }
//    for(int i=0; i<6; i++){
//        cout<<tab[i]<<", ";
//    }
    cout<<"Pytanie z funkcją f"<<endl;
    //2 poprawne odpowiedzi
//    int a,b;
//    f(a,b);
//
//    int z;
//    f(1,z);

    cout<<"Pytanie 3"<<endl;
//    int sum=0;
//    for(int k=12; k<=100; k+=4){
//        sum+=k;
//    }
//    cout<<"Suma = "<<sum<<endl;
    cout<<"Pytanie 4:"<<endl;
//    int t[4];
//    for(int i=0; i<4; i++){
//        t[i]=i*2;
//    }
//    for(int i=0; i<4; i++){
//        cout<<t[i]<<",";
//    }
    cout<<"Pytanie 5:"<<endl;
//    int tab[5]={4,6,4,6,8};
//    cout<<zerujRowne(5,tab, 6);
    cout<<"switch:"<<endl;
    int dz;
    do{
        cout<<"Podaj numer dnia:"<<endl;
        cin>>dz;
    }while(!(dz>=1 and dz<=7));
    switch(dz){
        case 7:
        case 6:
            cout<<"weekend";
            break;
        default:cout<<"dzień roboczy";
    }
//    cout<<"suma liczb co 3 do 99"<<endl;
//    int sum=0;
//    for(int j=3; j<100; j+=3){
//        sum+=j;
//    }
//    cout<<"suma "<<sum<<endl;
    cout<<"Zadanie z funkcją ileDzielnikow:"<<endl;
    //cout<<ileDzielnikow(6);
    cout<<"Pytanie 6:"<<endl;
    //A - gdy x dzieli się przez 3 ale nie przez 2
    //B - gdy x dzieli się przez 3 i przez 2
    //C - gdy x nie dzieli się przez 3 i nie dzieli się przez 2
    //D - gdy x nie dzieli się przez 3 i dzieli się przez 2

    //A=s3
    //B=s2
    //C=s1
    //D=s4
    cout<<"Pytanie 8:"<<endl;
//    int c=4;
//    int d=5;
//    funkcja(c,d);
//    cout<<c<<" "<<d<<endl;
    //6 10 6 5
    return 0;
}
