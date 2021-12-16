#include <iostream>
#include <list>
using namespace std;

int main()
{
   list <string> l={"said","bakkali","22"};  //declaration de la liste
   list<string>::iterator it=l.begin();  // un iterateur pour facilite l'affichage
   cout<<"la list avant le tri est :"<<endl;
   for(it =l.begin(); it != l.end(); it++){  //boucle pour afficher la liste
   cout<<*it<<"-";
   }
    cout<<endl;
    l.sort();       //utilisation du fonction sort pour trier la liste alphabetiquement
    cout<<"-------------------"<<endl;
     cout<<"la liste apres le tri est"<<endl;
     for(it =l.begin(); it != l.end(); it++){  // boucle pour afficher la liste trier
      cout<<*it<<"--";
   }
    return 0;
}
