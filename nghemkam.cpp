#include <iostream>

using namespace std ;
int main(int argc, char**argv)
{ int i,p ;
int sum=1;
 int a=0 ;
 int b=1 ;
 int n ;
 cout << "Bonjour\n" ;
 cout << "Je vais vous calculer la somme de la suite de fibonacci, entre un nombre: " ;
cin >> n;

if (n<=1) {
cout <<"la somme de fibonacci n'existe pas\n";
}
else

for (i=3 ; i<=n ; i++){
p=b;
b=p+a;
sum=p+b;  
a=p;
}

cout <<"la somme de fibonacci vaut : "<<sum <<"\n";

 cout << "Travail termine  au-revoir ";
} 