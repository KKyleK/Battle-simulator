#include <iostream>
using namespace std;

#include "Orc.h"
#include "Warrior.h"
#include "Evil_Warrior.h"
#include <gtest/gtest.h>




class test_Orc : public testing::Test
{
protected:
  virtual void SetUp()
  {
  }

  virtual void TearDown()
  {
  }
 


};


TEST_F(test_Orc, GetSymbol) {

    Orc a(0,0);
    char symbol;

    symbol = a.get_symbol();
    
    EXPECT_EQ(symbol, 'O');
    
}



TEST_F(test_Orc, Attack)
{
    Field c;
    stringstream actualOutput;
    string expected = "";
    bool success;


    success = c.load("field_melee.txt");
    expected += "MO                                                \n";
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

    c.write(actualOutput);

    EXPECT_EQ(expected,actualOutput.str());
 
}

TEST_F(test_Orc, Clone) {

    Orc a(0,0);
    Warrior *curr;
    char symbol;

    curr = &a;
    curr -> clone();
    symbol = curr->get_symbol();    
    
    EXPECT_EQ(symbol, 'O');


}


