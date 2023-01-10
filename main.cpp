#include <iostream>
#include "Laptop.h"
#include "PC.h"
#include "Smartphone.h"
#include "SmartWatch.h"
#include "TV.h"
using namespace std;

int main()
{
    IElectronics* storage[5];

    storage[0] = new Laptop(2, 60, 17.3, "Nvidia", "Intel", 16, 1024);
    storage[1] = new PC(5, "AMD", "Intel", 16, 2048);
    storage[2] = new Smartphone(2200, 5.5, 8, "Android");
    storage[3] = new SmartWatch(284, "Samsung Galaxy");
    storage[4] = new TV(10, 50, "VA");

    bool open = true;
    while (open)
    {
        cout << "Choose a product: : 1 - Laptop, 2 - PC, 3 - Smartphone, 4 - SmartWatch, 5 - TV, 0 quit" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            storage[0]->ShowFeatures();
            break;

        case 2:
            storage[1]->ShowFeatures();
            break;

        case 3:
            storage[2]->ShowFeatures();
            break;

        case 4:
            storage[3]->ShowFeatures();
            break;

        case 5:
            storage[4]->ShowFeatures();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "Select a product from 1 to 5 or 0 to exit" << endl;
            break;
        }
    }
    delete storage[0];
    delete storage[1];
    delete storage[2];
    delete storage[3];
    delete storage[4];

	return 0;
}