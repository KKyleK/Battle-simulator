#include <iostream>
using namespace std;

#include "Man.h"
#include "Warrior.h"
#include "Good_Warrior.h"
#include <gtest/gtest.h>




class test_Man : public testing::Test
{
protected:
  virtual void SetUp()
  {
  }

  virtual void TearDown()
  {
  }
 


};


TEST_F(test_Man, GetSymbol) {

    Man a(0,0);
    char symbol;

    symbol = a.get_symbol();
    
    EXPECT_EQ(symbol, 'M');
    
}





TEST_F(test_Man, Attack)
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

TEST_F(test_Man, Clone) {

    Man a(0,0);
    Warrior *curr;
    char symbol;

    curr = &a;
    curr -> clone();
    symbol = curr->get_symbol();    
    
    EXPECT_EQ(symbol, 'M');


}


