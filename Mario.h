
#ifndef MARIO_H__
#define MARIO_H__
// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Character.h"

#include <string>

class Mario : public Character {
 public :
  // =========================================================================
  //                               Constructors
  // =========================================================================
  Mario();
  void WhatAmI() const;

  // =========================================================================
  //                                Destructor
  // =========================================================================
  virtual ~Mario();

  // =========================================================================
  //                                  Getters
  // =========================================================================
  inline static int nb_mario();
  // =========================================================================
  //                                  Setters
  // =========================================================================

  // =========================================================================
  //                                 Operators
  // =========================================================================

  // =========================================================================
  //                              Public Methods
  // =========================================================================
  void Break();

 protected :
  // =========================================================================
  //                             Protected Methods
  // =========================================================================

  // =========================================================================
  //                                Attributes
  // =========================================================================
  static int nb_mario_;
};

// ===========================================================================
//                            Getters' definitions
// ===========================================================================
  inline int Mario::nb_mario(){
	return nb_mario_;
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


#endif // MARIO_H__
