#include "Mario.h"

//Constructeur
Mario::Mario() : Character(){ //Meme constrcteur que Character

};

//Destructeur
Mario::~Mario(){

};

//Fonctions
std::string Mario::WhatAmI() const{ //Retourne que le personnage est bien Mario
    return "Mario";
};