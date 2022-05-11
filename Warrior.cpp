#include <cstdlib>
#include <cctype>
#include "Warrior.h"
#include <time.h>

/******************************************************************************
 * PROVIDED FUNCTIONS NOT TO BE ALTERED
 *****************************************************************************/






void Warrior::get_position(int &r, int &c) const
{
  r = row;
  c = col;
}




void Warrior::take_turn(Field &field)
{
  Warrior *opponent;
  double distance;

  if (is_alive())
  {
    opponent = field.find_nearest_opponent(this, distance);
    
    if (opponent != NULL)
    {
      if (distance <= get_range())

	  attack(opponent);

      else
        move_closer(field);
    }
  }
}


// attempts to move warrior in 9 different ways:
//
//   - row change: -1, 0, or +1
//   - col change: -1, 0, or +1
//
// and then moves warrior in the way that takes it closest to an opponent:

void Warrior::move_closer(Field &field)
{
  int delta_row;
  int delta_col;
  double distance;
  bool first_try = true;
  double min_distance;
  int best_delta_row;
  int best_delta_col;

  for (delta_row = -1; delta_row <= 1; delta_row++)
    for (delta_col = -1; delta_col <= 1; delta_col++)
      {
	row += delta_row;
	col += delta_col;

	if (!field.collision(this))
	  {
	    field.find_nearest_opponent(this, distance);

	    if (first_try || distance < min_distance)
	      {
		min_distance = distance;
		best_delta_row = delta_row;
		best_delta_col = delta_col;
		first_try = false;
	      }
	  }

	row -= delta_row;
	col -= delta_col;
      }

  row += best_delta_row;
  col += best_delta_col;
}


char Warrior::adjust_symbol(char symbol) const
{
  char adjusted;

  if (hit_points <= initial_hit_points / 2)
    adjusted = static_cast<char> (tolower(symbol));
  else
    adjusted = symbol;

  return adjusted;
}


/******************************************************************************
 * PROVIDED FUNCTIONS TO BE ALTERED
 *****************************************************************************/



Warrior::Warrior(int r, int c, int health): row(r), col(c)
{
    hit_points = health;
    initial_hit_points = hit_points; 
}



bool Warrior::is_alive() const
{
    bool alive;

    if (hit_points > 0)
	alive = true;

    else
	alive = false;

  return alive;    
}


/*****
 *
 *  FUNCTION: get_range()
 *
 *  PURPOSE: Returns the warriors range
 * 
 *  Input: A warrior
 *
 *  Output: the warriors range.
 *
 *****/
double Warrior::get_range() const
{
    double range = 1.5;
    
  return range;
}


/*****
 *
 *  FUNCTION: roll
 *
 *  PURPOSE: Returns a random integer between a high and a low
 *
 *****/
int Warrior::roll(int min, int max) const
{

    int random;

    random = rand() % (max - min+1) + min;
        
    return random;
}



/*****
 *
 *  FUNCTION: attack()
 *
 *  PURPOSE: Causes a warrior to attack, generating a random number to
 *           attack, and another for how much damage.
 * 
 *  Input: A warrior
 *
 *****/
void Warrior::attack(Warrior *opponent)
{

    int damage;
    int hit;


    damage = roll_for_damage();
    hit = roll_to_hit();
    

    opponent->receive_attack(hit ,damage);
    
    return;
}



/*****
 *
 *  FUNCTION: receive_attack()
 *
 *  PURPOSE: Updates a warriors health as they are being attacked.
 * 
 *  Input: A warrior
 *
 *  Output: The warriors health is updated.
 *
 *****/
void Warrior::receive_attack(int hit_roll, int damage)
{

    
    if (needed_to_hit() <= hit_roll){
	
	hit_points = hit_points - damage;
	
    }


    return;
}

