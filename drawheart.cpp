// drawheart.cpp: 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int A[41][41] = { 0 };
	int theda;
	int x, y;
	int a = 20;
	for (theda = 0;theda <= 360;theda += 10)
	{
		double angle = theda * 3.14 / 180.;
		x = a * (1 - sin(angle))*cos(angle);
		y = a * (1 - sin(angle))*sin(angle);
		x += 20;
		A[y][x] = 1;
	}
	for (x = 0;x < 40;x++)
	{
		for (y = 0;y < 40;y++)
			cout << (A[x][y] ? "*" : " ");
		cout << endl;
	}
    return 0;
}

