#include <iostream>
using namespace std;

class SoSimple
{
public:
	virtual void ShowSimpleInfo()
	{
		cout << "SoSimple Base Class" << endl;
	}
};

class SoComplex:public SoSimple
{
public:
	void ShowSimpleInfo()
	{
		cout << "SoComplex Dervide Class" << endl;
	}
};

int main()
{
	SoSimple simObj;
	SoSimple& ref = simObj;

	try
	{
		SoComplex& comRef = dynamic_cast<SoComplex&>(ref);
		comRef.ShowSimpleInfo();
	}
	catch (bad_cast expt)
	{
		cout << expt.what() << endl;
	}

	return 0;
}

