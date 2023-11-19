#ifndef RECYLCABLE_ITEM_HPP
#define RECYCLABLE_ITEM_HPP

#include <string>

class RecyclableItem{
  public:
    // constructors
    RecyclableItem();
    RecyclableItem(int type, double weight);
    RecyclableItem(int type);

    // defined item types
    static const int UNKNOWN = -1;
    static const int PAPER = 0;
    static const int GLASS = 1;
    static const int PLASTIC = 2;
    static const int METAL = 3;

    // getters
    int getType();
    std::string getTypeAsString();
    double getWeight();

    std::string toString(); // return string info of object

    // overloading "<<" operator
    friend std::ostream& operator << (std::ostream& os, RecyclableItem item);

  private:
    int type;
    double weight;
    static const double DEFAULT_WEIGHT = 1;
    
};

#endif