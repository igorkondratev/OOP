#include <gtest/gtest.h>
#include "structure.h"

TEST(Vector_ent,Positive)
{
    Vector a(2);
    EXPECT_EQ((int)(a.get(0))-48, 0);

    EXPECT_EQ((int)(a.get(1))-48, 0);

    char b[5]="1001";
    Vector c(b);
    //std::cout<<"lol\n";
    EXPECT_EQ((int)(c.get(0))-48, 1);
    EXPECT_EQ((int)(c.get(1))-48, 0);
    EXPECT_EQ((int)(c.get(2))-48, 0);
    EXPECT_EQ((int)(c.get(3))-48, 1 );

}

TEST(inc_ili,Positive){
    char a[6] = "10011";
    char b[6] = "11001";
    Vector V(a);
    Vector V2(b);
    V+=V2;
    EXPECT_EQ((int)(V.get(0))-48, 1);
    EXPECT_EQ((int)(V.get(1))-48, 1);
    EXPECT_EQ((int)(V.get(2))-48, 0);
    EXPECT_EQ((int)(V.get(3))-48, 1 );
    EXPECT_EQ((int)(V.get(4))-48, 1 );

    Vector V3(a);
    V3=V3.ili(V2);
    EXPECT_EQ((int)(V3.get(0))-48, 1);
    EXPECT_EQ((int)(V3.get(1))-48, 1);
    EXPECT_EQ((int)(V3.get(2))-48, 0);
    EXPECT_EQ((int)(V3.get(3))-48, 1 );
    EXPECT_EQ((int)(V3.get(4))-48, 1 );
}

TEST(isk_ili,Positive){
    char a[6] = "10011";
    char b[6] = "11001";
    Vector V(a);
    Vector V2(b);
    V-=V2;
    EXPECT_EQ((int)(V.get(0))-48, 0);
    EXPECT_EQ((int)(V.get(1))-48, 1);
    EXPECT_EQ((int)(V.get(2))-48, 0);
    EXPECT_EQ((int)(V.get(3))-48, 1 );
    EXPECT_EQ((int)(V.get(4))-48, 0 );

    Vector V3(a);
    V3=V3.iskili(V2);
    EXPECT_EQ((int)(V3.get(0))-48, 0);
    EXPECT_EQ((int)(V3.get(1))-48, 1);
    EXPECT_EQ((int)(V3.get(2))-48, 0);
    EXPECT_EQ((int)(V3.get(3))-48, 1 );
    EXPECT_EQ((int)(V3.get(4))-48, 0 );
}

TEST(i,Positive){
    char a[6] = "10011";
    char b[6] = "11001";
    Vector V(a);
    Vector V2(b);
    V = V + V2;
    EXPECT_EQ((int)(V.get(0))-48, 1);
    EXPECT_EQ((int)(V.get(1))-48, 0);
    EXPECT_EQ((int)(V.get(2))-48, 0);
    EXPECT_EQ((int)(V.get(3))-48, 0 );
    EXPECT_EQ((int)(V.get(4))-48, 1 );

    Vector V3(a);
    V3=V3.i(V2);
    EXPECT_EQ((int)(V3.get(0))-48, 1);
    EXPECT_EQ((int)(V3.get(1))-48, 0);
    EXPECT_EQ((int)(V3.get(2))-48, 0);
    EXPECT_EQ((int)(V3.get(3))-48, 0 );
    EXPECT_EQ((int)(V3.get(4))-48, 1 );
}

TEST(dop,Positive){
    char a[6] = "10011";
    Vector V(a);
    ++V;
    EXPECT_EQ((int)(V.get(0))-48, 0);
    EXPECT_EQ((int)(V.get(1))-48, 1);
    EXPECT_EQ((int)(V.get(2))-48, 1);
    EXPECT_EQ((int)(V.get(3))-48, 0 );
    EXPECT_EQ((int)(V.get(4))-48, 0 );
    Vector V2(a);
    V2=V2.dop();
    EXPECT_EQ((int)(V2.get(0))-48, 0);
    EXPECT_EQ((int)(V2.get(1))-48, 1);
    EXPECT_EQ((int)(V2.get(2))-48, 1);
    EXPECT_EQ((int)(V2.get(3))-48, 0 );
    EXPECT_EQ((int)(V2.get(4))-48, 0 );


}

TEST(ogr,Positive){
    char a[9] = "01001100";
    Vector V(a);
    --V;
    EXPECT_EQ((int)(V.get(0))-48, 1);
    EXPECT_EQ((int)(V.get(1))-48, 0);
    EXPECT_EQ((int)(V.get(2))-48, 0);
    EXPECT_EQ((int)(V.get(3))-48, 1 );
    EXPECT_EQ((int)(V.get(4))-48, 1 );


    Vector V2(a);
    V2=V2.ogr();
    EXPECT_EQ((int)(V2.get(0))-48, 1);
    EXPECT_EQ((int)(V2.get(1))-48, 0);
    EXPECT_EQ((int)(V2.get(2))-48, 0);
    EXPECT_EQ((int)(V2.get(3))-48, 1 );
    EXPECT_EQ((int)(V2.get(4))-48, 1 );



}



