#include <iostream>
#include "Random.h"

using namespace std;

int main()
{
	Random r;
	cout << "--0����" << RAND_MAX << "������ ���� 10��--"<<endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout<<n<<' ';
	}
	cout << endl;
	cout << "--2���� 4������ ���� --" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
	cout << "--2���� 10������ ���� --" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.nextEvenInRange(2, 10);
		cout << n << ' ';
	}

	cout << endl;
}