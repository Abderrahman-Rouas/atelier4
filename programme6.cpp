#include <iostream>
using namespace std;

class Test{
  public:
static int tableau[] ;
  public :
static int division(int indice, int diviseur){
return tableau[indice]/diviseur;}};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main()
{
int x, y;
cout << "Entrez indice de entier a diviser: " << endl;
cin >> x ;
cout << "Entrez le diviseur: " << endl;
cin >> y ;
try {               // instruction try
  if(y==0)            // condition d'exception
    throw  exception();

 else {
    cout << "Le resultat de la division est: "<< endl;
     cout <<Test::division(x,y) << endl;}}

catch(exception e){      //catch pour gerer l'exception
 cout<<"attention le diviseur ne doit pas etre = 0 !!"<<endl;
}

return 0;}


