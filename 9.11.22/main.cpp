#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    //instrukcja switch
    cout<<"Zad 1:"<<endl;
    /*int ocena;
    cout<<"Podaj ocenę:";cin>>ocena;
    switch(ocena){
        case 1: cout<<"Ocena niedostateczna";break;
        case 2: cout<<"Ocena dopuszczająca";break;
        case 3: cout<<"Ocena dostateczna";break;
        case 4: cout<<"Ocena dobra";break;
        case 5: cout<<"Ocena bardzo dobra";break;
        case 6: cout<<"Ocena celująca";break;
        default: cout<<"Błędna ocena";
    }*/
    cout<<"Zad 2:"<<endl;
    /*int pkt;
    cout<<"Podaj liczbę punktów:";cin>>pkt;
    switch(pkt){
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10: cout<<"Ocena: 2"; break;
        case 11:
        case 12:
        case 13: cout<<"Ocena: 3"; break;
        case 14:
        case 15:
        case 16: cout<<"Ocena: 4"; break;
        case 17:
        case 18: cout<<"Ocena: 5"; break;
        default: cout<<"Błędne dane";
    }*/
    cout<<"Zad 3:"<<endl;
    /*int a,b,operacja;
    cout<<"Podaj 2 liczby:";cin>>a>>b;
    cout<<"Wybierz operacje:"<<endl;
    cout<<"0 - dodawanie"<<endl;
    cout<<"1 - odejmowanie"<<endl;
    cout<<"2 - mnożenie"<<endl;
    cout<<"3 - dzielenie"<<endl;
    cin>>operacja;
    switch(operacja){
        case 0: cout<<a<<"+"<<b<<"= "<<a+b; break;
        case 1: cout<<a<<"-"<<b<<"= "<<a-b; break;
        case 2: cout<<a<<"*"<<b<<"= "<<a*b; break;
        case 3: cout<<a<<"/"<<b<<"= "<<a/b; break;
        default: cout<<"Błędne operacje"<<endl;
    }*/
    cout<<"Zad 4: zrobic w domu z exitem"<<endl;
    /*int a,b,operacja;
    cout<<"Podaj 2 liczby:";cin>>a>>b;
    cout<<"Menu:"<<endl;
    cout<<"0 - dodawanie"<<endl;
    cout<<"1 - odejmowanie"<<endl;
    cout<<"2 - mnożenie"<<endl;
    cout<<"3 - dzielenie"<<endl;
    cout<<"4 - exit"<<endl;
    cin>>operacja;
    switch(operacja){
        case 0: cout<<a<<"+"<<b<<"= "<<a+b<<endl; break;
        case 1: cout<<a<<"-"<<b<<"= "<<a-b<<endl; break;
        case 2: cout<<a<<"*"<<b<<"= "<<a*b<<endl; break;
        case 3: cout<<a<<"/"<<b<<"= "<<a/b<<endl; break;
        case 4: cout<<"Zakończyłeś program"<<endl;break;
        default: cout<<"Błędne operacje"<<endl;
    }*/
    cout<<"Zad 5:"<<endl;
    /*int zl,operacja;
    cout<<"Podaj kwotę w zł:";cin>>zl;
    cout<<"Wybierz cenę w:"<<endl;
    cout<<"0 - funtach"<<endl;
    cout<<"1 - dolarach"<<endl;
    cout<<"2 - euro"<<endl;
    cin>>operacja;
    switch(operacja){
        case 0: cout<<zl<<"zł to "<<zl/5.36<<" Funtów"; break;
        case 1: cout<<zl<<"zł to "<<zl/4.68<<" Dolarów"; break;
        case 2: cout<<zl<<"zł to "<<zl/4.70<<" Euro"; break;
        default: cout<<"Nieznana waluta"<<endl;
    }*/
    cout<<"Zad 6 w domu"<<endl;
    /*int godzina;
    cout<<"Podaj godzinę: ";cin>>godzina;
    cout<<"Od godziny "<<godzina<<" będzie:"<<endl;
    switch(godzina){
        case 8: cout<<"wykład"<<endl;
        case 9:
        case 10:
        case 11:
        case 12: cout<<" 12-13 dyskusje"<<endl;
        case 13:
        case 14: cout<<" 14 obiad"<<endl;
        case 15: cout<<" 15-18 prelekcje"<<endl;
        case 16:
        case 17:
        case 18:
        case 19: cout<<" 19 kolacja"<<endl; break;
        default: cout<<"Brak danych"<<endl;
    }*/
    /*cout<<"Zad 7"<<endl;
    int pkt;
    char oc;
    cin>>pkt;
    switch(pkt){
        case 0:
        case 1:
        case 2:
        case 3: oc='E'; break;
        case 4: oc='D';
        case 5:
        case 6: break;
        case 7: oc='C';
        case 8: break;
        case 9: oc='B'; break;
        case 10: oc='A'; break;
        default: oc='?';
    }
    cout<<"ocena: "<<oc;*/
    cout<<"Pętle"<<endl;
    cout<<"zad 1:"<<endl;
    /*int a;
    do{cout<<"Podaj bok kwadratu a:";cin>>a;
    }while(a<=0);
    cout<<"Pole kwadratu wynosi: "<<a*a;*/
    cout<<"zad 2:"<<endl;
    /*int a;
    do{cout<<"Podaj wartość nieujemną:";cin>>a;
    }while(a<=0);
    cout<<"Pierwiastek: "<<sqrt(a);*/
    cout<<"zad 3 w domu"<<endl;
    /*int liczba;
    cout<<"Podaj liczbe"<<endl;cin>>liczba;
    while(liczba<=0){
        cout<<"Podaj liczbę nieujemną\n";cin>>liczba;
    }
    cout<<"Pierwiastek z liczby "<<liczba<<" wynosi: "<<sqrt(liczba)<<endl;*/
    cout<<"zad 4:"<<endl;
    /*float liczba;
    do{
        cout<<"Podaj liczbę z przedziału [0,100]";
        cin>>liczba;
    }while(liczba<0 || liczba>100);
    cout<<"Podana liczba jest z tego przedziału";*/
    cout<<"zadanie z próbami w domu 6"<<endl;
    /*int miesiac,proba;
    cout<<"Podaj nr miesiąca:"; cin>>miesiac;
    while(miesiac<1 || miesiac>12){
        proba++;
        cout<<"Błędne dane, podaj nr jeszcze raz. Próba nr: "<<proba<<endl;cin>>miesiac;
        if(proba>=3){cout<<"3 niepowodzenia. Koniec programu"; break;}
    }
    cout<<"Podano poprawny numer miesiąca"<<endl;*/
    return 0;
}
