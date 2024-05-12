// atm_uygulaması.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int t = 0;
	int gsifre,secim,kamera_durum=1,onay_kod;
	double para = 10000000,tutar;
   cout << "XyX Bankasına Hoşgeldiniz\n";
   do
   {   cout << "Sayın ABC, \n Şifrenizi giriniz";
	   cin >> gsifre;

	   if (gsifre != 1234)
	   {		
		   t++;
	   }
	   else
	   {
		   t = 3; // ya da break kullanılır
	   }
   } while (t != 3);

   if (gsifre == 1234)
   {
	   cout << "Hoşgeldiniz\n";
	   cout << "-------------\n";
	   cout << "1- Para Çekme\n";
	   cout << "2- Para Aktarma\n";
	   cout << "3- Para Yatırma\n";
	   cout << "4- Hesap bilgileri\n";

	   cin >> secim;

	   switch (secim)
	   {
	   case 1:
		   cout << "Para Çekme Menüsü\n";
		   if (kamera_durum == 0)
		   {
			   cout << "********* 7485 numaralı telefonunuza gelen onay kodunu giriniz";
			   cin >> onay_kod;

			   if (onay_kod == 5678)
			   {
				   cout << "Tutarı giriniz\n";
				   cin >> tutar;
				   if (tutar> para)
				   {
					   cout << "Hacı Para yok, Kredi Çek";
				   }
				   else
				   {
					   if (int(tutar) % 10 == 0)
					   {

						   cout << tutar << " hazırlanıyor. Tır tır tır";
						   para = para - tutar;
						   cout << "Öncelikle Kartı Alınız\nTutarı alınız.";
					   }
					   else
					   {
						   cout << "10 ve katları olacak şekilde Tutar giriniz.";
					   }
				   }
			   }
			   else
			   {
				   cout << "KOD Yanlış\n";
			   }
		   }
		   if (kamera_durum == 1)
		   {
			   cout << "Tutarı giriniz\n";
			   cin >> tutar;
			   if (tutar > para)
			   {
				   cout << "Hacı Para yok, Kredi Çek";
			   }
			   else
			   {
				   if (int(tutar) % 10 == 0)
				   {

					   cout << tutar << " hazırlanıyor. Tır tır tır";
					   para = para - tutar;
					   cout << "Öncelikle Kartı Alınız\nTutarı alınız.";
				   }
				   else
				   {
					   cout << "10 ve katları olacak şekilde Tutar giriniz.";
				   }
			   }
		   }
		   break;
	   case 2:
		   cout << "Para Aktarma Menüsü\n";
		   cout << "Tutarı giriniz\n";


		   break;
	   case 3:
		   cout << "Para Yatırma Menüsü\n";
		   cout << "1-Kendi hesabıma\n";
		   cout << "2-Başka hesabıma\n";
		   cin >> secim;
		   if (secim == 1)
		   {
			   cout << "Kendi Hesabınıza Yatırılacak tutarı giriniz";
		   }
		   else if (secim == 2)
		   {
			   cout << "1- A hesabı\n";
			   cout << "2- B hesabı\n";
			   cout << "3- C hesabı\n";
			   cin >> secim;
			   if(secim == 1)  cout << "A Hesabınıza Yatırılacak tutarı giriniz";
			   if(secim == 2)  cout << "B Hesabınıza Yatırılacak tutarı giriniz";
			   if(secim == 3)  cout << "C Hesabınıza Yatırılacak tutarı giriniz";

		   }

		   break;
	   case 4:
		   cout << "1- A hesab bilgileri\n";
		   cout << "2- B hesabı bilgileri\n";
		   cout << "3- C hesabı bilgileri\n";
		   cin >> secim;
		   if (secim == 1)  cout << "A iban";
		   if (secim == 2)  cout << "B iban";
		   if (secim == 3)  cout << "C iban";

		  


		   break;
	   default: cout << "Hatalı seçim"; break;
	   }
   }
}
