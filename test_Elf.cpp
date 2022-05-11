#include <iostream>
using namespace std;

#include "Elf.h"
#include "Warrior.h"
#include "Good_Warrior.h"
#include <gtest/gtest.h>




class test_Elf : public testing::Test
{
protected:
  virtual void SetUp()
  {
  }

  virtual void TearDown()
  {
  }
 


};


TEST_F(test_Elf, GetSymbol) {

    Elf a(0,0);
    char symbol;

    symbol = a.get_symbol();
    
    EXPECT_EQ(symbol, 'E');
    
}





TEST_F(test_Elf, AttackBow)
{
    int counter;
    Field c;
    stringstream actualOutput;
    string expected = "";
    bool success;


    success = c.load("field_ranged.txt");
    expected += "E                 OOOOO                           \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";

    
	c.evolve();      
	c.evolve();      
    

    c.write(actualOutput);

    EXPECT_EQ(expected,actualOutput.str());

}

TEST_F(test_Elf, MeleeAttack)
{
    int counter;
    Field c;
    stringstream actualOutput;
    string expected = "";
    bool success;


    success = c.load("field_ranged.txt");
    expected += "                                                  \n";
    expected += "    O                                             \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";
    expected += "                                                  \n";

    
    for(counter = 0; counter < 30; counter++) {  //Elf runs out of arrows and makes a melee attack
	c.evolve();      

    }

    c.write(actualOutput);
    
    EXPECT_EQ(expected,actualOutput.str());


}


TEST_F(test_Elf, Clone) {

    Elf a(0,0);
    Warrior *curr;
    char symbol;

    curr = &a;
    curr -> clone();
    symbol = curr->get_symbol();    
    
    EXPECT_EQ(symbol, 'E');


}


