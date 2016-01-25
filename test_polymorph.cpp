
// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#include <fstream>
 
using namespace std;

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
  Yoshi* yoshi1 = new Yoshi();
  printf("nb_instances : %d \n",Character::nb_instances() ) ;
  printf("nb_yoshi : %d \n",Yoshi::nb_yoshi() ) ;
  Yoshi* yoshi2 = new Yoshi();
  //Character   character5 = Yoshi(); //La méthode accelerate de Character est appelée 
  // (pas celle de Yoshi. Car le type de character5 n'est pas pointeur.
  // Yoshi est casté en Character (à éviter)
  // Yoshi       character6 = Character(); marche pas
  // pas de cast : les méthodes virtual appelent celle de Yoshi
  Mario* mario1 = new Mario();
  Mario* mario2 = new Mario();
	  
	
  ofstream f("vitesse.txt", ios::out | ios::trunc);  // ouverture en écriture avec effacement du fichier ouvert
  f<<"Temps Yoshi1 Yoshi2 Mario1 Mario2" << endl;
  for (int i=0; i<10; i++){
    yoshi1->Accelerate();
    yoshi2->Accelerate();
    mario1->Accelerate();
    mario2->Accelerate();
    f<<yoshi1->speed()<<" "<< yoshi2->speed()<<" "<<mario1->speed()
    <<" "<<mario2->speed()<<endl;
  }
    for (int i=0; i<10; i++){
    yoshi1->Break();
    yoshi2->Break();
    mario1->Break();
    mario2->Break();
    f<<yoshi1->speed()<<" "<< yoshi2->speed()<<" "<<mario1->speed()
    <<" "<<mario2->speed()<<endl;
  }  
    
    
  
  // Yoshi*      character8 = new Character(); marche pas : vérification de type
  printf("nb_instances : %d \n",Character::nb_instances() ) ;
  printf("nb_yoshi : %d \n",Yoshi::nb_yoshi() ) ;
  printf("nb_mario : %d \n",Mario::nb_mario() ) ;
  
  yoshi1->Accelerate();
  yoshi2->Accelerate();
  //character5.Accelerate();
  //character6.Accelerate();
  mario1->Accelerate();
  mario2->Accelerate();

  printf("Yoshi1 speed : %f\n", yoshi1->speed());
  printf("Yoshi 2 speed : %f\n", yoshi2->speed());
  //printf("Character 5 speed : %f\n", character5.speed());
  //printf("Character 6 speed : %f\n", character6.speed());
  printf("Mario 1 speed : %f\n", mario1->speed());
  printf("Mario 2 speed : %f\n", mario2->speed());

  printf("\n" );

  yoshi1->Break();
  yoshi2->Break();
  //character5.Break();
  //character6.Break();
  mario1->Break();
  mario2->Break();

  printf("Yoshi1 speed  : %f\n", yoshi1->speed());
  printf("Yoshi 2 speed : %f\n", yoshi2->speed());
  //printf("Character 5 speed : %f\n", character5.speed());
  //printf("Character 6 speed : %f\n", character6.speed());
  printf("Mario 1 speed: %f\n", mario1->speed());
  printf("Mario 2 speed : %f\n", mario2->speed());
	
  yoshi1->WhatAmI();
  
  
  
  
  
  delete yoshi1;
  delete yoshi2;
  delete mario1;
  delete mario2;
  
  printf("nb_instances : %d \n",Character::nb_instances() ) ;
  printf("nb_yoshi : %d \n",Yoshi::nb_yoshi() ) ;
  printf("nb_mario : %d \n",Mario::nb_mario() ) ;
  
  }
  
	
  printf("nb_instances : %d \n",Character::nb_instances() ) ;
  printf("nb_yoshi : %d \n",Yoshi::nb_yoshi() ) ;
  printf("nb_mario : %d \n",Mario::nb_mario() ) ;
  
  
  
  
  
  
  return 0;
}
