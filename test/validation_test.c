#include "func.h"
#include "ctest.h"


CTEST(Func_Reckoning, sum_less10k)
{
    int result = Reckoning(9000,364);
    ASSERT_EQUAL(1, result);
}

CTEST(Func_Reckoning, sum_more10k)
{
    int result = Reckoning(10001,366);
    ASSERT_EQUAL(0, result);
}

CTEST(Func_Reckoning, day_more365)
{
    int result = Reckoning(10000,366);
    ASSERT_EQUAL(1, result);
}

CTEST(Func_Reckoning, negative_sum)
{
    int result = Reckoning(-10000,364);
    ASSERT_EQUAL(1, result);
}

