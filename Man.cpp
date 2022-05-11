//So the private data members go here



#include "Man.h"




Man::Man(int row, int col) : Good_Warrior(row,col, 20)  //Need to put that '20' in another way

{
}



char Man::get_symbol() const   //not sure about this one. Should be good, redefined since symbol is now unique
{ 
//    cout << hit_points;    
    
    return adjust_symbol('M');
}


int Man::roll_to_hit() const
{
    int hit;

    hit = roll(1, 100);

    return hit;
}





int Man::roll_for_damage() const
{
    int damage;
    damage = roll(1, 20);

    return damage;
}
 


int Man::needed_to_hit() const
{
    int need_to_hit = 50;


  return need_to_hit;
}



Warrior* Man::clone() const
{
    Warrior *man;
    man = new Man(0,0);
    
    
    
    return man; 
}
