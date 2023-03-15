#include <iostream>

using namespace std;
bool fun_fx(float x, float &wynik){
    wynik=((3*x)-2)/((x-5)*(x+1));
    if(wynik>0) return wynik;
    else return false;
}
int iloczynISuma(int tab[], int rozmiar, int &suma){
    int iloczyn=1;
    for(int i=0; i<rozmiar; i++){
        iloczyn*=tab[i];
        suma+=tab[i]*tab[i];
    }
    return iloczyn;
}
float obliczSrednia(int tab[], int rozmiar){
    float srednia=0;
    for(int i=0; i<rozmiar; i++){
        if(i!=0 && tab[i]%2==0){
            srednia+=tab[i];
            //cout<<i+1<<" - "<<tab[i]<<endl;
        }
    }
    return srednia/rozmiar;
}
class Uczen{
private:
    string imie;
    string nazwisko;
    float srednia;
public:
    Uczen(){
        imie="";
        nazwisko="";
        srednia=0;
    }
    Uczen(string imie, string nazwisko, float srednia){
        this->imie=imie;
        this->nazwisko=nazwisko;
        this->srednia=srednia;
    }
    void ustaw(string imie, string nazwisko, float srednia){
        this->imie=imie;
        this->nazwisko=nazwisko;
        this->srednia=srednia;
    }
    void wyswietl(){
        cout<<"Imie i nazwisko: "<<imie<<" "<<nazwisko<<" srednia: "<<srednia<<endl;
    }
    string zapisSlowny(){
        return "Imie i nazwisko: "+imie+" "+nazwisko+" srednia: "+to_string(srednia);
    };
    bool lepszy(const Uczen &u){
        if(srednia>u.srednia) return true;
        else return false;
    }
    bool promowany(){
        if(srednia>2) return true;
        else return false;
    }
};
int main() {
    cout<<"Zad 1:"<<endl;
//    float wynik;
//    if(fun_fx(6,wynik)) cout<<"Wartość funkcji wynosi: "<<wynik<<endl;
//    else cout<<"Nie udało się obliczyć wartości funkcji"<<endl;
    cout<<"Zad 2:"<<endl;
//    int suma;
//    int tab[5];
//    cout<<"Podaj 5 liczb:"<<endl;
//    for(int i=0; i<5; i++){cout<<i+1<<" liczba: ";cin>>tab[i];}
//    cout<<"Iloczyn wszystkich liczb: "<<iloczynISuma(tab,5,suma)<<endl;
//    cout<<"Suma do kwadratu wszystkich liczb:"<<suma<<endl;
    cout<<"Zad 3:"<<endl;
//    int tab[5];
//    cout<<"Podaj 5 liczb:"<<endl;
//    for(int i=0; i<5; i++){cout<<i+1<<" liczba: ";cin>>tab[i];}
//    cout<<"Srednia liczb wynosi: "<<obliczSrednia(tab,5);
    cout<<"Zad 5"<<endl;
    Uczen u1;
    u1.wyswietl();
    Uczen u2("Jan","Kowalski",3.5);
    Uczen u3("Ola","Nowak",4.0);
    u1.ustaw("Ronald","Wisniewski",3.4);
    u1.wyswietl();
    u2.wyswietl();
    u3.wyswietl();
    cout<<u3.zapisSlowny()<<endl;
    if(u2.lepszy(u3)) cout<<"Wykonujacy ma wieksza srednia niz parametr xD"<<endl;
    else cout<<"Parametr ma lepsza srednia niz wykonujacy xD"<<endl;
    if(u3.promowany()) cout<<"Jest promowany"<<endl;
    else cout<<"Nie jest promowany"<<endl;
    return 0;
}
