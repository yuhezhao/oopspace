#include <iostream>
#include "Card.h"

int Card::totalCards = 0;

Card::Card(const std::string& n, int c) : name(n), cost(c) {
  // increment totalCards count
  ++totalCards;
}

Card::~Card() {
  // decrement totalCards count
  --totalCards;
}

std::string Card::getName() const {
  // return the card name
  return name;
}

int Card::getCost() const {
  // return the card cost
  return cost;
}

int Card::getTotalCards() {
  // return the totalCards count
  return totalCards;
}
