#include <iostream>
#include <Windows.h>
#include <math.h>
using namespace std;
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
void sortowanie_Malejace(float tab[], int n){
    //wyszukujemy pozycje elementu maksymalnego
    //zamieniamy miejscami element 0 i element maksymalny
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
//inny sposob do zad 31:
void f_sort(float tab[],int n) {
    float pomoc;
    do {
        for (int i = 0; i < n - 1; i++) {
            if (tab[i] > tab[i + 1]) {
                pomoc = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = pomoc;
            }
        }
        n = n - 1;
    }
    while (n > 1);
}

float wartoscWielomianu(float tab[], int n, float x){
    float wynik=0;
    for(int i=0; i<n; i++){
        wynik+=tab[i]*pow(x,i);
    }
}
float iloczynSkalarny(float tab1[],float tab2[],int n){
    float wynik=0;
    for(int i=0; i<n; i++){
        wynik+=tab1[i]*tab2[i];
    }
    return wynik;
}
int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout<<"Zad 27"<<endl;
    //element + pozycja(modyfikacja zadania)
//    const int size = 6;
//    float tab[size] = {1,5,3,7,3,8};
//    cout<<"Pozycja najwiekszego elementu: "<<MaxPozycja(tab,size)<<endl;
    cout<<"Zad 30 w domu"<<endl;
    cout<<"Zad 31"<<endl;
//    sortowanie_Rosnace(tab,size);
//    for(int i=0; i<size; i++) cout<<tab[i]<<", ";
    cout<<"Zad 32"<<endl;
//    const int size = 6;
//    float tab[size] = {1,5,3,7,3,8};
//    cout<<wartoscWielomianu(tab,5, 1)<<endl;
    cout<<"zad 33 w domu"<<endl;
    cout<<"zad 35 w domu"<<endl;
    cout<<"zad 36:"<<endl;
//    float tab1[8] = {6,3,2,4,5,1,8,-2};
//    float tab2[8] = {0,1,-1,0,1,-1,0,1};
//    cout<<iloczynSkalarny(tab1, tab2, 8)<<endl;
    cout<<"Tablice wielowymiarowe zad 5:"<<endl;
    float a[5][5];
    float slad=0;
    cout<<"Podaj parametry:"<<endl;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<"A["<<i+1<<", "<<j+1<<"] = ";
            cin>>a[i][j];
        }
    }
    for(int i=0; i<5; i++){
        slad+=a[i][i];
    }
    cout<<"slad: "<<slad<<endl;
}
