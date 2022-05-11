#include <iostream>
using namespace std;

#include "Troll.h"
#include "Warrior.h"
#include "Evil_Warrior.h"
#include <gtest/gtest.h>




class test_Troll : public testing::Test
{
protected:
  virtual void SetUp()
  {
  }

  virtual void TearDown()
  {
  }
 


};


TEST_F(test_Troll, GetSymbol) {

    Troll a(0,0);
    char symbol;

    symbol = a.get_symbol();
    
    EXPECT_EQ(symbol, 'T');
    
}


TEST_F(test_Troll, Attack)
{
    Field c;
    stringstream actualOutput;
    string expected = "";
    bool success;


    success = c.load("field_troll.txt");
    expected += "mT                                                \n";
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

TEST_F(test_Troll, Clone) {

    Troll a(0,0);
    Warrior *curr;
    char symbol;

    curr = &a;
    curr -> clone();
    symbol = curr->get_symbol();    
    
    EXPECT_EQ(symbol, 'T');


}
