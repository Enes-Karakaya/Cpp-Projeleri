// switch_kahve_mak.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int main()
{

    setlocale(LC_ALL, "Turkish"); //Türkçe Karakter Komutu

    cout << "Switch İle Kahve Makinesi Yapımı\n";

    /*
    1- Sütlü Kahve
    2- Sade Kahve
    3- Sodalı Kahve
    4- Damla Sakızlı Kahve
    5- Menengiçli Kahve

    Seç
    Seçime göre ücretini söyle ve hazırla
    */

    int s,b;
    cout << "1-Sütlü Kahve\n";
    cout << "2-Sade Kahve\n";
    cout << "3-Sodalı Kahve\n";
    cout << "4-Damla Sakızlı Kahve\n";
    cout << "5-Menengiçli Kahve\n";
    cout << "----------------\n";

    cout << "Seçiminiz:";
    cin >> s;

    switch (s)
    {
    case 1: cout << "2TL, Sütlü Kahve" << endl; break;
    case 2: cout << "5TL, Sütlü Kahve" << endl; break;
    case 3: cout << "6TL, Sütlü Kahve" << endl; break;
    case 4: cout << "15TL, Sütlü Kahve" << endl; break;
    case 5: cout << "25TL, Sütlü Kahve" << endl; break;
    default: cout << "Yanlış Seçim Yaptınız" << endl; break;
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
