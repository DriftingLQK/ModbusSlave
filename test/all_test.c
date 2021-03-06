//
// Created by Zhukov on 2020/7/23.
//

#include "all_test.h"

#include "unity.h"
#include "checksum_test.h"
#include "modbus_test.h"
#include "frame_conversion_test.h"
#include "frame_test.h"

void setUp(void)
{
    // set stuff up here
}

void tearDown(void)
{
    // clean stuff up here
}

int test_all(void)
{
    UNITY_BEGIN();
    test_checksum();
    test_conversion();
    test_modbus();
    test_frame();
    return UNITY_END();
}
