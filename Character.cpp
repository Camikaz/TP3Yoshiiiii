
// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Character.h"

int Character::nb_instances_ = 0;

// ===========================================================================
//                       Definition of static attributes
// ===========================================================================

// ===========================================================================
//                                Constructors
// ===========================================================================
Character::Character() {
  speed_     = new float(0);
  max_speed_ = 10.;
  nb_instances_ ++;
}

// ===========================================================================
//                                 Destructor
// ===========================================================================
Character::~Character() {
	nb_instances_ --;
	delete speed_;
}

// ===========================================================================
//                               Public Methods
// ===========================================================================
void Character::Accelerate() {
  if (*speed_ == 0.) *speed_ = 0.1;
  else *speed_ *= 1.1;

  if ( *speed_ > max_speed_ ) *speed_ = max_speed_;
}

void Character::Break() {
  if (*speed_ < 0.1) *speed_ = 0.;
  else *speed_ *= 0.9;
}

// ===========================================================================
//                              Protected Methods
// ===========================================================================
