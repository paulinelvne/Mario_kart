#include "Yoshi.h"

//Constructeur
Yoshi::Yoshi() : Character(){
    nbr_crete_ = 0; //Nouvel attribut mis à 0 par défault dans le premier contructeur
};

Yoshi::Yoshi(int crete) : Character(){
    nbr_crete_ = crete; //on peut choisir le numéro de la crête dans le second constructeur
};

//Destructeur
Yoshi::~Yoshi(){

};

//Fonctions
void Yoshi::Accelerate(){
    if(speed_ < max_speed_ - 1){ 
        speed_ = speed_ + 2; //Yoshi accélère deux fois plus vite que l'accélération par défaut
    }
    else{
        speed_ = max_speed_;
    }
};

std::string Yoshi::WhatAmI() const{
    std::string c = std::to_string(nbr_crete_) + " crested Yoshi"; //Retourne que le personnage est bien Yoshi et son numéro de crête
    return c;
};