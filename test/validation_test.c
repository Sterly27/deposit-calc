#include "func.h"
#include "ctest.h"


CTEST(input, sum_less10k)
{
    int result = Reckoning(9000,364);
    ASSERT_EQUAL(1, result);
}

CTEST(input, sum_more10k)
{
    int result = Reckoning(10001,366);
    ASSERT_EQUAL(0, result);
}
