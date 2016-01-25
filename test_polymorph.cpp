
// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <vector> 
#include <list>
#include <iostream>
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
  
  Yoshi* yoshi1 = new Yoshi();
  Yoshi* yoshi2 = new Yoshi();
  //Character   character5 = Yoshi(); //La méthode accelerate de Character est appelée 
  // (pas celle de Yoshi. Car le type de character5 n'est pas pointeur.
  // Yoshi est casté en Character (à éviter)
  // Yoshi       character6 = Character(); marche pas
  // pas de cast : les méthodes virtual appelent celle de Yoshi
  Mario* mario1 = new Mario();
  Mario* mario2 = new Mario();
  
  std::list<Character*> personnages;
  
  personnages.push_back(yoshi1);
  personnages.push_back(yoshi2);
  personnages.push_back(mario1);
  personnages.push_back(mario2);
  
  std::cout<<"Taille du vecteur :" << personnages.size()<<endl;
  printf("nb_instances : %d \n",Character::nb_instances() ) ;
  printf("nb_yoshi : %d \n",Yoshi::nb_yoshi() ) ;
	
  ofstream f("vitesse.txt", ios::out | ios::trunc);  // ouverture en écriture avec effacement du fichier ouvert
  f<<"Temps Yoshi1 Yoshi2 Mario1 Mario2" << endl;
  
  std::list<Character*>::iterator it;
  
  //~ for (int i=0; i<10; i++){
	//~ for( it = personnages.begin(); it != personnages.end(); ++it){
		//~ (*it)->Accelerate();
		//~ f<<(*it)->speed()<<" ";
	//~ }
	//~ f<<endl;
  //~ }
  //~ 
  //~ for (int i=0; i<10; i++){
	//~ for( it = personnages.begin(); it != personnages.end(); ++it){
		//~ (*it)->Break();
		//~ f<<(*it)->speed()<<" ";
	//~ }
	//~ f<<endl;
  //~ }
  for (int k=0; k<10; k++){
	for(auto&& i:personnages){
		i->Accelerate();
		f<<i->speed()<<" ";	
	}
	f<<endl;
  }
    
  for (int k=0; k<10; k++){
	for(auto&& i:personnages){
		i->Break();
		f<<i->speed()<<" ";	
	}
	f<<endl;
  }
  
  // Yoshi*      character8 = new Character(); marche pas : vérification de type
  printf("nb_instances : %d \n",Character::nb_instances() ) ;
  printf("nb_yoshi : %d \n",Yoshi::nb_yoshi() ) ;
  printf("nb_mario : %d \n",Mario::nb_mario() ) ;
  

 
  yoshi1->WhatAmI();
  
  
  
  
  
  delete yoshi1;
  delete yoshi2;
  delete mario1;
  delete mario2;
  
  printf("nb_instances : %d \n",Character::nb_instances() ) ;
  printf("nb_yoshi : %d \n",Yoshi::nb_yoshi() ) ;
  printf("nb_mario : %d \n",Mario::nb_mario() ) ;
  

  
  
  
  
  
  return 0;
}
