#pragma once

class Wassertank
{
public:
	void setGroesse(int menge);
	void ausleeren();
	void fuellen(int menge);
	int getFuelstand();

private:
	unsigned int größe;
	unsigned int füllstand = 0;

};
