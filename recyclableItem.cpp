#include "recyclableItem.hpp"

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

// constructors
RecyclableItem::RecyclableItem(){};
RecyclableItem::RecyclableItem(int aType, double aWeight){
  // if type is less than 0, set type as -1, the unknown
  // else, set as specified int type
  if (aType < 0) {
    type = UNKNOWN;
  }
  else {
    type = aType;
  }
  // if weight is less than 0, set to 1
  // otherwise, set to specified value
  if (aWeight < 0) {
    weight = DEFAULT_WEIGHT;
  }
  else {
    weight = aWeight;
  }
}

// getters
int RecyclableItem::getType(){
  return type;
}
std::string RecyclableItem::getTypeAsString(){
  switch (type) {
    case 0:
      return "Paper";
    case 1:
      return "Glass";
    case 2:
      return "Plastic";
    case 3:
      return "Metal";
    default:
      return "Unknown";
  }
}
double RecyclableItem::getWeight(){
  return weight;
}

// return string info of object using string stream
std::string RecyclableItem::toString(){
  std::stringstream ss;
  ss << "Type: " << getTypeAsString() << " (" << std::fixed << std::setprecision(2) << weight << " lbs)";
  return ss.str();
}

// overloading "<<" operator
std::ostream& operator << (std::ostream& os, RecyclableItem item){
  os << item.toString() << std::endl;
}