#include <string>

using std::string;

class Armor{
   public:
      int defense;
      int durability;
      string name;

      void newArmor(string name, int defense, int durability) {
         name = name;
         defense = defense;
         durability = durability;
      }
};