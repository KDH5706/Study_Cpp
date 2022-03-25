#include <iostream>
using namespace std;

class Car
{
public:
	Car(int fuel) : fuelGauge(fuel)
	{}
	void ShowCarState() { cout << "�ܿ� ���ᷮ: " << fuelGauge << endl; };

private:
	int fuelGauge;
};

class Truck : public Car
{
public:
	Truck(int fuel, int weight) : Car(fuel), freightWeight(weight)
	{}
	void ShowTruckState()
	{
		ShowCarState();
		cout << "ȭ���� ����: " << freightWeight << endl;
	}
private:
	int freightWeight;
};

int main()
{
	Car* pcar1 = new Truck(80, 200);
	Truck* ptruck1 = static_cast<Truck*>(pcar1);
	ptruck1->ShowTruckState();
	cout << endl;

	Car* pcar2 = new Car(120);
	Truck* ptruck2 = static_cast<Truck*>(pcar2);
	ptruck2->ShowTruckState();

	return 0;
}