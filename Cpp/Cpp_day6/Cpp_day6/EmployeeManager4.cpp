//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Employee
//{
//public:
//	Employee(const char* name)
//	{
//		strcpy(this->name, name);
//	}
//	void ShowYourName() const
//	{
//		cout << "name: " << name << endl;
//	}
//	virtual int GetPay() const
//	{
//		return 0;
//	}
//	virtual void ShowSalaryInfo() const
//	{
//	}
//private:
//	char name[100];
//};
//
//
//class PermanentWorker : public Employee
//{
//public:
//	PermanentWorker(const char* name, int money) :Employee(name), salary(money)
//	{
//	}
//	int GetPay() const
//	{
//		return salary;
//	}
//	void ShowSalaryInfo() const
//	{
//		ShowYourName();
//		cout << "salary: " << GetPay() << endl << endl;
//	}
//
//private:
//	int salary;
//};
//
//class TemporaryWorker : public Employee
//{
//public:
//	TemporaryWorker(const char * name, int pay) : Employee(name), workTime(0), payPerHour(pay)
//	{
//	}
//	void AddWorkTime(int time)
//	{
//		workTime += time;
//	}
//	int GetPay() const
//	{
//		return workTime * payPerHour;
//	}
//	void ShowSalaryInfo() const
//	{
//		ShowYourName();
//		cout << "salary: " << GetPay() << endl << endl;
//	}
//private:
//	int workTime;
//	int payPerHour;
//};
//
//class SalesWorker : public PermanentWorker
//{
//public:
//	SalesWorker(const char* name, int money, double ratio) : PermanentWorker(name, money), salesRusult(0), bonusRatio(ratio)
//	{
//	}
//	void AddSalesResult(int value)
//	{
//		salesRusult += value;
//	}
//	int GetPay() const
//	{
//		return PermanentWorker::GetPay() + (int)(salesRusult * bonusRatio);
//	}
//	void ShowSlaryInfo() const
//	{
//		ShowYourName();
//		cout << "salary: " << GetPay() << endl << endl;
//	}
//private:
//	int salesRusult;
//	double bonusRatio;
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
//	void AddEmployee(Employee* emp)
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
//	Employee* empList[50];
//	int empNum;
//};
//
//int main(void)
//{
//	EmployeeHandler handler;
//
//	handler.AddEmployee(new PermanentWorker("KIM", 1000));
//	handler.AddEmployee(new PermanentWorker("LEE", 1500));
//
//	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
//	alba->AddWorkTime(5);
//	handler.AddEmployee(alba);
//
//	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
//	seller->AddSalesResult(7000);
//	handler.AddEmployee(seller);
//
//
//	handler.ShowAllSalaryInfo();
//
//	handler.ShowTotalSalary();
//
//	return 0;
//}