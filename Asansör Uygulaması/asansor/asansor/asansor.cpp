// asansor.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include "pch.h"
#include "stdio.h"

#include <iostream>
using namespace std;
int main()
{
	/*
	iki asansör olacak
		1 - yakın mesafedeki  gelecek
		2 - iki aransör arasındaki mesafe farkı aynıysa
		yani asansör 5. katta diğeri 7. katta birey 6. kattan çağırıyor.
		bu durumda km si düşük olan gelecek.
	*/
    cout << "Asansör\n"; 

	int a = -1;
	cout << abs(a); // mutlak değer

	int k1 = 0, k2 = 2; // k1 = 1. asansörün konumu; k2 = 2. asansörün konumu
	int aldigi_mesafe1 = 0;
	int aldigi_mesafe2 = 5;

	int konum, hedef;

	int f1, f2;
	cout << "Kaçıncı kattan çağırıyorsun:";
	cin >> konum; // birey 3 katta

	cout << "Kaçıncı kata gideceksin:";
	cin >> hedef; // 5. kata gitmek

	f1 = abs(k1 - konum); // 3
	f2 = abs(k2 - konum); // 1

	if (f1 > f2) //3>1 f2 yani 2. asansör konuma gitmeli,
	{
		cout << "2. asansör geliyor." << endl;
		aldigi_mesafe2 = aldigi_mesafe2 + f2;
	}
	else if (f2 > f1) // 1. asansör konuma gitmeli,
	{
		cout << "1. asansör geliyor." << endl;
		aldigi_mesafe1 = aldigi_mesafe1 + f1;
	}
	else // örneğin bireyin konumu 3. katta, k1=2. katta, k2=4.katta
	{
		cout << "asansörler arasındaki mesafe eşittir. Bundan dolayı km ye bakılmaktadır." << endl;

		if (aldigi_mesafe1 > aldigi_mesafe2)
		{
			cout << "2. asansör geliyor.çünkü aldığı mesafe daha küçük" << endl;
			aldigi_mesafe2 = aldigi_mesafe2 + abs(konum - hedef);
		}
		else if (aldigi_mesafe2 > aldigi_mesafe1)
		{
			cout << "1. asansör geliyor.çünkü aldığı mesafe daha küçük" << endl;
			aldigi_mesafe1 = aldigi_mesafe1 + abs(konum - hedef);
		}
		else
		{
			cout << "asansörlerin fark mesafesi ve km mesafesi eşit. 1. asansöre gıcıgım onu gönderiyorum." << endl;
			aldigi_mesafe1 = aldigi_mesafe1 + abs(konum - hedef);
		}


	}


}
