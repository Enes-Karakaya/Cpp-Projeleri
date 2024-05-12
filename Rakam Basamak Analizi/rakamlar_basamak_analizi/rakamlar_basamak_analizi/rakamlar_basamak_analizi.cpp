// rakamlar_basamak_analizi.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

void bir_yazdir()
{
	cout << " 1" << endl;
	cout << "11" << endl;
	cout << " 1" << endl;
	cout << " 1" << endl;
	cout << "111" << endl;
}
void iki_yazdir()
{
	cout << "22 " << endl;
	cout << "  2" << endl;
	cout << " 2 " << endl;
	cout << "2" << endl;
	cout << "222" << endl;
}
void uc_yazdir()
{
	cout << "33 " << endl;
	cout << "  3" << endl;
	cout << " 3 " << endl;
	cout << "  3" << endl;
	cout << "33" << endl;
}



int main()
{
	setlocale(LC_ALL, "Turkish");

	int sayi;
	cout << "Üç basamaklı bir sayı giriniz:";
	cin >> sayi;

	// basamak analizi gerekli
	// sayi = 321;
	int yuzler, onlar, birler;
	yuzler = sayi / 100; // 321/100 = 3
	onlar = (sayi - (100 * yuzler)) / 10; //(321 - 100 * 3) / 10 = 2;
	birler = sayi - ((100 * yuzler) + (10 * onlar));// (321 - 100 * 3 + 10 * 2) =1;
	
	switch (yuzler)
	{
		case 1: bir_yazdir(); break;
		case 2: iki_yazdir(); break;
		case 3: uc_yazdir(); break;
		default: cout << "hata";
	}
	switch (onlar)
	{
	case 1: bir_yazdir(); break;
	case 2: iki_yazdir(); break;
	case 3: uc_yazdir(); break;
	default: cout << "hata";
	}
	switch (birler)
	{
	case 1: bir_yazdir(); break;
	case 2: iki_yazdir(); break;
	case 3: uc_yazdir(); break;
	default: cout << "hata";
	}

}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
