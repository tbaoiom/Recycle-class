#ifndef RECYCLING_MACHINE_HPP
#define RECYCLING_MACHINE_HPP

#include <string>
#include <iostream>
#include <queue>
#include "recyclableItem.hpp"

class RecyclingMachine {
  public:
    // constructors
    RecyclingMachine();
    RecyclingMachine(int aCapacity);

    // getters
    int getNumOfItems();
    std::queue<RecyclableItem> getItems();

    // functions to check for empty/full
    bool isEmpty();
    bool isFull();
    bool addItem(RecyclableItem item); // add item to container

    void processOneItem(); // process and display front item of container

  private:
    std::queue<RecyclableItem> items; // queue container
    int capacity;
};

#endif