#include <string>

#include "armor_item.cpp"
#include "weapon_item.cpp"

using std::string;

class Character {
   public:
      int hitpoints;
      Armor armor;
      string name;
      Weapon weapon;
};