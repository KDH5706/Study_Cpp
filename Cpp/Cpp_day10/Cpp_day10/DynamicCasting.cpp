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
	Truck* ptruck1 = dynamic_cast<Truck*>(pcar1);

	Car* pcar2 = new Car(120);
	Truck* ptruck2 = dynamic_cast<Truck*>(pcar2);

	Truck* ptruck3 = new Truck(70, 150);
	Car* pcar3 = dynamic_cast<Car*>(ptruck3);

	return 0;
}