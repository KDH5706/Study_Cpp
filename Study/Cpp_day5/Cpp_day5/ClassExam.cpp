//#include <iostream>
//using namespace std;
//
//class Car
//{
//public:
//	Car(int gasoline) :gasolineGauge(gasoline)
//	{
//		cout << "Car 생성자" << endl;
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
//		cout << "HybridCar 생성자" << endl;
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
//		cout << "HybridWaterCar 생성자" << endl;
//	}
//	void ShowCurrentGauge()
//	{
//		cout << "잔여 가솔린: " << GetGasGauge() << endl;
//		cout << "잔여 전기량: " << GetElecGauge() << endl;
//		cout << "잔여 워터량: " << waterGauge << endl;
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