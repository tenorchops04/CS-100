#include "gtest/gtest.h"

#include "composite_test.hpp"
#include "gunProduct_test.hpp"
#include "gunFactory_test.hpp"
#include "allPatterns_test.hpp"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
