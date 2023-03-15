//18.01.23
#include <iostream>
using namespace std;
class uczen{
    private:
        string imie,nazwisko;
        float srednia;
    public:
        uczen(){}
        uczen(string imie, string nazwisko, float srednia){
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
            cout<<"Imie: "<<imie<<" Nazwisko: "<<nazwisko<<" srednia: "<<srednia<<endl;
        }
        string zapisSlowny(string text){
            return text;
        }
        bool lepszy(const uczen &u2){
            if(srednia>u2.srednia) return true;
            else return false;
        }
        bool promowany(){
            if(srednia>3.0) return true;
            else return false;
        }
};
class kolo{
private:
    float promien;
    int kolor;
public:
    kolo(){
        promien = 4.2;
        kolor=4;
    }
    kolo(float promien, int kolor){
        this->promien=promien;
        this->kolor=kolor;
    }
    float pole(float p){
        float pi=3.14;
        return pi*(promien*promien);
    }
    void ustawPromien(float promien){
        this->promien = promien;
    }
    void ustawKolor(int kolor){
        this->kolor=kolor;
    }
    bool rowne(const kolo &k)const{//wazne !!!!!!!
        return (promien==k.promien && kolor==k.kolor);
    }
    bool operator==(const kolo &p)const{
        return (promien==p.promien && kolor==p.kolor);
    }
};
class pracownik{
private:
    long nr_ident; //nr id
    float st; //wynagrodzenie za 1h pracy
    float godz; //przepracowane godz w mies
    string nazwisko_imie;
public:
    pracownik(long nr_ident, float st, float godz, string nazwisko_imie) {
        this->nr_ident=nr_ident;
        this->st=st;
        this->godz=godz;
        this->nazwisko_imie=nazwisko_imie;
    }
    void ustaw(long nr_ident, float st, float godz){
        this->nr_ident=nr_ident;
        this->st=st;
        this->godz=godz;
        this->nazwisko_imie=nazwisko_imie;
    }
    float wynagrodzenie(){
        return st*godz;
    }
    void wyswietl(){
        cout<<"Nr: "<<nr_ident<<" Imie i nazwisko: "<<nazwisko_imie<<" Przepracowane godziny: "<<godz<<" Stawka za 1h: "<<st<<" Wynagrodzenie: "<<wynagrodzenie()<<endl;
    }
    void podwyzka(float st){
        this->st+=st;
    }

};
int main() {
    cout<<"Zad 3:"<<endl;
//    uczen uczen1("Jan","Kowalski",4.5);
//    uczen uczen2("Ola","Nowak",3.5);
//    uczen uczen3("Ala","Wisniewska",2.0);
//    uczen1.wyswietl();
//    uczen2.wyswietl();
//    if(uczen1.lepszy(uczen2))cout<<"true"<<endl;
//    else cout<<"false"<<endl;
//    if(uczen3.promowany()) cout<<"Jest promowany"<<endl;
//    else cout<<"Nie jest promowany"<<endl;

    cout<<"Zad 5"<<endl;
//    kolo k1;
//    kolo k2;
//
//    if(k1==k2) cout<<"Bezparametrowe, pola sa takie same"<<endl;
//    else cout<<"Bezparametrowe, pola nie sa takie same"<<endl;
//    k1.ustawPromien(5.67);
//    k1.ustawKolor(5);
//    k2.ustawPromien(9.67);
//    k2.ustawKolor(7);
//    if(k1==k2) cout<<"Bezparametrowe, pola sa takie same"<<endl;
//    else cout<<"Bezparametrowe, pola nie sa takie same"<<endl;
//
//    kolo k3(4,5);
//    kolo k4(4,5);
//    if(k3==k4) cout<<"Kola sa takie same"<<endl;
//    else cout<<"Kola nie sa takie same"<<endl;
//
//    k3.ustawPromien(5.34);
//    k3.ustawKolor(5);
//    k4.ustawPromien(4.67);
//    k4.ustawKolor(7);
//    if(k3==k4) cout<<"Kola sa takie same"<<endl;
//    else cout<<"Kola nie sa takie same"<<endl;

    cout<<"Zad 6:"<<endl;

    pracownik p1(764313, 11, 360, "Jan Kowalski");
    p1.wyswietl();
    p1.podwyzka(14);
    p1.wyswietl();


    cout<<"Zad 8 w domu"<<endl;


    return 0;
}
