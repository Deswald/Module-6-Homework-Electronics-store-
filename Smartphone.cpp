#include "Smartphone.h"

Smartphone::Smartphone(int batteryCapacity, float diagonal, float cameraMP, string os) : PortableEl(batteryCapacity), _diagonal(diagonal), _cameraMP(cameraMP), _os(os)
{
}
void Smartphone::ShowFeatures()
{
	cout << "Battery capacity (Milliamp per hour): " << _batteryCapacity << endl;
	cout << "Screen diagonal: " << _diagonal << endl;
	cout << "Camera megapixels: " << _cameraMP << endl;
}