//#include <iostream>
//using namespace std;
//
//class Car
//{
//public:
//	Car(int gasoline) :gasolineGauge(gasoline)
//	{
//		cout << "Car ������" << endl;
//	}
//	int GetGasGauge()
//	{
//		return gasolineGauge;
//	}
//
//private:
//	int gasolineGauge;
//};
//
//class HybridCar : public Car
//{
//public:
//	HybridCar(int gasoline, int electric) :Car(gasoline), electricGauge(electric)
//	{
//		cout << "HybridCar ������" << endl;
//	}
//	int GetElecGauge()
//	{
//		return electricGauge;
//	}
//
//private:
//	int electricGauge;
//};
//
//class HybridWaterCar : public HybridCar
//{
//public:
//	HybridWaterCar(int gasoline, int electric, int water) :HybridCar(gasoline, electric), waterGauge(water)
//	{
//		cout << "HybridWaterCar ������" << endl;
//	}
//	void ShowCurrentGauge()
//	{
//		cout << "�ܿ� ���ָ�: " << GetGasGauge() << endl;
//		cout << "�ܿ� ���ⷮ: " << GetElecGauge() << endl;
//		cout << "�ܿ� ���ͷ�: " << waterGauge << endl;
//	}
//
//private:
//	int waterGauge;
//};
//
//int main(void)
//{
//	HybridWaterCar car1(100, 200, 300);
//	car1.ShowCurrentGauge();
//
//	return 0;
//}