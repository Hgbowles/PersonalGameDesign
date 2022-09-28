#include <string>

using std::string;

class Weapon {
   public:
      int damage;
      string name;
      int durability;

      void newWeapon(string name, int damage, int durability) {
         name = name;
         damage = damage;
         durability = durability;
      }
};