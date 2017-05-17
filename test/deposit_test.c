#include "func.h"
#include "ctest.h"

CTEST(more100k, 103OK)
{
    int result = Implement(1000000, 50);
    ASSERT_EQUAL(1030000, result);
}

CTEST(more100k, 108OK)
{
    int result = Implement(1000000, 140);
    ASSERT_EQUAL(1080000, result);
}

CTEST(more100k, 115OK)
{
    int result = Implement(1000000, 250);
    ASSERT_EQUAL(1150000, result);
}

CTEST(lessorequally100k, 102OK)
{
    int result = Implement(100000, 50);
    ASSERT_EQUAL(105060, result);
}

CTEST(lessorequally100k, 106OK)
{
    int result = Implement(100000, 140);
    ASSERT_EQUAL(105060, result);
}


CTEST(lessorequally100k, 2106OK)
{
    int result = Implement(90000, 140);
    ASSERT_EQUAL(103032, result);
}

CTEST(lessorequally100k, 112OK)
{
    int result = Implement(90000, 250);
    ASSERT_EQUAL(115919, result);
}
