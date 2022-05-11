#ifndef ELF_H
#define ELF_H

#include "Good_Warrior.h"


/*****
 *
 *  CLASS: Elf
 *
 *  PURPOSE: Represents a warrior of type elf on the battlefield. An elf is
 *           A ranged warrior, who does regular damage, but at range, and hits more oftern.
 *
 *  PUBLIC METHODS:
 *
 *  - constructor: Initializes a healthy orc and assigns him a position.
 *
 *  - get_symbol: Returns an 'O'
 * 
 */



class Elf: public Good_Warrior   
{

public:

    virtual char get_symbol() const;  //Not really sure why this is virtual to begin with    
    Elf(int row, int col);
    virtual Warrior *clone() const;    
    
protected:
    

    virtual int roll_to_hit() const;
    virtual int roll_for_damage() const;
    virtual int needed_to_hit() const;
    
    virtual double get_range() const;
    
    virtual void attack(Warrior *opponent);




private:


    int arrows;

};


#endif

