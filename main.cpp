#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
//todo
// =========Instructiunea de afisare
//  cout<<"test"; //afiseaza pe ecran ce este in ghilimele
//  cout<<"test2"<<endl; imi pune un rand liber dupa test2
//
void ex1Afisare() {

    cout<<"ce mai faci";//afiseaza pe ecran cuvantul ce mai faci
   // cout<<endl;
    cout<<"test"<<endl;
    cout<<"ana are mere";
}

void ex2Afisare() {
    cout<<"    *"<<endl;
    cout<<"   ***"<<endl;
    cout<<"  *****"<<endl;
    cout<<" *******"<<endl;

}
void ex3Afisare() {
    cout<<"            1"<<endl;
    cout<<"           222"<<endl;
    cout<<"          33333"<<endl;
    cout<<"         4444444"<<endl;
    cout<<"        555555555"<<endl;
    cout<<"       66666666666"<<endl;
    cout<<"        555555555"<<endl;
    cout<<"         4444444"<<endl;
    cout<<"          33333"<<endl;
    cout<<"           222"<<endl;
    cout<<"            1"<<endl;
}

//todo
// ===============Tipuri de date
// int -> numar intreg
// double sau float-> numar cu virgula
// char -> caracter
// bool -> adevarat sau fals
// ===============Declarare si atribuire
//  int x; -> am declarat o variabila de tip int
//  Obs !!!
//  nu putem declara o variabila de mai multe ori ,dar putem sa-i atribuim o noua valoare
//  x=5; i-am atribuit lui x valoarea 5
//  x=10;i-am atribuit lui x valoarea 10
//  Obs! o variabila retine ultima valoare atribuita
//  cout<<x<<endl;  o sa afiseze valoarea retinuta in x
//  Obs!
//  in cpp orice valaore diferita de 0 este perceputa ca si true
//  0 este false
//  ================Operatori aritmetici
//  - scadere
//  + adunare
//  * inmultire
//  / impartire
//    --> (int) 5/2 => 2
//    -->(double) 5/2=>2.5
//  % rest doar la numere intregi  5%2=>1
//
//
//

void ex1TipuriDeDate() {

    int x=7;// am declarat o variabila x si i-am atribuit valoarea 7
    x=12;// am atribuit lui x valoarea 12
    cout<<x<<endl;
    double a=12.7;
    cout<<"este o valoare double "<<a<<endl;
    char test='a';
    test='b';
    cout<<"este o valoare char "<<test<<endl;
    bool b=true;
    b=false;
    b= true;
    cout<<"este o valoare bool "<<b<<endl;
}
void ex2TipuriDeDate() {

    int x=122,y=13; //atribuire directa
    int suma=x+y;
    cout<<x<<"+"<<y<<"="<<suma<<endl;
}


void ex3TipuriDeDate() {

    int x=0,y=0; //atribuire de la tastatura
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    int suma=x+y;
    cout<<x<<"+"<<y<<"="<<suma<<endl;
}
void ex4TipuriDeDate() {
    int a = 0;//atribuire directa
    cout<<"Introduceti numarul de globuri albe";
    cin>>a;
    int r=2*a;
    int v= r - 3;
    int total=a+r+v;
    cout<<"In stoc avem globuri"<<endl;
    cout<<a<<" albe"<<endl;
    cout<<r<<" rosii"<<endl;
    cout<<v<<" verzi"<<endl;
    cout<<"=========Total========= "<<total<<endl;


}

void ex5TipuriDeDate() {

    int g=4, p=4;//atribuire directa
    int totalPicioare=g*2 + p*4+2;
    cout <<"In ograda avem "<<g<<" gaini  "<<p<<" pisici  si 1 om prin urmare avem "<<totalPicioare<<" picoare"<<endl;
}

void ex6TipuriDeDate() {
    int g=0, p=0;
    cout<<"Introduceti numarul de gaini"<<endl;
    cin>>g;
    cout<<"Introduceti numarul de pisici"<<endl;
    cin>>p;
    int totalPicioare=g*2 + p*4+2;
    cout<<"Numarul total de picioare este egal cu "<<totalPicioare<<endl;
}

void ex7TipuriDeDate() {
    //13+23=>36 ultima cifra este 6
    //36%10=>6
    int x=0, y=0;
    cout<<"introduceti variabila x"<<endl;
    cin>>x;
    cout<<"introduceti variabila y"<<endl;
    cin>>y;
    int suma=x+y;
    int uc=suma%10;
    cout<<"UC("<<x<<"+"<<y<<")=12"<<uc<<endl;

}
void tema1() {
    int c=0, cc=0;
    cout<<"Introduceti numarul de cutii"<<endl;
    cin>>c;
    cout<<"Introduceti numarul de creioane pe cutie"<<endl;
    cin>>cc;
    int total=c*cc;
    cout<<"Numarul total de creioane este "<<total<<endl;
}
void tema2() {
    int p=0, b=0;
    cout<<"Intoduceti pretul produsului"<<endl;
    cin>>p;
    cout<<"Introduceti bancnota";
    cin>>b;
    int rest=b-p;
    cout<<"Restul:"<<rest<<endl;
}
void tema3() {
    int g=0, p=0, o=0;
    cout<<"Introduceti numarul de gaini"<<endl;
    cin>>g;
    cout<<"Introduceti numarul de pisici"<<endl;
    cin>>p;
    cout<<"Introduceti numarul de oameni"<<endl;
    cin>>o;
    int numaruldecapete=g+p+o;
    int numaruldepicioare=g*2+p*4+o*2;
    cout<<"numarul total de capete este: "<<numaruldecapete<<endl;
    cout<<"numarul total de picioare este : "<<numaruldepicioare<<endl;
}
void tema4() {
    int  nota1=0, nota2=0, nota3=0;
    cout<<"Introduceti prima nota"<<endl;
    cin>>nota1;
    cout<<"Introduceti a doua nota"<<endl;
    cin>>nota2;
    cout<<"Introduceti a treia nota"<<endl;
    cin>>nota3;
    int medianotelor=(nota1+nota2+nota3)/3;
    cout<<"Media notelor este :"<<medianotelor<<endl;
}

void tema5() {
    int b=0, c=0;
    cout<<"Introduceti numarul de bomboane"<<endl;
    cin>>b;
    cout<<"Introduceti numarul de copii"<<endl;
    cin>>c;
    int bomboanepentrufiecarecopil=b/c;
    int catramanerest=b%c;
    cout<<"fiecare copil primeste " <<bomboanepentrufiecarecopil<<" bomboane"<<endl;
    cout<<"raman "<<catramanerest<<" bomboane"<<endl;
}

void tema6() {
    int b=0, l=0;
    cout<<"Introduceti suma in bani"<<endl;
    cin>>b;
    int sumainlei=b/100;
    int rest=b%100;
    cout<<"ai "<<sumainlei<<" lei si "<<rest<<" de bani"<<endl;
}
    int main() {
    tema6();
    }
