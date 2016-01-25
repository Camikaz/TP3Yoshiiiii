
// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Yoshi.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>

int Yoshi ::nb_yoshi_ = 0;

// ===========================================================================
//                       Definition of static attributes
// ===========================================================================

// ===========================================================================
//                                Constructors
// ===========================================================================
Yoshi::Yoshi() {
	nb_yoshi_ ++;
	colour_= RED;
}

// ===========================================================================
//                                 Destructor
// ===========================================================================
Yoshi::~Yoshi() {
	nb_yoshi_ --;
}

// ===========================================================================
//                               Public Methods
// ===========================================================================
void Yoshi::Accelerate() {
  if (*speed_ == 0.) *speed_ = 0.15;
  else *speed_ *= 1.15;

  if (*speed_ > max_speed_) *speed_ = max_speed_;
}

void Yoshi::Break() {
  if (*speed_ < 0.1) *speed_ = 0.;
  else *speed_ *= 0.8;
}

void Yoshi::WhatAmI() const{
	std::cout<< colour_to_string(colour_) + " Yoshiiii !\n" <<std::endl;
}

// ===========================================================================
//                              Protected Methods
// ===========================================================================
std::string Yoshi::colour_to_string(const Colour& c){
	switch(c) {
		case GREEN : return "Green"; break;
		case RED : return "Red"; break;
		case BLUE : return "Blue"; break;
		case YELLOW : return "Yellow"; break;
	}
	return "Uncoloured";
}
	
