/*
 @ 0xCCCCCCCC
*/

#include <vector>

#include "gtest/gtest.h"

#include "kbase/auto_reset.h"

namespace {

std::vector<std::string> value {"hello", "world", "kc"};

}   // namespace

namespace kbase {

TEST(AutoResetTest, AutoReset)
{
    auto vec = value;

    {
        AutoReset<decltype(vec)> value_guard(&vec);
        vec.pop_back();
        vec.push_back("this is a test");
        EXPECT_NE(value, vec);
    }

    EXPECT_EQ(value, vec);
}

}   // namespace kbase
