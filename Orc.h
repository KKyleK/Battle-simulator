#ifndef ORC_H
#define ORC_H

#include "Evil_Warrior.h"

 
/*****
 *
 *  CLASS: Orc
 *
 *  PURPOSE: Represents a warrior of type Orc on the battlefield. An orc is 
 *           An average warrior, who does less damage overall, but more consistantly
 *
 *  PUBLIC METHODS:
 *
 *  - constructor: Initializes a healthy orc and assigns him a position.
 *
 *  - get_symbol: Returns an 'O'
 */



class Orc: public Evil_Warrior
{

public:


    virtual char get_symbol() const; 
    Orc(int row, int col); 
    virtual Warrior *clone() const;

protected:


    virtual int roll_to_hit() const;
    virtual int roll_for_damage() const;
    virtual int needed_to_hit() const;


private:



};


#endif

