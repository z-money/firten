#ifndef STAT_H
#define STAT_H

class Stat
{
public:
	int get_value();
	string get_name();

private:
	string name;
	int value;
};

#endif