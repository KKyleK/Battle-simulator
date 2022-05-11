#include "Good_Warrior.h"



Good_Warrior::Good_Warrior(int row,
                           int col,
                           int hit_points): Warrior(row, col, hit_points) //symbol is still put in later
{


}


bool Good_Warrior::is_good() const
{
  return true;
}

