#include "lib/include.cpp"

#include "lib/base/include/Character.h"
#include "lib/utilities/include/Random.h"
#include <sqlite3.h>

using namespace std;

int main()
{
	sqlite3* db;
	int rc;

	rc = sqlite3_open("test.db", &db);
	// pair <int, int> loc;

	// loc = make_pair(22,44);

	// Character char_rand_loc;
	// Character char_set_loc(loc);

	// loc = char_rand_loc.get_loc();
	// cout << "Rand Loc Char" << endl;
	// cout << loc.first << endl;
	// cout << loc.second << endl;

	// loc = char_set_loc.get_loc();
	// cout << "Set Loc Char" << endl;
	// cout << loc.first << endl;
	// cout << loc.second << endl;

	// Random r;

	// cout << r.integer() << endl;
	// cout << r.integer() << endl;


	return 0;
}