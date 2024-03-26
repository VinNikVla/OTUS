// Local
#include "lib.h"

// Google
#include <gtest/gtest.h>

namespace {

TEST(Google_test, test_version) {
	EXPECT_GT(version(), 0);
}

}