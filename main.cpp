#include <iostream>
#include "recyclingMachine.hpp"

int main() {
  const int CAPACITY = 4;
  
  // create machine and item objects
  RecyclingMachine machine(CAPACITY);
  RecyclableItem item1(2, 1.2);
  RecyclableItem item2(1, 0.5);
  RecyclableItem item3(3, 4.7);
  RecyclableItem item4(7, 2.1);
  RecyclableItem item5(0, 3.5);

  // add items to machine object
  machine.addItem(item1);
  machine.addItem(item2);
  machine.addItem(item3);
  machine.addItem(item4);
  machine.addItem(item5);

  // loop and process until machine is empty
  while (!machine.isEmpty()){
    machine.processOneItem();
  }
  return 0;
}