#ifndef RANDOM_H
#define RANDOM_H

class Random
{
public:
	Random();
	Random(long seed);
	int integer();
	int integer(int min, int max);
	void reset_seed(long seed);
};

#endif
