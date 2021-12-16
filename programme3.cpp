#include <iostream>
#include <list>
using namespace std;

int main()
{
   list <int> l={5,2,6,4,55,2,3,4};  //declaration de la liste
   list<int>::iterator it=l.begin();  // un iterateur pour facilite l'affichage
   cout<<"la list avant le tri est :"<<endl;
   for(it =l.begin(); it != l.end(); it++){  //boucle pour afficher la liste
   cout<<*it<<"-";
   }
    cout<<endl;
    l.sort();       //utilisation du fonction sort pour trier la liste
    cout<<"-------------------"<<endl;
     cout<<"la liste apres le trier est"<<endl;
     for(it =l.begin(); it != l.end(); it++){  // boucle pour afficher la liste trier
      cout<<*it<<"<=";
   }
    return 0;
}
