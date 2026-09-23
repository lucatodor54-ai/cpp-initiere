//
// Created by IOANA TODOR on 23/09/2026.
//

#ifndef INITIERE_FUNCTII_H
#define INITIERE_FUNCTII_H
#include <iostream>
using namespace std;
// functie ce returnam  ,numele functiei si ce primim
// f(x,y,z)=x+y+z+xyz   f(1,4,5)

//todo: functie ce returneaza numarul de  cifre al unui numar

  int contorCifre(int numar) {
      //algorimul de contor
      int contor = 0;
      while ( numar !=0 ) {
          contor++;
          numar=numar/10;
      }
    return contor;
  }

//functie ce returneaza numarul de cifre pare
int contorCifrePare(int numar) {
      int contor = 0;
      while ( numar !=0 ) {
          if ( numar % 2 == 0 ) {
              contor++;
          }
          numar = numar / 10;
      }
      return contor;
  }
//functie ce returneaza numarul de cifre impare dar fara sa folosesti while dar sa foloseti functiile de mai sus
int contorCifreImpare(int numar) {

      return contorCifre(numar)-contorCifrePare(numar);
  }


void solutie1() {

      cout<<"n=";
      int n;
      cin>>n;
      cout<<n<<" are "<<contorCifre(n)<<" cifre"<<endl;
      cout<<n<<" are "<<contorCifreImpare(n)<<" cifre impare"<<endl;
      cout<<n<<" are "<<contorCifrePare(n)<<" cifre pare"<<endl;


  }
#endif //INITIERE_FUNCTII_H
