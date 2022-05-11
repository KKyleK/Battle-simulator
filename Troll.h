#ifndef TROLL_H
#define TROLL_H

#include "Evil_Warrior.h"

/*****
 *
 *  CLASS: Troll
 *
 *  PURPOSE: Represents a warrior of type Troll on the battlefield. A Troll is
 *           a beefy warrior, with more health and damage
 *           who does less damage overall, but more consistantly
 *
 *  PUBLIC METHODS:
 *
 *  - constructor: Initializes a healthy orc and assigns him a position.
 *
 *  - get_symbol: Returns an 'O'
 */



class Troll: public Evil_Warrior
{

public:

   
    virtual char get_symbol() const; 
    Troll(int row, int col);      
    virtual Warrior *clone() const;

protected:


    virtual int roll_to_hit() const;
    virtual int roll_for_damage() const;
    virtual int needed_to_hit() const;
    virtual double get_range() const;




};


#endif
