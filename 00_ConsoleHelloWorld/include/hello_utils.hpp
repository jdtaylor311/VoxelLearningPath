#pragma once
#include <string>

// Count letters in a name. For this exercise, we'll define "letters" as:
// - alphabetic characters A-Z/a-z only (ignore spaces, punctuation, digits).
// Adjust if you prefer a different rule, but keep it consistent with tests.
int count_letters(const std::string& name);

// Return "Hello, <name>!"
std::string format_greeting(const std::string& name);