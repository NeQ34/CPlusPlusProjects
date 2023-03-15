#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    /*cout<<"zad 1"<<endl;
    float a;
    cout<<"Podaj bok kwadratu a:";cin>>a;
    if(a>=0){
        cout<<"Pole kwadratu: "<<a*a<<endl;
        cout<<"Obwód kwadratu: "<<4*a<<endl;
    }else{cout<<"Bok nie może być ujemny";}*/
    /*cout<<"zad 2"<<endl;
    int miesiac;
    cout<<"Podaj numer miesiąca:";cin>>miesiac;
    if(miesiac>=1 && miesiac<=12){cout<<miesiac<<" To jest numer miesiąca";
    }else{cout<<miesiac<<" To nie jest numer miesiąca";}*/
    /*cout<<"zad 3"<<endl;
    char character;
    cout<<"Podaj literę ";cin>>character;
    if(character>='a' && character<='z'){cout<<"Podana litera ("<<character<<") jest mała";}
    else{cout<<"Podana litera ("<<character<<") jest duża";}*/
    /*cout<<"zad 4"<<endl;
    float a,b;
    cout<<"Podaj 2 różne liczby";cin>>a>>b;
    if(a!=b){
        if(b>0 && a>0){
            cout<<"(a+b)/(a-b)= "<<(a+b)/(a-b)<<endl;
        }else{cout<<"Nie można dzielić przez 0";}
    }else{cout<<"Podane liczby są takie same, wpisz jeszcze raz";}*/
    /*cout<<"zad 5"<<endl;
    int a,b;
    cout<<"Podaj a i b";cin>>a>>b;
    if(a%b==0){
        cout<<a<<" jest podzielne przez "<<b;
    }else{cout<<a<<" nie jest podzielne przez "<<b;}*/
    cout<<"zad 6 w domu"<<endl;
    /*int a;
    cout<<"Podaj liczbe";cin>>a;
    if(a%2==0){cout<<"Liczba jest parzysta";}
    else{cout<<"Liczba jest nieparzysta";}*/
    /*cout<<"zad 7"<<endl;
    int a=1,b=2,x;
    cout<<"Podaj liczbę ";cin>>x;
    if(x>=a && x<=b){
        cout<<x<<" Mieści się w przedziale";
    }else{cout<<x<<" Nie mieści się w przedziale";}*/
    cout<<"zad 8 w domu"<<endl;
    /*int a,b,c;
    cout<<"Podaj 3 liczby ";cin>>a>>b>>c;
    if(a>b && a>c && b>c){cout<<c<<"->"<<b<<"->"<<a<<endl;}
    else if(a>b && a>c && c>b){cout<<b<<"->"<<c<<"->"<<a<<endl;}
    else if(b>a && b>c && a>c){cout<<c<<"->"<<a<<"->"<<b<<endl;}
    else if(b>a && b>c && c>a){cout<<a<<"->"<<c<<"->"<<b<<endl;}
    else if(c>a && c>b && a>b){cout<<b<<"->"<<a<<"->"<<c<<endl;}
    else{cout<<a<<"->"<<b<<"->"<<c<<endl;}*/
    /*cout<<"zad 9"<<endl;
    int miesiac;
    cout<<"Podaj numer miesiąca:";cin>>miesiac;
    if(miesiac>=1 && miesiac<=12){
        if(miesiac==1||miesiac==3||miesiac==5||miesiac==7||miesiac==8||miesiac==10||miesiac==12){cout<<"Miesiąc o podanym numerze miał w 2020r. 31 dni";}
        else if(miesiac==2){cout<<"Miesiąc o podanym numerze miał w 2020r. 29 dni";}
        else{cout<<"Miesiąc o podanym numerze miał w 2020r. 30 dni";}
    }else{cout<<miesiac<<" To nie jest numer miesiąca";}*/
    cout<<"zad 11 w domu"<<endl;
    /*int rok;
    cout<<"Podaj rok";cin>>rok;
    if(rok%4==0 && rok%100!=0 || rok%400==0){cout<<rok<<"r jest przestepny"<<endl;}
    else{cout<<rok<<"r nie jest przestepny"<<endl;}*/
    cout<<"zad 13 w domu"<<endl;
    /*int day,month,year;
    cout<<"Podaj dzien miesiac rok: ";cin>>day>>month>>year;
    if(month<=12){
        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
            if(day>=1 && day<=31){cout<<"Data "<<day<<"."<<month<<"."<<year<<" jest poprawna";}
            else {cout<<"Bledna data "<<day<<"."<<month<<"."<<year;}
        }else if(month==2){
            if(day>=1&&day<=29){cout<<"Data "<<day<<"."<<month<<"."<<year<<" jest poprawna";}
            else{cout<<"Bledna data "<<day<<"."<<month<<"."<<year;}
        }else{cout<<"Data "<<day<<"."<<month<<"."<<year<<" jest poprawna";}
    }else{cout<<"Bledna data "<<day<<"."<<month<<"."<<year;}*/
    /*cout<<"zad 18"<<endl;
    int a,b,c;
    cout<<"Podaj a b c ";cin>>a>>b>>c;
    if(a<0 || b<0 ||c<0){cout<<"Błędne wartości";}
    else if(a+b<=c || a+c<=b || b+c<=a){cout<<a<<" "<<b<<" "<<c<<" z tych odcinków nie można zbudować trójkąta";}
    else{cout<<"Z tych odcinków można zbudować trójkąt";}*/
    cout<<"zad 22 w domu"<<endl;
    /*int n,k;
    cout<<"Podaj ilosc sztuk: ";cin>>n;
    if(n>1000){k=10;}
    else if(n>=500 && n<=1000){k=12;}
    else if(n>0 && n<500){k=15;}
    else{k=0;}
    cout<<"Koszt k: "<<k*n<<" zl"<<endl;*/
    return 0;
}
