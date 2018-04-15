#include <utility>
#include <iostream>
#include <stdlib.h>
#include <sys/time.h>

#include "../include/Character.h"

Character::Character()
{
	this->loc = make_pair(rand_gen.integer(0,100),rand_gen.integer(0,100));
}

Character::Character(pair<int,int> loc)
{
	this->loc = loc;
}

void Character::ping()
{
	cout << "pong" << endl;
}

pair <int, int> Character::get_loc()
{
	return this->loc;
}
