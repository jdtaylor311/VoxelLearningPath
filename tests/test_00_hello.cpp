// Tests for 00_consolehelloworld
// focus on *pure* functions; leave i/o (cin/out) in main.cpp

#include <catch2/catch_all.hpp>
#include <string>
#include "hello_utils.hpp"

TEST_CASE("count_letters counts only alphabetic characters") {
	SECTION("simple name") {
		REQUIRE(count_letters("Luke") == 4);
	}
}

TEST_CASE("format_greeting basic") {
	REQUIRE(format_greeting("Luke") == "Hello, Luke!");
}