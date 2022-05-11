#include "Troll.h"


Troll::Troll(int row, int col) : Evil_Warrior(row,col, 100)

{
}


char Troll::get_symbol() const
{   
    return adjust_symbol('T');
}


int Troll::roll_to_hit() const
{
    int hit;

    hit = roll(20, 90);

    return hit;
}





int Troll::roll_for_damage() const
{
    int damage;
    damage = roll(10, 30);

    return damage;
}



int Troll::needed_to_hit() const
{
    int need_to_hit = 40;


    return need_to_hit;
}



/*****
 *
 *  FUNCTION: get_range
 *
 *  PURPOSE: A troll has slightly more range than the average warrior
 *
 *****/
double Troll::get_range() const {
    
    return 2.85;

}


Warrior* Troll::clone() const
{
    Warrior *troll;
    troll = new Troll(0,0);



    return troll;
}
