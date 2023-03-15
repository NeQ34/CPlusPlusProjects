#include <iostream>
using namespace std;
class student{
private:
    string imie, nazwisko;
    int numerIndeksu;
    int oceny[5];
public:
    student(string imie, string nazwisko, int numerIndeksu, int oceny[5]){
        this->imie=imie;
        this->nazwisko=nazwisko;
        this->numerIndeksu=numerIndeksu;
        for(int i=0; i<5; i++)this->oceny[i]=oceny[i];
    }
    void wczytaj(){
        cout<<"Podaj imie i nazwisko: "<<endl;
        cin>>imie>>nazwisko;
        cout<<"Podaj numer indeksu: "<<endl;
        cin>>numerIndeksu;
        cout<<"Podaj oceny(5):"<<endl;
        int ocena;
        for(int i=0; i<5; i++) {
            cout<<i+1<<" ocena: ";cin>>ocena;
            while(ocena<2||ocena>5){
                //cout<<"Ocena musi byc z przedzialu [2,5] "<<endl;
                cout<<i+1<<" ocena: ";cin>>ocena;
            }
            oceny[i]=ocena;
        }
    }
    void wyswietl(){
        cout<<"Imie i nazwisko: "<<imie<<" "<<nazwisko<<" nr: "<<numerIndeksu;
        cout<<" Oceny:";for(int i=0; i<5; i++) cout<<oceny[i]<<", ";
        cout<<endl;
    }
    float srednia(){
        float srednia=0;
        for(int i=0; i<5; i++) srednia+=oceny[i];
        return srednia/5;
    }
};
int main() {
    cout<<"Zad 8 w domu"<<endl;
    int ocenki[5]={6,5,3,6,8};
    student s1("Jan", "Kowalski",56,ocenki);
    s1.wyswietl();
    cout<<"Srednia wynosi: "<<s1.srednia()<<endl;
    s1.wczytaj();
    s1.wyswietl();
    cout<<"Srednia wynosi: "<<s1.srednia()<<endl;

    int ocenki2[5]={5,3,1,4,2};
    student s2("Pioter", "Kox",78,ocenki2);
    s2.wyswietl();
    cout<<"Srednia wynosi: "<<s2.srednia()<<endl;
    s2.wczytaj();
    s2.wyswietl();
    cout<<"Srednia wynosi: "<<s2.srednia()<<endl;
    return 0;
}
