#include "Mario.h"
#include "Yoshi.h"
#include "Character.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<Character*> mk; //Création d'un conteneur de Character
    mk.push_back(new Mario());
    mk.push_back(new Yoshi());
    mk.push_back(new Yoshi(7)); //Ce conteneur contient un Mario et deux Yoshi de crêtes respectives 0 et 7

    for(std::vector<Character*>::iterator it=mk.begin(); 
        it != mk.end();
        ++it){ //iterateur option 1
            (*it)->Accelerate();   //On les fait accélérer un par un         
        }

    for(Character* m_et_y : mk){ //Range-based for
        if(m_et_y->WhatAmI() == "7 crested Yoshi"){
            m_et_y->Accelerate(); //On ne fait accélérer que Yoshi numéro 7
        }
    }

    for(auto it = mk.begin();
        it != mk.end();
        it++){ //iterateur option 2
            std::cout << (*it)->WhatAmI() << " accélère à " << (*it)->speed() << std::endl; //On affiche leur vitesse
            delete *it; //On supprime les pointeurs
        }

    mk.clear(); //n supprime le conteneur

};