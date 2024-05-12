// siralama_algoritmasi_baloncuk.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

#include <ctime>
using namespace std;
int main()
{

    srand(std::time(nullptr));
    // sıralama algoritması
    /*
    çeşitleri

        Seçmeli Sıralama (Selection Sort)
        Eklemeli Sıralama (Insertion Sort)
        Kabuk Sıralaması (Shell Sort)
        Birleştirmeli Sıralama (Merge Sort)
        Hızlı Sıralama (Quick Sort)
        Kabarcık Sıralaması (Bubble Sort)
    
    */
    int tmp;
    int dizi[10];
    // diziye sayıları at
    for (int i = 0; i < 10; i++)
    {
        dizi[i] = rand() % 1001;
    }
    // dizi içinde sıralama yap
    for (int i = 0; i < 10; i++)
    {
        int sirali = 1;
        for (int j = 10 - 1; j > 0; j--)
        {
            if (dizi[j - 1] > dizi[j]) //şayet buraya girmiyorsak dizi sıralı demektir
            {
                sirali = 0;  //şayet giriyorsak sıralı değil demektir
                tmp = dizi[j - 1];
                dizi[j - 1] = dizi[j];
                dizi[j] = tmp;
            }
        }       
    }
    // dizinin son halini yazdır.
    for (int i = 0; i < 10; i++)
    {
        cout<<dizi[i]<<endl;
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
