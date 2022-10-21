// parent class for enemies

#include <string>

using std::string;

class Enemy {
   public:
      int hitpoints;
      int armorclass;
      int damage;
      string name;

   void generateEnemy(int hp, int ac, int dmg, string name) {
      hitpoints = hp;
      armorclass = ac;
      damage = dmg;
      name = name;
   }




};