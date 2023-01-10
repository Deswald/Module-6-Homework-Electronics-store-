#include "ConsumerElectronics.h"

ConsumerEl::ConsumerEl(int weight) : _weight(weight)
{
}
void ConsumerEl::ShowFeatures()
{
	cout << "Weight: " << _weight << endl;
}