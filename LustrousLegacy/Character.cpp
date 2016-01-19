#include "Character.h"

/*********************************************************************
Player class default constructor.
\brief Requires a texture for instantiation.
*********************************************************************/
Character::Character(const sf::Texture& imagePath) :
	Actor(imagePath) {
	setStopCounter(0);
}

/*********************************************************************
Player class virtual destructor.
*********************************************************************/
Character::~Character() {
}

PlayerController& Character::getPlayerController() {
	return movement;
}