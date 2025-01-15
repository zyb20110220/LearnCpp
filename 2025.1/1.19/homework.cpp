#include <iostream>
#include <string>
using namespace std;

int main()
{
	string emojis[] = {
		"(〃'▽'〃^)",
		"(￣▽￣ ?/)",
		"(* ^▽^*  )",
		"(ᇂ  _ᇂ  |||)"};
	for (const auto &emoji : emojis)
	{
		cout << " __^___^_" << endl;
		cout << emoji << endl;
	}
	return 0;
}
