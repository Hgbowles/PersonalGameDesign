#include <string>

using std::string;

class Weapon {
   public:
      int damage;
      string name;
      int durability;
      bool broken;

      void newWeapon(string name, int damage, int durability) {
         name = name;
         damage = damage;
         durability = durability;
         broken = false;
      }

      void weaponBreak() {
         if (durability <= 0) {
            broken = true;
         }
      }
};