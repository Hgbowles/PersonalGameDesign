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

      int intelligence;
      int wisdom;
      int strength;
      int dexterity;
      int charisma;
      int constitution;

      void generateStats() {
         intelligence = rand() % 20 + 1;
         wisdom = rand() % 20 + 1;
         strength = rand() % 20 + 1;
         dexterity = rand() % 20 + 1;
         charisma = rand() % 20 + 1;
         constitution = rand() % 20 + 1;
      }
};