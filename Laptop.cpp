#include "Laptop.h"

Laptop::Laptop(int weight, int batteryCapacity, float diagonal, string videocard, string processor, int ram, int hdd) :
	ConsumerEl(weight), PortableEl(batteryCapacity), _diagonal(diagonal), _videocard(videocard), _processor(processor), _ram(ram), _hdd(hdd)
{
}
void Laptop::ShowFeatures()
{
	cout << "Weight: " << _weight << endl;
	cout << "Battery capacity (Watt per hour): " << _batteryCapacity << endl;
	cout << "Screen diagonal: " << _diagonal << endl;
	cout << "Videocard: " << _videocard << endl;
	cout << "Processor: " << _processor << endl;
	cout << "RAM: " << _ram << endl;
	cout << "HDD: " << _hdd << endl;
}