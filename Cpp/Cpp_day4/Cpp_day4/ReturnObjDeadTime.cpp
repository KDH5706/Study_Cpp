//#include<iostream>
//using namespace std;
//
//class SoSimple
//{
//public:
//	SoSimple(int n) : num(n)
//	{
//		cout << "New object: " << this << endl;
//	}
//	SoSimple(const SoSimple& copy) : num(copy.num)
//	{
//		cout << "New Copy object: " << this << endl;
//	}
//	~SoSimple()
//	{
//		cout << "Destrory obj: " << this << endl;
//	}
//
//private:
//	int num;
//};
//
//SoSimple SimpleFuncObj(SoSimple ob)
//{
//	cout << "Parm ADR: " << &ob << endl;
//	return ob;
//}
//
//int main(void)
//{
//	SoSimple obj(7);
//	SimpleFuncObj(obj);
//
//	cout << endl;
//	SoSimple tempRef = SimpleFuncObj(obj);
//	cout << "Return Obj " << &tempRef << endl;
//
//	return 0;
//}