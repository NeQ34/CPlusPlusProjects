#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
float max2(float a, float b){
    if(a>b)return a;
    else return b;
}
float max3(float a, float b, float c){
    return max2(max2(a,b),c);
}
float Liczby(float a, float b, float c){
    if(c=max3(a,b,c)){
        return c*c==a*a+b*b;
    }else if(b=max3(a,b,c)){
        return b*b==a*a+c*c;
    }else if(a=max3(a,b,c)){
        return a*a==b*b+c*c;
    }
}
float poleIObwod(float a, float b, float c, float &obw){
    float w=(a+b+c)/2;
    obw = 2*w;
    return sqrt(w*(w-a)*(w-b)*(w-c));
}
void zamien(int &a, int &b){
    float tmp;
    tmp=a;
    a=b;
    b=tmp;
}
int silnia(int n){
    int silnia=1;
    if(n==0){return 1;}
    else{
        for(int i=1; i<=n; i++) {
            silnia*=i;
        }
    }
    return silnia;
}
int licz_cyfry(int n, int &s){
    int l=0;
    s=0;
    do{
        l+=1;
        s+=n%10;
        n/=10;
    }while(n%10!=0);
    return l;
}
int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout<<"Zad 5"<<endl;
    /*int n,s;
    cout<<"Podaj liczbe całkowitą:";cin>>n;
    cout<<"Liczba cyfr: "<<licz_cyfry(n,s)<<endl;
    cout<<"Suma cyfr: "<<s;*/
    cout<<"Zad 6 w domu"<<endl;
    cout<<"Zad 7"<<endl;
    /*int n;
    cout<<"Podaj silnię"<<endl;cin>>n;
    cout<<n<<"!"<<" wynosi: "<<silnia(n);*/
    cout<<"Zad 8 dla chętnych"<<endl;

    cout<<"Zad 9"<<endl;
    /*int x,y;
    cout<<"Podaj 2 liczby: ";cin>>x>>y;
    zamien(x,y);
    cout<<x<<" "<<y;*/

    cout<<"Zad 10"<<endl;
    /*float a,b,c,obw;
    cout<<"Podaj a b c: "<<endl;cin>>a>>b>>c;
    poleIObwod(a,b,c,obw);
    cout<<"Obwód: "<<obw<<endl;
    cout<<"Pole: "<<poleIObwod(a,b,c,obw)<<endl;*/
    cout<<"Zad 15"<<endl;
    //float a,b,c;
    //cout<<"Podaj 2 liczby: ";cin>>a>>b;
    //cout<<max2(a,b);
    //cout<<"Podaj 3 liczby: ";cin>>a>>b>>c;
    //cout<<max3(a,b,c);
    cout<<"Zad 17"<<endl;

    return 0;
}
