#include <iostream>
using namespace std;

/* EXERCICE 1 :

int main() {
    cout << "Hello World!"<<endl;
    cout << "Voici un programme illustrant l'utilisation de cout!"<<endl;
}*/

/* EXERCICE 2 :


int main (){

    int longueur;
    int largeur;
    cout << "Entrez la longueur et la largeur de votre champs"<< endl;
    cin >> longueur;
    cin >> largeur;
    int resultat = longueur*largeur;
    cout << "Le perimetre de votre surface est de "<<resultat<< endl;


}*/

/* EXERCICE 3 :

int main(){
    int nombre;
    double reponse;
    cin>> nombre;
    reponse=nombre;
    cin>> nombre;
    reponse=reponse+nombre;
    cin>> nombre;
    reponse=reponse+nombre;
    cin>> nombre;
    reponse=reponse+nombre;
    cin>> nombre;
    reponse=reponse+nombre;
    reponse = reponse/5;
    cout<<reponse<<endl;

}*/

/* EXERCICE 4 :

int main (){
    int A;
    cin >> A;
    int B;
    cin >> B;
    int temp=0;
    temp=A;
    A=B;
    B=temp;
    cout << A<<B<<endl;

}*/

int main (){
    int prixHT;
    cin >>prixHT;
    int prixTTC;
    prixTTC= prixHT*1.2;
    cout<<"Le pris TTC est de "<< prixTTC<<endl;


}



