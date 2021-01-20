#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, LongString) {
    char* test_val[6]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world"; test_val[3] = "I"; test_val[4] = "am"; test_val[5] = "Ashley";
    EXPECT_EQ("hello world I am Ashley", echo(6,test_val));
}

TEST(EchoTest, PunctuationString) {
    char* test_val[8]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world"; test_val[3] = ","; test_val[4] = "I"; test_val[5] = "love"; test_val[6] = "you"; test_val[7] = "!";       
    EXPECT_EQ("hello world , I love you !", echo(8,test_val));
}

TEST(EchoTest, NumString) {
    char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "1"; test_val[2] = "2"; test_val[3] = "3";
    EXPECT_EQ("1 2 3", echo(4,test_val));
}  


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

