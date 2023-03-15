#include <iostream>
#include <math.h>

using namespace std;

//zad1 klasa prostokat:
class Prostokat{
private:
    float wys,szer;
public:
    Prostokat(){
        wys=0;
        szer=0;
        cout<<"Wymiary prostokata zostaly ustawione przez konstruktor jako 0 na 0"<<endl;
    }
    Prostokat(float h, float w){
        wys = h;
        szer = w;
        cout<<"Wymiary prostokata ustawione jako "<<h<<" na "<<w<<endl;
    };
    void ustaw(float h, float w){
        wys=h;
        szer=w;
        cout<<"Wymiary prostokata ustawione jako: "<<h<<" na "<<w<<endl;
    };
    float podajWys(){
        return wys;
    }
    float podajSzer(){
        return szer;
    }
    void wyswietl(){
        cout<<"Wysokosc prostokata: "<<wys<<endl;
        cout<<"Szerokosc prostokata: "<<szer<<endl;
    }
    float pole() const{
        return wys*szer;
    }
    float obwod(){
        return 2*(wys+szer);
    }
};
//klasa do zad 2:
class Punkt{
private:
    float x,y;
public:
    Punkt(){
      x=0;
      y=0;
      cout<<"Utworzono punkt o wspolrzednych: "<<x<<","<<y<<endl;
    }
    Punkt(float x1, float y1){
      x = x1;
      y = y1;
      cout<<"Utworzono punkt o wspolrzednych: "<<x<<","<<y<<endl;
    }
    void ustaw(float x1, float y1){
      x = x1;
      y = y1;
      cout<<"Punkt ustawiony na: "<<x<<","<<y<<endl;
    };
    void wyswietl(){
      cout<<"Punkt ma wspolrzedne: "<<x<<","<<y<<endl;
    }
    float podajX(){
      return x;
    };
    float podajY(){
      return y;
    };
    float odleglosc(const Punkt &p2)const{
        float odl;
        odl = sqrt(pow((p2.x-x),2)+pow((p2.y-y),2));
        return odl;
    }
    bool rowne(const Punkt &p2)const{
//        if(x == p2.x && y == p2.y) return true;
//        else return false;
        return (x==p2.x && y==p2.y);
    }
//  przeciazenie operatora rownosci xD:
    bool operator==(const Punkt & p)const{
        return (x==p.x && y==p.y);
    }
};
int main() {
    cout<<"T: Klasy"<<endl;
    cout<<"Zad 1:"<<endl;
//    Prostokat p1;
//    Prostokat p2(2,3);
//    p1.ustaw(5,6);
//    cout<<"M Wysokosc prostokata: "<<p1.podajWys()<<endl;
//    cout<<"M Szerokosc prostokata: "<<p1.podajSzer()<<endl;
//    p2.wyswietl();
//    cout<<"M Pole prostokata: "<<p1.pole()<<endl;
//    cout<<"M Obwod prostokata: "<<p1.obwod()<<endl;
    cout<<"Zad 2:"<<endl;
//    Punkt p1;
//    cout<<"X: "<<p1.podajX()<<" Y: "<<p1.podajY()<<endl;
//    p1.wyswietl();
//    p1.ustaw(5,5);
//    p1.wyswietl();
//    p1.ustaw(10,10);
//    Punkt q(1,2);
//    if(p1.rowne(q))cout<<"p1=q"<<endl;
//    else cout<<"p1!=q"<<endl;
//    p1.ustaw(1,2);
//    if(p1==q)cout<<"p1==q"<<endl;
//    else cout<<"p1!=q"<<endl;
//    float odl = q.odleglosc(p1);
//    cout<<"Odleglosc q od p1= "<<odl<<endl;
//    q.wyswietl();
//    q.ustaw(3,4);
//    q.wyswietl();
    cout<<"Zad 3 w domu"<<endl;
    cout<<"Zad 4 w domu"<<endl;
    cout<<"Zad 5 w domu"<<endl;
    return 0;
}