#include "Character.h"

//Constructor
Character::Character(){ 
    speed_ = 0; //vitesse initiale à 0
    max_speed_ = 10; //vitesse maximale à 10
};

//Destructeur
Character::~Character(){
    
};

//Fonction
void Character::Accelerate(){
    if(speed_ < max_speed_){
        speed_ = speed_ + 1; //Si la vitesse n'a pas atteint son maximum on accélère de 1
    }
};

void Character::Break(){
    if(speed_ > 0){
        speed_ = speed_ - 1; //Si la vitesse n'a pas atteint son minimum on décélère de 1
    }
};