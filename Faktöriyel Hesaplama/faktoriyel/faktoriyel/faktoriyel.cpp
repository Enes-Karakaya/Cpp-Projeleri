// faktoriyel.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "turkish");

    long  long int a,s=1;
	cout << "Faktoriyel:" << endl;
	cin >> a;

	for (int i = a; i > 1; i--)
	{
		s = s * i;	
	}
	cout << "Sonuç:" << s;
}
