#include <stdlib.h>
#include <sys/time.h>

#include "../include/Random.h"

Random::Random()
{
	struct timeval tp;
	gettimeofday(&tp, NULL);
	long int ms = tp.tv_sec * 1000 + tp.tv_usec / 1000;
	this->reset_seed(ms);
}

Random::Random(long seed)
{
	this->reset_seed(seed);
}

void Random::reset_seed(long seed)
{
	srand(seed);
}

int Random::integer()
{
	return rand() % 19 + 1;
}

int Random::integer(int min, int max)
{
	return rand() % (min-max) + min;
}