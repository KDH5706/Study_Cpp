//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class PermanentWorker
//{
//public:
//	PermanentWorker(const char* name, int money):salary(money)
//	{
//		strcpy(this->name, name);
//	}
//	int GetPay() const
//	{
//		return salary;
//	}
//	void ShowSalaryInfo() const
//	{
//		cout << "name: " << name << endl;
//		cout << "salary: " << GetPay() << endl << endl;
//	}
//
//private:
//	char name[100];
//	int salary;
//};
//
//class EmployeeHandler
//{
//public:
//	EmployeeHandler() :empNum(0)
//	{
//		for (int i = 0; i < 50; i++)
//			empList[i] = { 0 };
//	}
//	void AddEmployee(PermanentWorker* emp)
//	{
//		empList[empNum++] = emp;
//	}
//	void ShowAllSalaryInfo() const
//	{
//		for (int i = 0; i < empNum; i++)
//			empList[i]->ShowSalaryInfo();
//	}
//	void ShowTotalSalary() const
//	{
//		int sum = 0;
//		for (int i = 0; i < empNum; i++)
//			sum += empList[i]->GetPay();
//		cout << "salary sum: " << sum << endl;
//	}
//	~EmployeeHandler()
//	{
//		for (int i = 0; i < empNum; i++)
//			delete empList[i];
//	}
//
//private:
//	PermanentWorker* empList[50];
//	int empNum;
//};
//
//int main(void)
//{
//	EmployeeHandler handler;
//
//	handler.AddEmployee(new PermanentWorker("KIM", 1000));
//	handler.AddEmployee(new PermanentWorker("LEE", 1500));
//	handler.AddEmployee(new PermanentWorker("JUN", 2000));
//
//	handler.ShowAllSalaryInfo();
//
//	handler.ShowTotalSalary();
//
//	return 0;
//}