#ifndef CHARACTER_H
#define CHARACTER_H

#include "../../utilities/include/Random.h"

using namespace std;

class Character
{
public:
	Character();
	Character(pair <int,int> loc);
	pair <int,int> get_loc();
	void ping();

private:
	Random rand_gen;
	pair <int,int> loc;
};

#endif
