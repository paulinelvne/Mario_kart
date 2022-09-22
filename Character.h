#ifndef Chara_H
#define Chara_H
#include <string>

//Classe Abstraite

class Character{
    public:
    //Constructeur
        Character();

    //Destructeur
        virtual ~Character(); //Destructeur toujours dynamique

    //Lecture
        inline float speed() const; //petites fcts pas besoin d'espace mémoire pour celles ci
        inline float max_speed() const;

    //Fonction
        virtual void Accelerate(); //virtual car pas la même accélération pour Yoshi
        void Break();

    //Fonction virtuelle pure
        virtual std::string WhatAmI() const = 0; //rend le compilateur dynamique. = 0 rend la classe abstraite

    protected:
        float speed_;
        float max_speed_;

};

//Lecture
float Character::speed() const{
    return speed_;
};

float Character::max_speed() const{
    return max_speed_;
};

#endif
