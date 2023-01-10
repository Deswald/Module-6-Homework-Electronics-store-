#include "SmartWatch.h"

SmartWatch::SmartWatch(int batteryCapacity, string modelName) : PortableEl(batteryCapacity), _modelName(modelName)
{
}
void SmartWatch::ShowFeatures()
{
	cout << "Battery capacity (Milliamp per hour): " << _batteryCapacity << endl;
	cout << "Model name: " << _modelName << endl;
}