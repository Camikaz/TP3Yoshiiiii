
// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#
#include "Character.h"
#include "Yoshi.h"


// ===========================================================================
//                            Function declarations
// ===========================================================================


// ===========================================================================
//                                    MAIN
// ===========================================================================
int main(int argc, char* argv[]) {
  Character   character1 = Character();
  Yoshi       character2 = Yoshi();
  Character*  character3 = new Character();
  Yoshi*      character4 = new Yoshi();
  //Character   character5 = Yoshi(); //La méthode accelerate de Character est appelée 
  // (pas celle de Yoshi. Car le type de character5 n'est pas pointeur.
  // Yoshi est casté en Character (à éviter)
  // Yoshi       character6 = Character(); marche pas
  Character*  character7 = new Yoshi(); //type character* donc pointeur donc le virtual est utilisé
  // pas de cast : les méthodes virtual appelent celle de Yoshi
  
  // Yoshi*      character8 = new Character(); marche pas : vérification de type

  character1.Accelerate();
  character2.Accelerate();
  character3->Accelerate();
  character4->Accelerate();
  //character5.Accelerate();
  //character6.Accelerate();
  character7->Accelerate();
  //character8->Accelerate();

  printf("Character 1 speed : %f\n", character1.speed());
  printf("Character 2 speed : %f\n", character2.speed());
  printf("Character 3 speed : %f\n", character3->speed());
  printf("Character 4 speed : %f\n", character4->speed());
  //printf("Character 5 speed : %f\n", character5.speed());
  //printf("Character 6 speed : %f\n", character6.speed());
  printf("Character 7 speed : %f\n", character7->speed());
  //printf("Character 8 speed : %f\n", character8->speed());

  printf("\n" );

  character1.Break();
  character2.Break();
  character3->Break();
  character4->Break();
  //character5.Break();
  //character6.Break();
  character7->Break();
  //character8->Break();

  printf("Character 1 speed : %f\n", character1.speed());
  printf("Character 2 speed : %f\n", character2.speed());
  printf("Character 3 speed : %f\n", character3->speed());
  printf("Character 4 speed : %f\n", character4->speed());
  //printf("Character 5 speed : %f\n", character5.speed());
  //printf("Character 6 speed : %f\n", character6.speed());
  printf("Character 7 speed : %f\n", character7->speed());
  //printf("Character 8 speed : %f\n", character8->speed());

  return 0;
}
