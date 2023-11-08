#include <stdio.h>
#include <stdlib.h>
int hesapla(int n)
{
    int i;
    int not[n];
    int sayac1=0,sayac2=0;
    int gecme_notu=50;
    printf("ogrencilerin notlarini giriniz:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&not[i]);
    }
    for(i=0;i<n;i++)
    {
        if(not[i]<gecme_notu)
        {
            sayac1++;
        }
        else
        {

        }
    }
    return sayac1;


}
int ortalama(int n)
{
    int i;
    int not[n];
    int toplam=0;

    printf("ogrencilerin notlarini giriniz:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&not[i]);
        toplam=toplam+not[i];
    }
    return toplam/n;


}
int main()
{
    int n;
    printf("kac adet ogrenci oldugunu giriniz:\n");
    scanf("%d",&n);
    int ogrenci[n];
    int ort;
    int kalan_gecen;
    kalan_gecen=hesapla(n);

    ort=ortalama(n);
    printf("%d kadar ogrenci dersi gecti\n%d kadar ogrenci dersi gecemedi\n",kalan_gecen,n-kalan_gecen);
    printf("%d sinif ortalamasi\n",ort);
    return 0;
}
