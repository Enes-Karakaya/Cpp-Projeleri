// dikdortgen.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int main()
{

    setlocale(LC_ALL, "Turkish");
    cout << "Dikdörtgenin alan ve çevresini bulan program.\n";

    double uzun_kenar, kisa_kenar, alan, cevre;
    cout << "Kısa Kenar Uzunluğunu Giriniz:";
    cin >> kisa_kenar;

    cout << "Uzun kenar uzunluğunu giriniz:";
    cin >> uzun_kenar;

    alan = kisa_kenar * uzun_kenar;
    cevre = (kisa_kenar + uzun_kenar) * 2;

    cout << "Alan:" << alan << endl << "Çevre:" << cevre << endl;

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
