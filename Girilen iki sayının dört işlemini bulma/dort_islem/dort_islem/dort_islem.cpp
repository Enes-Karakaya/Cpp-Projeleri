// dort_islem.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    cout << "Dört İşlem\n";
    cout << "----------\n";

    int s1, s2,topla,cikar,carp,böl;
    cout << "1.Sayıyı Giriniz:";
    cin >> s1;

    cout << "2.Sayıyı Giriniz;";
    cin >> s2;

    //Toplama
    topla = s1 + s2;
    cout << "TOPLAMA:" <<topla << endl;
    //Çıkarma
    cikar = s1 - s2;
    cout << "ÇIKARMA:" << cikar << endl;
    //Çarpma
    carp = s1 * s2;
    cout << "ÇARPMA:" << carp << endl;
    //Bölme
    böl = s1 / s2;
    cout << "BÖLME:" << böl << endl;



    /*
    * Bu Şekilde Tek Satırdada Yazılabilr.
    cout << "Toplam:" << (s1 + s2) << endl;
    cout << "Fark:" << (s1 - s2) << endl;
    cout << "Çarpım:" << (s1 * s2) << endl;
    cout << "Bölme:" << (s1 / s2) << endl;  
    */

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
