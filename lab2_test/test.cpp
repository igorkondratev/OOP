#include <gtest/gtest.h>
#include "structure.h"
TEST(Verzera,Positive)
{
    Verzera a1(1);

    ASSERT_EQ(1, a1.Geta());

    EXPECT_NE(a1.Geta(),0);

}

TEST(Verzera_y,Positive){

    Verzera a1(5);
    EXPECT_NEAR(a1.rety(7),1.6892,3);

    a1.Seta(6);
    EXPECT_NEAR(a1.rety(5),3.54,3);

}

TEST(Verzera_points,Positive){

    Verzera a1(5);

    Point* min = new struct Point;
    Point *max = new struct Point;

    a1.coords(min,max);

    EXPECT_NEAR(min->x,-2.89,3);

    EXPECT_NEAR(max->x,2.89,3);
    delete min;
    delete max;

}

TEST(Verzera_s,Positive){
    Verzera a1(25);
    EXPECT_NEAR(a1.rets(),885000,3);

    a1.Seta(6);
    EXPECT_NEAR(a1.rets(),50976,3);

}

TEST(Verzera_v,Positive){

    Verzera a1(1);
    EXPECT_NEAR(a1.retv(),708,3);

    a1.Seta(36);
    EXPECT_NEAR(a1.retv(),33032448,3);

}

