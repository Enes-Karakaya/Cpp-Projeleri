// Kare Oluşturma.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    cout << "Karenin Başları Olmayan Kare Oluşturma\n";
    for (int b = 0; b < 50; b++)
    {
        if (b == 0)
        {
            for (int d = 0; d < 50; d++)
                if (d == 0 || d == 49)
                    cout << " ";
                else
                    cout << "X";
        }
        else if (b > 0 && b < 49)
        {
            for (int d = 0; d < 50; d++)
            {
                if (d == 0 || d == 49)
                    cout << "X";
                else
                    cout << " ";
            }
        }
        else if (b == 49)
        {
            for (int d = 0; d < 50; d++)
                if (d == 0 || d == 49)
                    cout << " ";
                else
                    cout << "X";
        }
        cout << "\n";

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
