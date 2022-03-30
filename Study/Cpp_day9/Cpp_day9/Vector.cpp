#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	for (int i = 0; i < 20; i++)
	{
		v.push_back(i + 1);
		cout << "v["<<i<<"] = " << v[i] << endl;
	}

	vector<int> v1;
	v1.push_back(40);
	for (int i = 0; i < 20; i++)
	{
		v1.push_back(i + 1);
		cout << "v[" << i << "] = " << v[i] << endl;
	}

	vector<int>::iterator iter;
	for (iter = v1.begin(); iter != v1.end(); iter++)
	{
		cout << *iter << endl;
	}

	vector<string> s;
	s.push_back("tiger");
	s.push_back("lion");
	s.push_back("elephant");
	s.push_back("cow");

	vector<string>::iterator iter_s;
	for (iter_s = s.begin(); iter_s != s.end(); iter_s++)
	{
		if (*iter_s == "lion")
		{
			s.erase(iter_s);
			break;
		}
	}
	for (iter_s = s.begin(); iter_s != s.end(); iter_s++)
	{
		cout << *iter_s << endl;
	}

	return 0;
}