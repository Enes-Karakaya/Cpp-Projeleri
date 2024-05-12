// karar_yapilari.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    int sayi;
    cout << "Karar Yapısı - if Kullamımı\n";
    cout << "Bir Sayı Giriniz:";
    cin >> sayi;

    if (sayi > 0)
    {
        cout << "Girilen Sayı Pozitif."<< endl;
    }
    else if (sayi < 0)
    {
        cout << "Girilen Sayı Negatiftir."<< endl;
    }
    else
    {
        cout << "Sayı Sıfıra Eşittir."<< endl;
    }

    system("pause");
    return EXIT_SUCCESS;
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
