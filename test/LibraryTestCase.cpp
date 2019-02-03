#include <include/gmock/gmock.h>
#include <include/gtest/gtest.h>

#include <Library.h>

using namespace testing;

namespace all
{
    TEST(UnitTest_Library, get_set_equal)
    {
        Library library;

        library.set(10);

        EXPECT_EQ(10, library.get());
    }

    TEST(UnitTest_Library, get_set_not_equal)
    {
        Library library;

        library.set(11);

        EXPECT_NE(10, library.get());
    }
}
