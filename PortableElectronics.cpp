#include "PortableElectronics.h"

PortableEl::PortableEl(int batteryCapacity) : _batteryCapacity(batteryCapacity)
{
}
void PortableEl::ShowFeatures()
{
	cout << "Battery capacity: " << _batteryCapacity << endl;
}