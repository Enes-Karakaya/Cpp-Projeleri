// switch_kullanımı_2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	cout << "switch Kullanımı Dört İşlem\n";

	int sayi1, sayi2;
	char islem_turu;
	cout << "1.Sayıyı Giriniz:";
	cin >> sayi1;

	cout << "2.Sayıyı Giriniz:";
	cin >> sayi2;

	cout << "İşlem Seçiniz (+ - * /):";
	cin >> islem_turu;

	switch (islem_turu)
	{
	case '+':
		cout << "sonuç:" << sayi1 + sayi2 << endl;
		break;
	case '-':
		cout << "sonuç:" << sayi1 - sayi2 << endl;
		break;
	case '*':
		cout << "sonuç:" << sayi1 * sayi2 << endl;
		break;
	case '/':
		cout << "sonuç:" << sayi1 / sayi2 << endl;
		break;
	default:
		cout << "Birini Seçmeliydin + - * /";
		break;
	}

	system("pause");
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
