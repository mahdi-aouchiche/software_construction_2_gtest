#include "../header/c-echo.hpp"
#include "gtest/gtest.h"

using namespace std;

TEST(EchoTest, HelloWorld) {
    char* test_val[3];
    test_val[0] = (char*)"../c-echo";
    test_val[1] = (char*)"Hello";
    test_val[2] = (char*)"World";
    EXPECT_EQ("Hello World", echo(3,test_val));
}

TEST(EchoTest, UpperCase) {
    char* test_val[3];
    test_val[0] = (char*)"../c-echo";
    test_val[1] = (char*)"HELLO";
    test_val[2] = (char*)"WORLD";
    EXPECT_EQ("HELLO WORLD", echo(3,test_val));
}

TEST(EchoTest, SpecialCharacter) {
    char* test_val[2];
    test_val[0] = (char*)"../c-echo";
    test_val[1] = (char*)"!@#";
    EXPECT_EQ("!@#", echo(2,test_val));
}

TEST(EchoTest, EmptyString) { 
    char* test_val[1];
    test_val[0] = (char*)"../c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, AlphaNumeric) {
    char* test_val[2]; 
    test_val[0] = (char*)"../c-echo";
    test_val[1] = (char*)"0123";
    EXPECT_EQ("0123", echo(2,test_val));
} 

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
