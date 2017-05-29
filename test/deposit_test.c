#include "func.h"
#include "ctest.h"

CTEST(Func_Implement, more_100k_coefficient_103OK)
{
    int result = Implement(1000000, 50);
    ASSERT_EQUAL(1030000, result);
}

CTEST(Func_Implement, more_100k_coefficient_108OK)
{
    int result = Implement(1000000, 140);
    ASSERT_EQUAL(1080000, result);
}

CTEST(Func_Implement, more_100k_coefficient_115OK)
{
    int result = Implement(1000000, 250);
    ASSERT_EQUAL(1150000, result);
}

CTEST(Func_Implement,less_or_equally100k_coefficient_102OK)
{
    int result = Implement(100000, 50);
    ASSERT_EQUAL(105060, result);
}

CTEST(Func_Implement,less_or_equally100k_coefficient_106OK)
{
    int result = Implement(100000, 140);
    ASSERT_EQUAL(105060, result);
}


CTEST(Func_Implement,less_or_equally100k_coefficient_number2_106OK)
{
    int result = Implement(90000, 140);
    ASSERT_EQUAL(103032, result);
}

CTEST(Func_Implement,less_or_equally100k_coefficient_112OK)
{
    int result = Implement(90000, 250);
    ASSERT_EQUAL(115919, result);
}
