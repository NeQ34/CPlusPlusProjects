#include <iostream>
//#include<iomanip>
using namespace std;
void zer(int wart, int &ref);
int main() {
    cout<<"Zad 7.1.1:"<<endl;
    /*for(int i=0; i<19; i++){
        cout<<"*";
    }*/
    cout<<"Zad 7.1.2:"<<endl;
//    for(int i=0; i<5; i++){
//        for(int j=0; j<=i; j++){
//            cout<<"O";
//        }
//        cout<<endl;
//    }
    cout<<"Zad 7.1.3:"<<endl;
//    int w,h;
//    cout<<"Podaj wysokosc i szerokosc:";cin>>h>>w;
//    for(int i=0; i<h; i++){
//        for(int j=0; j<w; j++){
//            if(i%(h-1)==0 || j%(w-1)==0){cout<<"X";}else{cout<<" ";}
//        }
//        cout<<endl;
//    }
    cout<<"Zad 7.1.4:"<<endl;
//    int h;
//    cout<<"Podaj wysokosc";cin>>h;
//    for(int i=0; i<h; i++){
//        cout<<" ";
//        for(int j=0; j<i; j++){
//            if(i%2==0 || j%2==0){
//                cout<<" ";
//            }else{
//                cout<<"A";
//            }
//        }
//        cout<<"A"<<endl;
//    }
    cout<<"Zad 7.1.7:"<<endl;
//    int h;
//    cout<<"Podaj wysokosc: "<<endl;cin>>h;
//    for(int i=1; i<=h; i++){
//        for(int k=h-i; k>0; k--){
//            cout<<" ";
//        }
//        for(int j=1; j<=i; j++){
//            cout<<"* ";
//        }
//        cout<<endl;
//    }
    cout<<"Zad 52a:"<<endl;
//    int h;
//    cout<<"Podaj wysokosc:"<<endl;cin>>h;
//    for(int i=1; i<=h; i++){
//        for(int j=1; j<=i; j++){
//            cout<<j<<" ";
//        }
//        cout<<endl;
//    }
    cout<<"Zad 52b:"<<endl;
//    int h;
//    cout<<"Podaj wysokosc:"<<endl;cin>>h;
//    for(int i=h; i>0; i--){
//        for(int j=1; j<=i; j++){
//            cout<<j<<" ";
//        }
//        cout<<endl;
//    }
    cout<<"Zad 53:"<<endl;
//    for(int i=2; i<=7; i++){
//        for(int j=1; j<=5; j++){
//            cout<<setw(4)<<j*i;
//        }
//        cout<<endl;
//    }

    cout<<"Zad 54:"<<endl;
//    for(int i=1; i<=15; i++){
//        cout<<setw(3)<<left<<i<<" ";
//        if(i%5==0){cout<<endl;}
//    }

    cout<<"Zad 51:"<<endl;
//    for(int i=1; i<=3; i++){
//        for(int j=1; j<=i; j++){
//            cout<<i*j;
//        }
//        cout<<endl;
//    }
    cout<<"zad 50"<<endl;
//    int height;
//    cout<<"Podaj wysokosc: "<<endl;cin>>height;
//    for(int i=height; i>0; i--){
//        for(int j=0; j<i; j++){
//            cout<<"*";
//        }
//        cout<<""<<endl;
//    }
    cout<<"zad 50"<<endl;
//    int n;
//    cout<<"Podaj wysokosc:"<<endl;cin>>n;
//    for(int i=1; i<=n; i++){
//        for(int j=1; j<=i; j++){
//            cout<<i*j<<" ";
//        }
//        cout<<endl;
//    }
//    for(int i=n; i>=0; i--){
//        for(int j=1; j<=i; j++){
//            cout<<i*j<<" ";
//        }
//        cout<<endl;
//    }
    cout<<"zadanie choinka: "<<endl;
//    int n;
//    cout<<"Podaj wysokosc:"<<endl;cin>>n;
//    for(int i=1; i<=n; i++){
//        for(int j=1; j<=n-i; j++){cout<<" ";}
//        for(int y=1; y<=i*2-1; y++){cout<<"^";}
//        cout<<endl;
//    }

//    int a = 44, b = 77;
//    cout << "Przed wywolaniem funkcji: a = " << a
//         << ", b = " << b << endl;
//    zer(a, b); //wywołanie
//    cout << "Po powrocie z funkcji: a = " << a
//         << ", b = " << b << endl;

    cout<<"Zad 3"<<endl;
//    char arr[7] = {'A','6','y','B','f','?','C'};
//    for(int i=0; i<7; i++){
//        if(int(arr[i])>=65 and int(arr[i])<=90){//lub if(int(arr[i])>=65 and int(arr[i])<=90) - tablica ascii
//            cout<<arr[i]<<endl;
//        }
//    }

    cout<<"zad 7"<<endl;
//    cout<<"Podaj 5 znaków: "<<endl;
//    char arr[5];
//    for(int i=0; i<5; i++){
//        cout<<i+1<<"znak: "<<endl;cin>>arr[i];
//    }
//    cout<<"Znalezione cyfry:"<<endl;
//    for(int j=0; j<5; j++){
//        if(arr[j]>=48 && arr[j]<=57){//lub pomiedzy 48-57 (id cyfr) if(isdigit(arr[j]))
//            cout<<arr[j]<<endl;
//        }
//    }

    char litery[3];
    cout<<"Podaj 3 litery:"<<endl;
    for(int i=0; i<3; i++){
        cout<<"litera "<<i+1<<":";cin>>litery[i];
    }
//    for(int j=0; j<3; j++){
//        if(int(litery[j])>=97 && int(litery[j])<=122){//cout<<(char) toupper(litery[j])<<endl;
//            char znak = litery[j]-32;
//            cout<<znak<<endl;
//        }
//    }

    for(int j=0; j<3; j++){
        if(int(litery[j])>=65 && int(litery[j])<=90){//cout<<(char) toupper(litery[j])<<endl;
            char znak = litery[j]+32;
            cout<<znak<<endl;
        }
    }

    return 0;
}
void zer(int wart, int &ref){
    cout << "\tW funkcji przed zerowaniem \n"
         << "\twart = "<<wart<<", ref = "
         << ref<<endl;
    wart = 0;
    ref = 0;
    cout << "\tW funkcji po zerowaniu \n"
         << "\twart = "<<wart<<", ref = "
         << ref<<endl;
}

