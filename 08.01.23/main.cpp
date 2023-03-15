#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

float min2(float a, float b){
    if(a<b) return a;
    else return b;
}
int minPozycja(int tab[], int size){
    int wynik=0;
    int min=tab[0];
    for(int i=1; i<size; i++){
        if(min>tab[i]) wynik=i;
        min = min2(min, tab[i]);
    }
    return wynik;
}
void sortowanieMalejace(int tab[], int size){
    float pomoc;
    for(int i=size-1; i>0; i--){
        pomoc = tab[i];
        tab[i] = tab[minPozycja(tab, i+1)];
        tab[minPozycja(tab, i+1)] = pomoc;
    }
}
float sumaDwochWielomanow(float wiel1[], float wiel2[], int size){
    int wynik=0;
    for(int i=0; i<size; i++) {
        wynik+=wiel1[i]+wiel2[i];
    }
    return wynik;
}
float sredniaArytmetyczna(float tab[], int size){
    float srednia=0;
    for(int i=0; i<size; i++){
        srednia+=tab[i];
    }
    return srednia/size;
}
//a[2][3]
//b[1][4]
float odlegloscPunktow(float a[][2],float b[][2]){
    float xa = a[0][0];
    float ya = a[0][1];
    float xb = b[0][0];
    float yb = b[0][1];
    float x = pow((xb-xa),2);
    float y = pow((yb-ya),2);
    float d = sqrt(x+y);
    return d;
}
float max2(float a, float b){
    if(a>b) return a;
    else return b;
}
int MaxPozycja(float tab[], int n){
    float wynik=0;
    float max = tab[0];
    for(int i=1; i<n; i++){
        if(max<tab[i]) wynik=i;
        max = max2(max, tab[i]);
    }
    return wynik;
}
void sortowanie_Rosnace(float tab[], int n){
    //wyszukujemy pozycje najwiekszego elementu i zamieniamy go miejscami z ostatnim
    float pomoc;
    for(int i=n-1; i>0; i--) {
        pomoc = tab[i];
        tab[i] = tab[MaxPozycja(tab, i+1)];
        tab[MaxPozycja(tab, i+1)] = pomoc;
    }
}
//x-zadany punkt
//n - stopien wielomianu
float wartoscWielomianu(float tab[],int size, int n, float x){
    float wynik=0;
    for(int i=0; i<size; i++){
        wynik+=tab[i]*pow((x),n--);
    }
    return wynik;
}
int main() {
    cout<<"Zad 30 w domu:"<<endl;
//    int const size = 8;
//    int liczby[size] = {4,3,2,6,4,2,1,5};
//    cout<<"Pozycja najmniejszego elementu: "<<minPozycja(liczby, size)<<endl;
//    cout<<"Sortowanie malejace: "<<endl;
//    sortowanieMalejace(liczby, size);
//    for(int i=0; i<size; i++) cout<<liczby[i]<<", ";
//    cout<<endl;

    cout<<"Zad 31 w domu:"<<endl;
//    int const size = 8;
//    float zbior[size]={6,4,1,9,4,2,6,4};
//    sortowanie_Rosnace(zbior, size);
//    cout<<"Sortowanie rosnace:"<<endl;
//    for(int i=0; i<size; i++){cout<<zbior[i]<<", ";}
//    cout<<endl;

    cout<<"Zad 32 w domu"<<endl;
//    const int size = 5;
//    float wielomian[size] ={5,3,2,6,7};
//    //W(2) = 5*2^5 + 3*2^4 + 2*2^3 + 6*2^5 + 7*2^5
//    cout<<"Wartosc wielomianu wynosi: "<<wartoscWielomianu(wielomian,size,5,2);
//    cout<<endl;

    cout<<"Zad 33 w domu: "<<endl;
//    int const size=5;
//    float wielomian1[size] = {5,4,2,1,6};
//    float wielomian2[size] = {6,2,3,6,8};
//    cout<<"Suma 2 wielomianow wynosi: "<<sumaDwochWielomanow(wielomian1, wielomian2, size)<<endl;

    cout<<"Zad 35 w domu:"<<endl;
//    int const size=5;
//    float liczby[size]={5,3,2,6,7};
//    cout<<"Srednia liczb wynosi: "<<sredniaArytmetyczna(liczby, size)<<endl;

    cout<<"Zadanie 8 (chyba nie to nie bylo do domu xD))"<<endl;
//    float a[1][2]={8,6};
//    float b[1][2]={4,3};
//    cout<<"Odleglosc punktow A("<<a[0][0]<<","<<a[0][1]<<") i B("<<b[0][0]<<","<<b[0][1]<<") wynosi: "<<odlegloscPunktow(a,b)<<endl;

    cout<<"Zad 7 w domu:"<<endl;
//    int n;
//    cout<<"Podaj stopien macierzy kwadratowej:"<<endl;cin>>n;
//    if(n<=10){
//        int macierz[n][n];
//        int sumaWierszy[n];
//        cout<<"Podaj elementy macierzy:"<<endl;
//        for (int i=0; i<n; i++) {
//            for (int j=0; j<n; j++) {
//                cout<<"["<<i+1<<","<<j+1<<"] = ";cin>>macierz[i][j];
//            }
//        }
//        for (int y=0; y<n; y++) {
//            int suma=0;
//            for (int k=0; k<n; k++) {
//                suma+=macierz[y][k];
//            }
//            sumaWierszy[y] = suma;
//            cout<<"Suma wiersza nr: "<<y+1<<" = "<<suma<<endl;
//        }
//        int najmniejszaSumaWierszy=sumaWierszy[0];
//        int wiersz =0;
//        for (int i=0; i<n; i++) {
//            if (najmniejszaSumaWierszy>sumaWierszy[i]) {
//                najmniejszaSumaWierszy=sumaWierszy[i];
//                wiersz=i+1;
//            }
//        }
//        cout<<"Numer najmniejszego wiersza to: "<<wiersz<<"("<<najmniejszaSumaWierszy<<")"<<endl;
//    }cout<<"Wymiary macierzy nie moga byc wieksze od 10"<<endl;

    cout<<"Zad 8 w domu: "<<endl;
//    int n;
//    cout<<"Podaj stopien macierzy kwadratowej:"<<endl;cin>>n;
//    if(n<=10) {
//        int macierz[n][n];
//        int sumaKolumn[n];
//        cout << "Podaj elementy macierzy:" << endl;
//        for (int i =0; i<n; i++) {
//            for (int j=0; j<n; j++) {
//                cout<<"["<<i+1<<","<<j+1<<"] = ";cin>>macierz[i][j];
//            }
//        }
//        for (int y=0; y<n; y++) {
//            int suma=0;
//            for (int k=0; k<n; k++) {
//                suma+=macierz[k][y];
//            }
//            sumaKolumn[y]=suma;
//            cout<<"Suma kolumny nr: "<<y+1<<" = "<<suma<<endl;
//        }
//        int najwiekszaKolumna=sumaKolumn[1];
//        int kolumna=0;
//        for(int i=0; i<n; i++){
//            if(najwiekszaKolumna<sumaKolumn[i]){
//                najwiekszaKolumna=sumaKolumn[i];
//                kolumna=i+1;
//            }
//        }
//        cout<<"Numer najwiekszej kolumny to: "<<kolumna<<"("<<najwiekszaKolumna<<")"<<endl;
//    }
    return 0;
}