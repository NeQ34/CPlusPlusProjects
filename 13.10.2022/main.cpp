//13.10.2022-wprowadzenie do c++
#include <iostream>
using namespace std;//nie musimy wszedzie pisac std::itd.
int main() {
    cout<<"Hello world!"<<endl;
    /*
     * komentarz wieloliniowy
     */
    //komentarz jednoliniowy
    cout<<"Hello\nworld!\n";
    //=============================================
    int jablka;
    jablka=10;
    cout<<"Mam "<<jablka<<" jablek"<<endl;
    jablka = jablka-1;
    cout<<"Teraz mam: "<<jablka<<" jablek"<<endl;
    //=============================================
    double d = 5.6;
    char znak = 'A';
    string text ="Sample text";
    bool myBoolean = true;
    //=============================================
    int liczba;
    cout<<"Podaj liczbe:"<<endl;
    //cin>>liczba;
    //cout<<"Twoja liczba to: "<<liczba;
    //=============================================
    int x(0);//ciekawe tworzenie zmiennej
    int a{};//tu tez xD
    int b{7};//i tu xD
    cout<<"X: "<<x<<endl;
    cout<<"A: "<<a<<endl;
    cout<<"B: "<<b<<endl;
    return 0;
}
