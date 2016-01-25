
#ifndef CHARACTER_H__
#define CHARACTER_H__

// ===========================================================================
//                                  Includes
// ===========================================================================

//classe abstraite
class Character {
 public :
   // =========================================================================
  //                               Attribut classe
  // =========================================================================
  
 
  // =========================================================================
  //                               Constructors
  // =========================================================================
  
  Character();
  
  // =========================================================================
  //                                Destructor
  // =========================================================================
  virtual ~Character(); // desctructeur toujours virtual (car chaque classe fille doit avoir un desctruteur propre
  
  // =========================================================================
  //                                  Getters
  // =========================================================================
  inline float speed() const;
  inline static int nb_instances();
// inline sert a ecrire ici directement le code de la fonction (copie-colle celui de la fin)
// ne le faire que pour des fonctions triviales
  // =========================================================================
  //                                  Setters
  // =========================================================================

  // =========================================================================
  //                                 Operators
  // =========================================================================

  // =========================================================================
  //                              Public Methods
  // =========================================================================
  virtual void Accelerate();
  virtual void Break();
  virtual void WhatAmI() const = 0;

protected :
  // =========================================================================
  //                             Protected Methods
  // =========================================================================

  // =========================================================================
  //                                Attributes
  // =========================================================================
  static int nb_instances_;
  float* speed_;
  float max_speed_;
};

// ===========================================================================
//                            Getters' definitions
// ===========================================================================
inline float Character::speed() const {
  return *speed_;
}

inline int Character::nb_instances(){
	return nb_instances_;
}

// ===========================================================================
//                            Setters' definitions
// ===========================================================================

// ===========================================================================
//                           Operators' definitions
// ===========================================================================

// ===========================================================================
//                        Inline functions' definition
// ===========================================================================


#endif // CHARACTER_H__
