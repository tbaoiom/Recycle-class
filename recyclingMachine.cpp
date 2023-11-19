#include "recyclingMachine.hpp"
#include <string>
#include <iostream>
#include <queue>

RecyclingMachine::RecyclingMachine(int aCapacity) {
  capacity = aCapacity;
}

// getters
int RecyclingMachine::getNumOfItems(){
  return items.size();
}

std::queue<RecyclableItem> RecyclingMachine::getItems() {
  return items;
}

// functions to check if container is empty/full
bool RecyclingMachine::isEmpty(){
  return (items.size() == 0);
}
bool RecyclingMachine::isFull(){
  return (items.size() == capacity);
}
// adds object to container, if full dont add and return false
bool RecyclingMachine::addItem(RecyclableItem item){
  if (items.size() < capacity){
    items.push(item);
    return true;
  }
  else {
    std::cout << "The machine is full, unable to add item." << std::endl;
    return false;
  }
}

// function to process front item of container
void RecyclingMachine::processOneItem(){
  // display nothing to process if container is empty
  if (isEmpty()){
    std::cout << "Nothing to process!" << std::endl;
    return;
  }
  // display info and recommended action depending on type
  std::cout << items.front().toString() << std::endl;
  std::cout << "Recommended Action: ";
  switch (items.front().getType()) {
    case 0:
      std::cout << "Shredding" << std::endl;
      break;
    case 1:
      std::cout << "Crushing" << std::endl;
      break;
    case 2:
    case 3:
      std::cout << "Melting" << std::endl;
      break;
    default:
      std::cout << "Disposing" << std::endl;
      break;
    } 
  std::cout << "" << std::endl;
  items.pop(); // remove item
  capacity--; // update capacity
}