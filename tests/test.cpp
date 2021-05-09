#include "../header/rectangle.hpp"
#include "../src/rectangle.cpp"

#include "gtest/gtest.h"

TEST(ConstructorTest, PosVal) {
    
    Rectangle rect1(3,4);
    
    EXPECT_EQ(rect1.get_width(), 3);
    EXPECT_EQ(rect1.get_height(), 4);	
}

TEST(ConstructorTest, NegVal) {

    Rectangle rect1(-3,-4);

    EXPECT_EQ(rect1.get_width(), 0);
    EXPECT_EQ(rect1.get_height(), 0);
}
TEST(ConstructorTest, ZeroVal) {

    Rectangle rect1(0,0);

    EXPECT_EQ(rect1.get_width(), 0);
    EXPECT_EQ(rect1.get_height(), 0);
}

TEST(AreaTest, PosVal) {

    Rectangle rect1(3,4);

    EXPECT_EQ(rect1.area(), 12);
}
TEST(AreaTest, NegVal) {

    Rectangle rect1(-3,-4);

    EXPECT_EQ(rect1.area(), 0);
}
TEST(AreaTest, ZeroVal) {

    Rectangle rect1(0,0);

    EXPECT_EQ(rect1.area(), 0);
}
TEST(AreaTest, LargeVal) {

    Rectangle rect1(100,50);

    EXPECT_EQ(rect1.area(), 5000);
}
////====================
TEST(PerimeterTest, PosVal) {

    Rectangle rect1(3,4);

    EXPECT_EQ(rect1.perimeter(), 14);
}
TEST(PerimeterTest, NegVal) {

    Rectangle rect1(-3,-4);

    EXPECT_EQ(rect1.perimeter(), 0);
}
TEST(PerimeterTest, ZeroVal) {

    Rectangle rect1(0,0);

    EXPECT_EQ(rect1.perimeter(), 0);
}
TEST(PerimeterTest, LargeVal) {

    Rectangle rect1(100,50);

    EXPECT_EQ(rect1.perimeter(), 300);
}
TEST(PerimeterTest, ZeroHeight) {

    Rectangle rect1(3, 0);

    EXPECT_EQ(rect1.perimeter(), 0);

}
TEST(PerimeterTest, ZeroWidth) {

    Rectangle rect1(0, 4);

    EXPECT_EQ(rect1.perimeter(), 0);
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
