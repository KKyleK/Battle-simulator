#include "Elf.h"

/*****
 * 
 *  PRIVATE DATA MEMBERS:
 *
 *  - arrows: an elf has 15 arrows. after he uses all of them, he has to go
 *            melee.
 *
 *****/


Elf::Elf(int row, int col) : Good_Warrior(row,col, 15) 

{

    arrows = 100;
}



char Elf::get_symbol() const
{ 

    return adjust_symbol('E');
}


int Elf::roll_to_hit() const
{
    int hit;

    hit = roll(20, 100);

    return hit;
}



int Elf::roll_for_damage() const
{
    int damage;

    if (arrows > 0)
	damage = roll(1, 20);
    
    else
	damage = roll(1,5);
    
    return damage;
}



int Elf::needed_to_hit() const
{
    int need_to_hit = 60;


    return need_to_hit;
}

/*****
 *
 *  FUNCTION: get_range
 *
 *  PURPOSE: an Elf has more range if they have arrows to shoot.
 *
 *****/
double Elf::get_range() const
{

    double range;

    if (arrows > 0)
	range = 20;
    else
	range = 1.5;
    
    return range;
	
}

/*****
 *
 *  FUNCTION: attack
 *
 *  PURPOSE: Elfs either attack with their arrows or with their blades.
 *           When an elf makes an attack, they loose an arrow
 *
 *****/
void Elf::attack(Warrior *opponent)
{

    int damage;
    int hit;

    
    damage = roll_for_damage();
    hit = roll_to_hit();
    
    
    opponent->receive_attack(hit ,damage);
    
    arrows = arrows -1;
    
    return;
}




Warrior* Elf::clone() const
{
    Warrior *elf;
    elf = new Elf(0,0);

    return elf;
}
