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
    float pole(){
        float pi=3.14;
        return pi*(promien*promien);
    }
    void ustawPromien(float promien){
        this->promien = promien;
    }
    void ustawKolor(int kolor){
        this->kolor=kolor;
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

    return 0;
}
