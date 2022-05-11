#include <iostream>
#include <sstream>
#include <string>
using namespace std;
#include "Warrior.h"
#include <gtest/gtest.h>


class test_Warrior : public testing::Test
{
protected:
  virtual void SetUp()
  {
  }

  virtual void TearDown()
  {
  }
 
    Warrior a;
    Warrior b;




};


TEST_F(test_Warrior, DefaultConstructorTest)
{
    
    


}
