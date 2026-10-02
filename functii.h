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
          int cifra=numar%10;
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
int sumaCifrelorPare(int numar) {
      int suma = 0;
      while (numar > 0) {
          int cifra = numar % 10;
          if (cifra % 2 == 0) {
              suma = suma + cifra;
          }
          numar = numar / 10;
      }
      return suma;
  }
int ProdusulCifrelor(int numar) {
      int produsul = 1;
      while ( numar > 0 ) {
          int cifra = numar % 10;
          produsul = produsul*cifra;
          numar = numar/10;
      }
      return produsul;
  }
int ProdusulCifrelorPare(int numar) {
      int produsul = 1;
      while ( numar > 0 ) {
          int cifra = numar % 10;
          if (cifra % 2 == 0) {
              produsul = produsul*cifra;
          }
          numar = numar/10;
      }
      return produsul;
  }
// pt 3468
// numar > 0          cifra    c==cifra  contorCfire     numar = numar / 10
// da                  8          nu
//functoe ce returneaza numarul de apraitii unei cifre in numar
int contorAparitiiCifra(int numar,int cifraCautata) {
      int contorCifre = 0;
      while ( numar > 0 ) {
          int cifra = numar % 10;
          if ( cifraCautata == cifra) {
              contorCifre++;
          }
          numar = numar / 10;
      }
      return contorCifre;
  }

bool isDistincte(int numar) {
      while ( numar !=0 ) {
          int cifra = numar % 10;
          if (contorAparitiiCifra(numar,cifra)>1 ) {
              return false;
          }
          numar = numar / 10;
      }
      return true;
  }
//todo: 123 456  123*1000  123000+456 =123456
//todo: 3456  12 3456*100+12   345600+12 345612

//functie ce ne returneaza nuamrul de cifre al unui numar
int numarulDeCifre(int numar) {
      int contorcifre=0;
      while ( numar > 0 ) {
        contorcifre++;
          numar = numar / 10;
      }
      return contorcifre;
  }

int alipireNumire(int numar1,int numar2) {
      return numar1 * pow(10, numarulDeCifre(numar2)) + numar2;
  }
//3210
//8459  ct=0;
//numar > 0        cifre    ct%2!=0     suma           numar             ct
//  da             9          nu          -              845             1
//  da             5           da         5              84              2
//  da             4           da         5               8              3
//  da             8            da        13              0              4
// nu

int sumaCifrelorDePePozitiiImpare(int numar) {
      int suma=0;
      int ct=0;
      while ( numar > 0 ) {
          int cifra = numar % 10;
          if (ct % 2 != 0) {
              suma = suma + cifra;
          }

          numar = numar / 10;
          ct++;
      }
      return suma;
  }


int sumaCifrelorPePozitiiPare(int numar) {
      int suma=0;
      int ct=0;
      while ( numar > 0 ) {
          int cifra = numar % 10;
          if (cifra % 2 == 0) {
              suma = suma + cifra;
          }
          numar = numar / 10;
          ct++;
      }
      return suma;
  }


//functie ce returneaza prima cifra a unui numar

int primaCifraa(int numar) {
      if ( numar < 0) {
          numar = -numar;
      }
      while ( numar >= 10) {
          numar = numar / 10;
      }
      return numar;
  }

int ultimaCifraa(int numar) {
      if (numar < 0) {
          numar = -numar;
      }
  return numar%10;
  }
int primaSiUltima(int numar) {
     return  alipireNumire(primaCifra(numar),ultimaCifraa(numar));;
  }


//pt 1134
// c=0

int cifreDiferite(int numar) {
      if ( numar == 0) {
          return 1;
      }
      if ( numar < 0) { numar = -numar; }
      int contor = 0;
      int c=0;

      while ( c<=9 ) {
          if ( contorAparitiiCifra(numar,c)==1) {
              contor++;
          }
          c++;
      }
      return contor;
  }

// 235678   31  4
int radacinaDigitala(int numar) {

      int s=sumaCifrelor(numar);

      while ( s >10 ) {
          s=sumaCifrelor(s);
      }

      return s;
  }

//todo:
//pt 1134
// numar > 0          cifra          nou        p         numar
// da                   4             4         10           113
// da                   3             34        100          11
// da                   1            134        1000         1
// da                   1              1134       10000       0
//nu


int eliminareCifrePare(int numar) {

      int nou=0;
      int p=1;
      while ( numar > 0 ) {
          int cifra=numar % 10;
          if (cifra%2!=0) {
              nou=cifra*p+nou;
              p=p*10;
          }
          numar = numar / 10;
      }
      return nou;
  }
int ultimaCifra(int numar) {
      while ( numar != 0) {
          int uc = numar % 10;
          return uc;
      }
  }

#endif //INITIERE_FUNCTII_H
