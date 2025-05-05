/**
 * Unit Tests for the class
**/

#include <gtest/gtest.h>
#include "Guesser.h"

class GuesserTest : public ::testing::Test
{
	protected:
		GuesserTest(){} //constructor runs before each test
		virtual ~GuesserTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

// Example "smoke test" (can be deleted)
TEST(GuesserTest, smoke_test)
{
  Guesser object0("Secret");
  ASSERT_EQ( 1+1, 2 );
  // test if entering a match more than 3 times throws an error
  EXPECT_EQ(1, object0.match("Secret"));
  EXPECT_EQ(1, object0.match("Secret"));
  EXPECT_EQ(1, object0.match("Secret"));
  EXPECT_EQ(1, object0.match("Secret"));
  // test if tries gets reset
  Guesser object1("Secret");
  EXPECT_EQ(0, object1.match("secret"));
  EXPECT_EQ(0, object1.match("secret"));
  EXPECT_EQ(1, object1.match("Secret"));
  EXPECT_EQ(0, object1.match("secret"));
  EXPECT_EQ(1, object1.match("Secret"));
  // check to see if brute force is triggered right away
  Guesser object2("Secret");
  EXPECT_EQ(0, object2.match("password"));
  EXPECT_EQ(0, object2.match("Secret"));



}
