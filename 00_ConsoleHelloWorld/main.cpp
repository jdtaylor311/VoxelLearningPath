// ============================================================================
// Console Hello World
// ============================================================================
// Key concepts to focus on: iostream basics, build/run workflow
//
// RULES:
// 1) Do NOT paste solutions from elsewhere. Write it yourself.
// 2) Keep the program minimal; one clear goal at a time.
// 3) Commit when you hit acceptance criteria.
//
// TASKS:
// 1. Print 'Hello, World!'.
// 2. Ask the user for their name on the same line (e.g., 'Name: ').
// 3. Read the name and print 'Hello, <name>!'
// 4. Wait for Enter before exiting so the user can read the output.
//
// ACCEPTANCE CRITERIA:
// - Program prints greeting with the actual input name.
// - No crashes on empty input.
//
// HINTS (read only if stuck):
// - Use std::cout, std::cin.
// - Use std::string for the name.
//
// Write your code below this line.
// -----------------------------------------------------------

#include <iostream>
#include <string>

using std::string;
using namespace std;

std::string helloWorld() {
	return "Hello, World\n";
}

std::string helloVariable(string name) {
	return "Hello, " + name + ".\n";
}

void waitForInput() {
	std::cout << "Press enter to exit...";
    std::cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
}

int main() {
	std::cout << helloWorld();
	std::cout << "What is your name?\n";

	string name = "";
	getline(cin, name);

	std::cout << helloVariable(name);
	waitForInput();
	return 0;
}

