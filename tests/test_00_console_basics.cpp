// ============================================================================
// Tests for 00_ConsoleHelloWorld & 01_ConsoleLoopsFunctions
// ============================================================================
// Suggested approach: extract small pure functions and test them here.
// Examples (you will create these functions in your code):
//
//   int count_letters(const std::string& name);
//   int compare_guess(int secret, int guess); // returns -1 if low, +1 if high, 0 if equal
//
// TASKS:
// 1) Write a function to count characters in a name (exclude spaces if you want).
// 2) Write a function that compares a guess to a secret number and returns -1/0/+1.
// 3) Add tests that cover normal, edge, and weird inputs (empty string, negative guesses).
//
// HINTS:
// - Keep I/O (cin/cout) out of your functions. Test return values instead.
//
// EXAMPLE TEST SHAPE (UNCOMMENT AND COMPLETE)
// #include <catch2/catch_all.hpp>
// TEST_CASE("compare_guess returns correct ordering") {
//     REQUIRE(compare_guess(50, 10) == -1);
//     REQUIRE(compare_guess(50, 90) == +1);
//     REQUIRE(compare_guess(50, 50) ==  0);
// }
