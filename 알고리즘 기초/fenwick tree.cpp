#include<iostream>
#define NUMBER 6

using namespace std;

int tree[NUMBER];

int sum(int i)
{
	int result = 0;
	while (i > 0)
	{
		result += tree[i];
		i -= (i & -i);
	}
	return result;
}

void update(int i, int dif)
{
	while (i <= NUMBER)
	{
		tree[i] += dif;
		i += (i & -i);
	}
}

int getsection(int start, int end)
{
	return sum(end) - sum(start - 1);
}

int main()
{
	update(1, 1);
	update(2, 2);
	update(3, 3);
	update(4, 4);
	update(5, 5);
	cout << getsection(2, 5) << '\n';
	update(3, -2);
	cout << getsection(2, 5) << '\n';
	update(5, 2);
	cout << getsection(2, 5) << '\n';
	cout << getsection(1, 5) << '\n';
}
