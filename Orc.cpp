#include "Orc.h"




Orc::Orc(int row, int col) : Evil_Warrior(row,col, 15)

{
}



char Orc::get_symbol() const
{


    return adjust_symbol('O');
}


int Orc::roll_to_hit() const
{
    int hit;

    hit = roll(1, 100);

    return hit;
}





int Orc::roll_for_damage() const
{
    int damage;
    damage = roll(3, 15);

    return damage;
}



int Orc::needed_to_hit() const
{
    int need_to_hit = 50;


    return need_to_hit;
}


Warrior* Orc::clone() const
{
    Warrior *orc;
    orc = new Orc(0,0);



    return orc;
}
