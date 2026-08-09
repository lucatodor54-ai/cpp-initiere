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

    void tema7() {
    int varsta;
    cout<<"Introduceti varsta"<<endl;
    cin>>varsta;
    if (varsta >= 18)
    {
        cout<<"Esti major";
    }
    else
    {
        cout<<"Esti minor";
    }
}
void tema8() {
    int numar;
    cout<<"Introduceti un numar"<<endl;
    cin>>numar;
    if (numar%2==0)
    {
        cout<<"Numarul este par";
    }
    else
    {
        cout<<"Numarul este impar";
    }
}
void tema9() {
    int a, b;
    cout<<"Introduceti un numar a"<<endl;
    cin>>a;
    cout<<"Introduceti un numar b"<<endl;
    cin>>b;
    if (a>b) {
        cout<<"Numarul mai mare este a";
    }
    if (a<b) {
        cout<<"Numarul mai mare este b";
    }
    if (a==b) {
        cout<<"Numerele sunt egale";
    }
}
void tema10() {
    int numar;
    cout<<"Introduceti un numar"<<endl;
    cin>>numar;
    if (numar == 10) {
        cout<<"Excelent";
    }
    if (numar == 8 || numar == 9) {
        cout<<"Foarte bine";
    }
    if (numar == 7 || numar == 6) {
        cout<<"Bine";
    }
    if (numar == 5) {
        cout<<"Promovat";
    }
    if (numar<5) {
        cout<<"Respins";
    }
}
void tema11() {
    int varsta;
    cout<<"Introduceti varsta"<<endl;
    cin>>varsta;
    if (varsta > 18) {
        cout<<"Facultate sau serviciu";
    }
    else if ( varsta >=7 && varsta <=14)
    {
        cout<<"Scoala generala";
    }
    else if (varsta >=15 && varsta <=18)
    {
        cout<<"Liceu";
    }
    else
    {
        cout<<"Gradinita";
    }
}
void tema12() {
    int a=0, b=0, c=0;
    cout<<"Introduceti un numar a"<<endl;
    cin>>a;
    cout<<"Introduceti un numar b"<<endl;
    cin>>b;
    cout<<"Introduceti un numar c"<<endl;
    cin>>c;
    if (a>b &&  a>c) {
        cout<<"Numarul mai mare este a";
    }
    else if (b>a && b>c) {
        cout<<"Numarul mai mare este b";
    }
    else if (c>a && c>b) {
        cout<<"Numarul mai mare este c";
    }
    else if (a==b && b==c) {
        cout<<"Numerele sunt egale";
    }
}
void tema13() {
    for (int i=1;i<=10;i++)
    {
        cout<<i<<endl;
    }
}
void tema14() {
 for  (int i=10;i>=1;i--)
        cout<<i<<endl;
}
void tema15() {
    for (int i=2;i<=20; i +=2) {
        cout<<i<<endl;
    }
}
void tema16() {
    for (int i=20; i>=2; i-=2) {
        cout<<i<<endl;
    }
}
void tema17() {
    int n;
    cout<<"Introduceti un numar"<<endl;
    cin>>n;
    for (int i=0;i<=10; i++) {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
}
void tema18() {
    int b;
    cout<<"Introduceti un numar"<<endl;
    cin>>b;
    for (int i=0; i<=20; i++) {
        cout<<b<<"x"<<i<<"="<<b*i<<endl;
    }
}
void tema19() {
    int n;
    cout<<"Introduceti un numar"<<endl;
    cin>>n;
    for (int i=n; i>=1; i--) {
        cout<<i<<endl;
    }
}
void tema20() {
    int n;
    cout<<"Introduceti un numar"<<endl;
    cin>>n;
    for (int i=1; i<=n; i++) {

    if (i % 3 == 0 )
        cout<<i<<endl;
    }
}
void tema21() {
    int n;
    cout<<"Introduceti un numar"<<endl;
    cin>>n;
    for (int i=1;i<=n; i++) {
        if (i % 2 == 1)
            cout<<i<<endl;
    }
}
void tema22() {
    int n;
    cout<<"Introduceti un numar"<<endl;
    cin>>n;
    for (int i=n; i>=1; i--) {
        if (i % 2 == 0)
            cout<<i<<endl;
    }
}
void tema23() {
    int i=10;
    while (i<=100) {
        cout<<i<<endl;
        i++;
    }
}
void tema24() {
    int i=2;
    while (i<=20) {
        if (i%2 == 0)
            cout<<i<<endl;
        i++;
    }
}
void tema25() {
    int n;
    cout<<"Introduceti un numar"<<endl;
    cin>>n;
    for (int i=1;i<=n;i++) {
        if (i % 2 == 0)
            cout<<i<<endl;
    }
}
void tema26() {
    int a=0, b=0, c=0;
    cout<<"Introduceti un numar a"<<endl;
    cin>>a;
    cout<<"Introduceti un numar b"<<endl;
    cin>>b;
    cout<<"Introduceti un numar c"<<endl;
    cin>>c;
     if(a>b && a>c) {
        cout<<"Numarul cel mai mare este a"<<endl;
    }
        else if (b>a && b>c) {
            cout<<"Cel mai mare numar este b"<<endl;
        }
           else if (c>a && c>b) {
                cout<<"Cel mai mare numar este c"<<endl;
            }
                else {
                    cout<<"Numerele sunt egale"<<endl;
                }
}
void tema27() {
    int n;
    cout<<"Introduceti un numar de doua cifre"<<endl;
    cin>>n;
    int zeci= n/10;
    int unitati= n%10;
    cout<<"Cifra zecilor este:"<<zeci<<endl;
    cout<<"Cifra unitatilor este:"<<unitati<<endl;
    cout<<"Suma cifrelor este:"<<zeci+unitati<<endl;
}
void tema28() {
    int o;
    cout<<"Introduceti o durata in secunde"<<endl;
    cin>>o;
    int secunde=o;
    int minute=secunde/60;
    int ore= minute/60;
    cout<<"Secunde:"<<secunde<<endl;
    cout<<"Minute:"<<minute<<endl;
    cout<<"Ore:"<<ore<<endl;
}

    int main() {
    tema28();
        return 0;
    }
