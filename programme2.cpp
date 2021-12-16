#include <iostream>
#include<vector>

using namespace std;

int main()
{


   string date;     // declaration d'un variable
   cout<<"entrer 12 nombre ";     // demande à l'utilisateur de saisir un nombre
   cin>>date;

cout<<"le jour est "<<date.substr(0,2)<<endl;   // découpage de la chaine de caractere
cout<<"le mois est "<<date.substr(2,2)<<endl;
cout<<"l'annee est "<<date.substr(4,4)<<endl;
cout<<"l'heure est "<<date[8]<<date[9]<<"h "<<" et "<<date[10]<<date[11]<<" min"<<endl;
   return 0;
}

