#ifndef MAN_H
#define MAN_H



//class Warrior; //something here could be wrong
//#include "Warrior.h" //I feel Like I need this since the Class Warrior is used
#include "Good_Warrior.h"


class Man: public Good_Warrior
{

public:
    
    //Not sure if these should be called virtual... (parent was pure virtual)


    virtual char get_symbol() const;  //const so its a getter (no change to object)    
    Man(int row, int col);       //so symbol is NOT a parameter anymore.
    virtual Warrior *clone() const;


protected:


    virtual int roll_to_hit() const;
    virtual int roll_for_damage() const;
    virtual int needed_to_hit() const;



//range and attack do not need an implementation

private:
    


};


#endif

