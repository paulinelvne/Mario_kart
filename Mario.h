#include "Character.h"

class Mario : public Character{

    public:
    //Constructeur 
        Mario();

    //Destructeur
        virtual ~Mario();

    //Fonction
        std::string WhatAmI() const; //Définissions de la fct abstraite 


};