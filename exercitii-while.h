//
// Created by IOANA TODOR on 16/09/2026.
//

#ifndef INITIERE_EXERCITII_WHILE_H
#define INITIERE_EXERCITII_WHILE_H
#include <iostream>
using namespace std;

//todo afiseaza pe ecran doar numerele pare pana 6
// numar<6  numar%2==0 cout numar
// 0<6     da          0   1
// 1<6     nu          -   2
// 2<6      da           2   3
// 3<6      nu           -  4
// 4<6      da           4   5
// 5<6      nu           5   6
// 6<6 F
void whileTorie1() {

    int numar=0;
    while (numar<6) {
        if (numar%2==0) {
            cout<<numar<<endl;
        }
        numar++;
    }
    cout <<"sfarsit"<< endl;
}
void ex2 () {
    int contor=0;
    int n=5;
    while (contor<=n) {

    cout << contor <<endl;
        contor++;
    }
    cout << "sfarsit" << endl;
}
void ex3 () {
    int n=4;
    int contor=n;
    while (contor >=1) {
        cout << contor << endl;
        contor--;
    }
    cout << "Start !" << endl;
}
void ex4 () {
    int contor=0;
    int n=9;
    while (contor <=n) {
        if (contor%2==0) {
            cout<<contor<<endl;
        }
        contor++;
    }
}
void ex5 () {
  int n;
    cout <<"Introduceti un numar: " <<endl;
    cin >> n;
    int i = 1;
    while (i <= 10) {
        cout << n << "x" << i << "="<< n * i << endl;
        i++;
    }
}
void ex6 () {
    int n;
    cout <<"Introduceti un numar: " << endl;
    cin >> n;
    int i = 5;
    while (i <= n) {
        cout <<i << endl;
        i+=5;
    }
}
void ex7 () {
    int n;
    cout <<"Introduceti un numar: " << endl;
    cin >> n;
    int suma = 0;
    int i = 1;
    while (i <= n) {
        suma +=i;
        i++;
    }
    cout << "Suma este: " << suma << endl;
}
// %10 i-au ultima cifra din numar
// /10 elimin ultima cifra din numar

//todo: suma cifrelor unui numar
// 123
// suma=0
// suma+=123%10 =>suma devine 3
// 123/10 =>12
// suma+=12%10 =>suma devine 5
// 12/10  =>1
// suma+=1%10 => suma devine 6
//
// x=12
// x+=9
// x devine 21

//
// todo: parcurgem algoritmul n=8659 suma=0
//   n!=0  uc  suma  n
//   da    9    9   865
//   da    5    14   86
//   da    6    20   8
//   da    8   28    0
//   nu

void ex8 () {
    int n;
    cout <<"Introduceti un numar: " << endl;
    cin >> n;
    int suma = 0;
    while (n!=0) {
        int uc=n%10;
        suma+=uc;
        n/=10;
    }
    cout<<"Suma cifrelor numarului introdus este "<<suma<<endl;
}
void ex9 () {
    int n;
    cout <<"Introduceti un numar: " << endl;
    cin >> n;
    int contor=0;
    int i=1;
    while ( i <= n) {
        if ( i % 2 == 0) {
            contor++;
        }
            i++;
    }

    cout << "Sunt "<< contor << "numere pare" << endl;
}

//se introduce un numar sa se afiseze suma cifrelor pare pt n = 124
// n!=0   uc   uc%2==0   suma  n
// da      4       da       4   12
// da      2       da       6   1
// da      1       nu       6   0
//nu

void ex10 () {
    int n;
    cout << "Introduceti un numar: " << endl;
    cin >> n;
    int suma = 0;
    while ( n!= 0) {
        int uc = n%10;
        if ( uc % 2 == 0) {
            suma+=uc;
        }
            n/=10;
    }
    cout << "suma este: " << suma << endl;
}
//todo cifra maxima dintr-un numar pt  n=89371 cifraMax=0
// n!=0    uc    uc>ciframax     ciframax    n
// da       1        DA              1      8937
// DA       7         DA             7      893
// DA       3         nu            -       89
// DA       9        da            9        8
// DA       8        NU             -       0
// NU

//nu
void ex11() {
    int n;
    cout << "Introduceti un numar: " << endl;
    cin >> n;
    int ciframax= 0;
    while (n!=0) {
        int uc = n%10;
        if (uc > ciframax) {
            ciframax = uc;
        }
        n/=10;
    }
    cout << "cifra maxima este: " << ciframax << endl;
}
void ex12 () {
    int n;
    cout << "Introduceti un numar: " << endl;
    cin >> n;
    if ( n > 0) {
            int uc=n%10;
            cout <<"ultima cifra este: " << uc << endl;
            int rest = n/=10;
            cout << "restul este: " << rest << endl;
        }
    }
void ex13 () {
    int n;
    cout << "Introduceti un numar: " << endl;
    cin >> n;
    while (n!=0) {
        int uc = n%10;
        n/=10;
        cout << uc << endl;
    }
}
void ex14 () {
    int n;
    cout << "Introduceti un numar: " << endl;
    cin >> n;
    int contor=0;
    while ( n>0) {
        n/=10;
        contor++;
    }
    cout << "Numarul are: " << contor << " cifre" << endl;
}
void ex15 () {
    int n;
    int suma=0;
    cout << "Introduceti un numar: " << endl;
    cin >> n;
    while (n!=0) {
        suma = suma + n%10;
        n = n/10;
    }
    cout << "Suma este: " << suma << endl;
}
void ex16 () {
    int n;
    int contor=0;
    cout << "Introduceti un numar: " << endl;
    cin >> n;
    while ( n!=0) {
        int uc = n%10;
        n/=10;
        if ( uc % 2 == 0) {
           contor++;
        }
    }
    cout << "Numarul are: " << contor << " cifre pare" << endl;
}
//pornesc de la 0 pt ca toate cifrele sunt >=0;
void ex17 () {
    int n;
    cout << "Introduceti un numar: " << endl;
    cin >> n;
    int ciframax=0;
    while (n!=0) {
        int uc = n%10;
        if (uc > ciframax) {
            ciframax = uc;
        }
        n/=10;
    }
    cout << "Cifra maxima este: " << ciframax << endl;
}
//pornesc de la 9 pt ca toate cifrele sunt <=9;
void ex18 () {
    int n;
    cout << "Introduceti un numar: " << endl;
    cin >> n;
    int ciframin=9;
    while (n!=0) {
        int uc = n%10;
        if ( uc < ciframin) {
            ciframin = uc ;
        }
        n/=10;
    }
    cout << "Cifra minima este: " << ciframin << endl;
}
void ex19 () {
    int n;
    cout << "Introduceti un numar: " << endl;
    cin >> n;
    int oglindit = 0;
    while (n!=0) {
        int  cifra = n%10;
        oglindit = oglindit  * 10 + cifra;
        n/=10;
    }
    cout << "Oglindit este: " << oglindit << endl;
}
    void ex20() {
      int n;
    cout << "Introduceti un numar: " << endl;
    cin >> n;
    int oglindit= 0;
    int original = n;
    while (n!=0) {
        int cifra = n%10;
        oglindit = oglindit * 10 + cifra;
        n = n/10;
    }
        if ( original == oglindit) {
            cout << "Numarul este palindrom" << endl;
        }
    else {
        cout << "Numarul nu este palindrom" << endl;
    }
    }
#endif //INITIERE_EXERCITII_WHILE_H
