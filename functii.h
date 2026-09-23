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
// 8459
// nuamr!=0  cif contor  numar
//   da       9    1     845
//   da       5     2    84
//   da       4
//
  int contorCifre(int numar) {
      //algorimul de contor
      int contor = 0;
      while ( numar !=0 ) {
          int cifr=numar%10;
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

// pt 1234
// <=10  Nu
int primaCifra(int numar) {
      while ( numar >=10 ) {
          numar = numar/10;
      }
      return numar;
  }
int sumaCifrelor(int numar) {
      int suma = 0;
      while ( numar !=0 ) {
          suma += numar % 10;
          numar = numar/10;
      }
      return suma;
  }
// functie ce are numele "apareCifre"  primeste ca parametru doua numere intregi si returneaza un bool(true/fals)
// pt 2345, cifra = 0
// n !=0 -- da
// cif= numar%10 --> elimina ultima cifra --> 234 --> 23 --> 2
// if cif == cifra --> afiseaza adevarat
// numar = numar/10 -- taie numarul pana nu mai ramane nimic
// cifra nu apartine numarului, deci va afisa fals (0)
// 12345 2
// numar!=0  cif  cif==cifra return numar
//   da      5     5==0 f     -     1234
//   eq      4     4==0 f    -      123
//   da       3      f        -     12
//   da       2      a       true
//
bool apareCifra(int numar,int cifra) {
      while ( numar !=0 ) {
          int cif=numar%10;
          if ( cif == cifra ) {
              return true;
          }
          numar = numar/10;
      }
      return false;
  }
//3210
//8359
//
int cifraDePePozitie(int numar, int pozitie) {
      int ct=0;
      while ( numar !=0) {
         int cif = numar%10;
          if (ct==pozitie) {
              return cif;
          }
          numar = numar/10;
           ct++;
      }
      return  -1;

  }

//algoritm de rasturnat
//pt 1234
// numar !=0   cif   inv               numar    return inv
// da           4     0 * 10 + 4=4       123         -
// da           3     0 * 10 + 3=3       12          -
// da           2     0 * 10 + 2=2        1          -
// da           0     0 * 10 + 1=1        0          4321
// nu
int rasturnatNumar(int numar) {
      int inv=0;
      while ( numar !=0 ) {
          int cif = numar%10;
          inv = inv*10+cif;
          numar = numar/10;
      }
      return inv;
  }
bool palindromNumar(int numar) {
      return numar == rasturnatNumar(numar);
  }

//cifra de control  123456 => 21=> 3 icra de control este 3 se calculeaza suma
//cifrelor pana cand rezultatule ste o cifra

//functie ce calculeaza cifra de control al unui numar
//199
// suma cifrelor     suma >=10    suma cifrelor      suma
//   19                 da            10               -
//    1                  nu            -               1
int cifraDeControl( int numar) {

      int suma=sumaCifrelor(numar);
      while ( suma>=10 ) {
         suma=sumaCifrelor(suma);
      }

      return suma;
//1234%10=>4
  }
int primasiultimaCifra(int numar) {
      int prima= primaCifra(numar);
      int uc=numar%10;
      return prima*10+uc;
  }


#endif //INITIERE_FUNCTII_H
