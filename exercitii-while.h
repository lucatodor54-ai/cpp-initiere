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



#endif //INITIERE_EXERCITII_WHILE_H
