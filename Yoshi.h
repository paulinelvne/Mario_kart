#include "Character.h"

class Yoshi : public Character{

    public:
    //Constructeur 
        Yoshi();
        Yoshi(int crete); //Deuxième constructeur

    //Destructeur
        virtual ~Yoshi();

    //Fonction
        void Accelerate(); //Deifinition de ses deux fonctions, elles sont bien virtual dans Character : ok
        std::string WhatAmI() const; //Définission de la fct abstraite
        inline float crete() const; ////petite fct pas besoin d'espace mémoire pour celle ci

    private :
        int nbr_crete_; //Nouvel attribut pour Yoshi : le numéro sur sa crête

};

float Yoshi::crete() const{
    return nbr_crete_; 
};