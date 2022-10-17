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

/* EXERCICE 5 :

int main (){
    double prixHT, kg,prixTTC,tva;

    cout << "Entrez le prix HT d'un kg de tomates"<<endl;
    cin >>prixHT;
    cout << "Entrez le nombre de kg "<<endl;
    cin >>kg;
    cout<< "Entrez le taux de tva"<<endl;
    cin >> tva;

    prixTTC = (((prixHT*tva/100)+prixHT)*kg);
    cout<<"Le pris TTC est de "<< prixTTC<<endl;

}*/

/*"------------------------------------------------------------------"*/

/*
 * ***PARTIE - 2 ***

 * EXERCICE 1 :


int main(){

    int entier;
    cin >> entier;

    if (entier>=56 && entier<=76){
        cout << "GAGNE"<<endl;
    }

   else{
        cout << "PERDU"<<endl;
    }

}*/

/* EXERCICE 2 :


int main (){
    int i ;
    for(i=8; i<=23; i++){
        cout<<i<<endl;}

}*/

/* EXERICE 3 :

int main(){
    int i=8;
    while(i<=23){
        cout<<i<<endl;
        i++;

    }
}*/

/* EXERCICE 4 :
int main() {
    int nbr;
    int compteur;
    int somme;
    while (compteur != 10){
        cin >> nbr;
        somme+=nbr;
        compteur++;
        cout << somme<<endl;

    }

}*/

/* EXERCICE 5:

int main(){
    int nbr=0;
    int temp=0;
    int compteur;
    cin >> temp;
    for(compteur=0 ;compteur<9 ;compteur++){
        cin >> nbr;
        if(temp>nbr){
            temp=nbr;
        }

    }
    cout << "le plus petit est "<<temp<<endl;
}*/


/*  EXERCICE 6:



int main(){
    int nbr(0);
    int input;

        cout << "Entrez voter nombre"<<endl;
        cin >> nbr;
    do{
        cout << " 1. pour ajouter 1 a votre nombre\n 2.pour multiplie par 2 votre nombre\n 3.pour soustraire 4\n 4.pour quitter "<<endl;
        cin >> input;

        switch (input){

        case 1:
            nbr+=1;
            cout << nbr<<endl;
            break;

        case 2:
            nbr*=2;
            cout << nbr<<endl;
            break;

        case 3:
            nbr=-4;
            cout << nbr <<endl;
            break;

        case 4:
            break;
        }
    }
    while(input!=4);



}*/


int main(){
    int nbr;
    int somme;
    int moyenne;
    cout << "Entrez un entier positif"<<endl;
    cin >> nbr;
    moyenne++;
    do {
    if(nbr<0){
        cout << "Erreur, Re tapez votre nombre" << endl;
         }
    }
    while(nbr);
    if(nbr>0) {

        somme+=nbr;
        cout << "Moyenne de "<< somme/moyenne<<endl;

        }
    if (nbr==0){
        break;
    }
  }

