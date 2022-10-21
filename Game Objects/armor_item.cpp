#include <string>

using std::string;

class Armor{
   public:
      int defense;
      int durability;
      string name;
      bool broken;

      void newArmor(string name, int defense, int durability) {
         name = name;
         defense = defense;
         durability = durability;
         broken = false;
      }

      void armorBreak() {
         if (durability <= 0) {
            broken = true;
         }
      }
};