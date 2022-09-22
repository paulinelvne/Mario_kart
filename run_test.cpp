#include "gtest/gtest.h"
#include "Character.h"
#include "Mario.h"
#include "Yoshi.h"

//--------------------------------------------------------------------------------------------------------------------
//                                       Tests de la classe Character
//-------------------------------------------------------------------------------------------------------------


//Test Constructeur

// TEST(Constructor, CharacterTestConstructor) {
//     Character* perso = new Character();
//     EXPECT_TRUE(perso->speed() == 0);
//     EXPECT_TRUE(perso->max_speed() == 10);
//     delete perso;   
// }

// //Test Fonctions

// TEST(Accelerate, CharacterTestAccelerate) {
//     Character* perso = new Character();
    
//     perso->Accelerate();
//     EXPECT_TRUE(perso->speed() == 1);
//     EXPECT_TRUE(perso->max_speed() == 10);
   
//     perso->Accelerate();
//     perso->Accelerate();
//     perso->Accelerate();
//     perso->Accelerate();
//     perso->Accelerate();
//     perso->Accelerate();
//     perso->Accelerate();
//     perso->Accelerate();
//     EXPECT_TRUE(perso->speed() == 9);
//     EXPECT_TRUE(perso->max_speed() == 10);
    
//     perso->Accelerate();
//     EXPECT_TRUE(perso->speed() == 10);
//     EXPECT_TRUE(perso->max_speed() == 10);
    
//     perso->Accelerate();
//     EXPECT_TRUE(perso->speed() == 10);
//     EXPECT_TRUE(perso->max_speed() == 10);
//     delete perso;    
// }

// TEST(Break, CharacterTestBreak) {
//     Character* perso = new Character();
    
//     perso->Accelerate();   
//     perso->Accelerate();
//     perso->Accelerate();
    
//     EXPECT_TRUE(perso->speed() == 3);
//     EXPECT_TRUE(perso->max_speed() == 10);

//     perso->Break();
//     EXPECT_TRUE(perso->speed() == 2);
//     EXPECT_TRUE(perso->max_speed() == 10);

//     perso->Break();
//     perso->Break();
//     EXPECT_TRUE(perso->speed() == 0);
//     EXPECT_TRUE(perso->max_speed() == 10);

//     perso->Break();
//     EXPECT_TRUE(perso->speed() == 0);
//     EXPECT_TRUE(perso->max_speed() == 10);
//     delete perso;
// }

//--------------------------------------------------------------------------------------------------------------------
//                                       Tests de la classe Mario
//-------------------------------------------------------------------------------------------------------------

//Test Constructeur

TEST(Constructor, MarioTestConstructor) {
    Mario* mario = new Mario();
    EXPECT_TRUE(mario->speed() == 0);
    EXPECT_TRUE(mario->max_speed() == 10);
    delete mario;
}

//Test Fonctions

TEST(Accelerate, MarioTestAccelerate) {
    Mario* mario = new Mario();
    
    mario->Accelerate();
    EXPECT_TRUE(mario->speed() == 1);
    EXPECT_TRUE(mario->max_speed() == 10);
   
    mario->Accelerate();
    mario->Accelerate();
    mario->Accelerate();
    mario->Accelerate();
    mario->Accelerate();
    mario->Accelerate();
    mario->Accelerate();
    mario->Accelerate();
    EXPECT_TRUE(mario->speed() == 9);
    EXPECT_TRUE(mario->max_speed() == 10);
    
    mario->Accelerate();
    EXPECT_TRUE(mario->speed() == 10);
    EXPECT_TRUE(mario->max_speed() == 10);
    
    mario->Accelerate();
    EXPECT_TRUE(mario->speed() == 10);
    EXPECT_TRUE(mario->max_speed() == 10);
    delete mario;
    
}

TEST(Break, MarioTestBreak) {
    Mario* mario = new Mario();
    
    mario->Accelerate();   
    mario->Accelerate();
    mario->Accelerate();
    
    EXPECT_TRUE(mario->speed() == 3);
    EXPECT_TRUE(mario->max_speed() == 10);

    mario->Break();
    EXPECT_TRUE(mario->speed() == 2);
    EXPECT_TRUE(mario->max_speed() == 10);

    mario->Break();
    mario->Break();
    EXPECT_TRUE(mario->speed() == 0);
    EXPECT_TRUE(mario->max_speed() == 10);

    mario->Break();
    EXPECT_TRUE(mario->speed() == 0);
    EXPECT_TRUE(mario->max_speed() == 10);
    delete mario;
    
}

TEST(WhatAmI, MarioTestWhatAmI) {
    Mario* mario = new Mario();
    EXPECT_TRUE(mario->WhatAmI() == "Mario");
    delete mario;
}

//--------------------------------------------------------------------------------------------------------------------
//                                       Tests de la classe Yoshi
//-------------------------------------------------------------------------------------------------------------

//Test Constructeur

TEST(Constructor, YoshiTestConstructor) {
    Yoshi* yoshi = new Yoshi();
    EXPECT_TRUE(yoshi->speed() == 0);
    EXPECT_TRUE(yoshi->max_speed() == 10);
    delete yoshi;
}

//Test Fonctions

TEST(Accelerate, YoshiTestAccelerate) {
    Yoshi* yoshi = new Yoshi();
    
    yoshi->Accelerate();
    EXPECT_TRUE(yoshi->speed() == 2);
    EXPECT_TRUE(yoshi->max_speed() == 10);
   
    yoshi->Accelerate();
    yoshi->Accelerate();
    yoshi->Accelerate();
    yoshi->Accelerate();
    yoshi->Accelerate();
    yoshi->Accelerate();
    EXPECT_TRUE(yoshi->speed() == 10);
    EXPECT_TRUE(yoshi->max_speed() == 10);

    yoshi->Break();
    EXPECT_TRUE(yoshi->speed() == 9);
    EXPECT_TRUE(yoshi->max_speed() == 10);
    yoshi->Accelerate();
    EXPECT_TRUE(yoshi->speed() == 10);
    EXPECT_TRUE(yoshi->max_speed() == 10);
    
    delete yoshi;
    
}

TEST(Break, YoshiTestBreak) {
    Yoshi* yoshi = new Yoshi();
    
    yoshi->Accelerate();   
    yoshi->Accelerate();

    
    EXPECT_TRUE(yoshi->speed() == 4);
    EXPECT_TRUE(yoshi->max_speed() == 10);

    yoshi->Break();
    yoshi->Break();
    EXPECT_TRUE(yoshi->speed() == 2);
    EXPECT_TRUE(yoshi->max_speed() == 10);

    yoshi->Break();
    yoshi->Break();
    EXPECT_TRUE(yoshi->speed() == 0);
    EXPECT_TRUE(yoshi->max_speed() == 10);

    yoshi->Break();
    EXPECT_TRUE(yoshi->speed() == 0);
    EXPECT_TRUE(yoshi->max_speed() == 10);
    delete yoshi;
    
}

TEST(WhatAmI, YoshiTestWhatAmI) {
    Yoshi* yoshi = new Yoshi();
    EXPECT_TRUE(yoshi->WhatAmI() == "0 crested Yoshi");
    delete yoshi;
}

TEST(WhatAmI2, YoshiTestWhatAmI2) {
    Character* yoshi = new Yoshi();
    yoshi->Accelerate();
    EXPECT_TRUE(yoshi->speed() == 2);
    EXPECT_TRUE(yoshi->max_speed() == 10);
   
    
    EXPECT_TRUE(yoshi->WhatAmI() == "0 crested Yoshi");
    delete yoshi;
}

TEST(WhatAmI3, YoshiTestWhatAmI3) {
    Yoshi* yoshi = new Yoshi(5);

    EXPECT_TRUE(yoshi->crete() == 5);
    EXPECT_TRUE(yoshi->WhatAmI() == "5 crested Yoshi");

    delete yoshi;
   
}

TEST(WhatAmI4, YoshiTestWhatAmI4) {
    Character* yoshi = new Yoshi(5);

    Yoshi* y = static_cast<Yoshi*>(yoshi);

    EXPECT_TRUE(y->crete() == 5);
    EXPECT_TRUE(yoshi->WhatAmI() == "5 crested Yoshi");

    delete yoshi;
   
}


