#include "PC.h"

PC::PC(int weight, string videocard, string processor, int ram, int hdd) : ConsumerEl(weight), _videocard(videocard), _processor(processor), _ram(ram), _hdd(hdd)
{
}
void PC::ShowFeatures()
{
	cout << "Weight: " << _weight << endl;
	cout << "Videocard: " << _videocard << endl;
	cout << "Processor: " << _processor << endl;
	cout << "RAM: " << _ram << endl;
	cout << "HDD: " << _hdd << endl;
}