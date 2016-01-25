
// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#
#include "Character.h"
#include "Yoshi.h"
#include "Mario.h"

// ===========================================================================
//                            Function declarations
// ===========================================================================


// ===========================================================================
//                                    MAIN
// ===========================================================================
int main(int argc, char* argv[]) {
  if(true){
  Yoshi       character2 = Yoshi();
  printf("nb_instances : %d \n",Character::nb_instances() ) ;
  printf("nb_yoshi : %d \n",Yoshi::nb_yoshi() ) ;
  Yoshi*      character4 = new Yoshi();
  //Character   character5 = Yoshi(); //La méthode accelerate de Character est appelée 
  // (pas celle de Yoshi. Car le type de character5 n'est pas pointeur.
  // Yoshi est casté en Character (à éviter)
  // Yoshi       character6 = Character(); marche pas
  Character*  character7 = new Yoshi(); //type character* donc pointeur donc le virtual est utilisé
  // pas de cast : les méthodes virtual appelent celle de Yoshi
  Mario* character8 = new Mario();
	  
	  
  
  // Yoshi*      character8 = new Character(); marche pas : vérification de type
  printf("nb_instances : %d \n",Character::nb_instances() ) ;
  printf("nb_yoshi : %d \n",Yoshi::nb_yoshi() ) ;
  printf("nb_mario : %d \n",Mario::nb_mario() ) ;
  
  character2.Accelerate();
  character4->Accelerate();
  //character5.Accelerate();
  //character6.Accelerate();
  character7->Accelerate();
  character8->Accelerate();

  printf("Character 2 speed : %f\n", character2.speed());
  printf("Character 4 speed : %f\n", character4->speed());
  //printf("Character 5 speed : %f\n", character5.speed());
  //printf("Character 6 speed : %f\n", character6.speed());
  printf("Character 7 speed : %f\n", character7->speed());
  printf("Character 8 speed : %f\n", character8->speed());

  printf("\n" );

  character2.Break();
  character4->Break();
  //character5.Break();
  //character6.Break();
  character7->Break();
  character8->Break();

  printf("Character 2 speed : %f\n", character2.speed());
  printf("Character 4 speed : %f\n", character4->speed());
  //printf("Character 5 speed : %f\n", character5.speed());
  //printf("Character 6 speed : %f\n", character6.speed());
  printf("Character 7 speed : %f\n", character7->speed());
  printf("Character 8 speed : %f\n", character8->speed());
	
  
  delete character4;
  delete character7;
  delete character8;
  character2.WhatAmI();
  printf("nb_instances : %d \n",Character::nb_instances() ) ;
  printf("nb_yoshi : %d \n",Yoshi::nb_yoshi() ) ;
  printf("nb_mario : %d \n",Mario::nb_mario() ) ;
  
  }
  
	
  printf("nb_instances : %d \n",Character::nb_instances() ) ;
  printf("nb_yoshi : %d \n",Yoshi::nb_yoshi() ) ;
  printf("nb_mario : %d \n",Mario::nb_mario() ) ;
  
  return 0;
}
