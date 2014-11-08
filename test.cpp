#include "gtest/gtest.h"
#include "geometry.h"

TEST(Point, getX)
{
  Point *p = new Point(1.0, 2.0);
  ASSERT_FLOAT_EQ(p->getX(), 1.0);
  delete p;
}

TEST(Point, getY)
{
  Point *p = new Point(1.0, 2.0);
  ASSERT_FLOAT_EQ(p->getY(), 2.0);
  delete p;
}

TEST(LineSegment, getLength)
{
  Point *p1 = new Point(3.0, 0.0);
  Point *p2 = new Point(0.0, 4.0);
  LineSegment *ls = new LineSegment(p1, p2);
  ASSERT_FLOAT_EQ(ls->getLength(), 5.0);
  delete p1, p2, ls;
}

TEST(LineSegment, getCenter)
{
  Point *p1 = new Point(3.0, 4.0);
  Point *p2 = new Point(1.0, 2.0);
  LineSegment *ls = new LineSegment(p1, p2);
  Point *c = ls->getCenter();
  ASSERT_FLOAT_EQ(2.0, c->getX());
  ASSERT_FLOAT_EQ(3.0, c->getY());
  delete p1, p2, ls, c;
}
int
main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

