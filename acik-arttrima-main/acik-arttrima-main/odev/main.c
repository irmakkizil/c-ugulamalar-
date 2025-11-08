//
//  main.c
//  odev
//
//  Created by Irmak KIZIL on 22.12.2023.
//

#include <stdio.h>

// scrutinize fonksiyonu, iki teklif arasında kazananı belirler
int baslangicteklifi,yeniteklif;
typedef int Teklif; // Teklif türünü int olarak tanımla

int scrutinize(baslangicteklifi,yeniteklif) {
    if (yeniteklif > baslangicteklifi) {
        return 1; // Yeni teklif, mevcut teklifi geçti
    } else {
        return 0; // Yeni teklif, mevcut teklifi geçmedi
    }
}

int main() {
    int baslangicteklifi = 0; // Başlangıç teklifi
    int teklifsayisi=0;
    Teklif yeniteklif;
    printf("****Açık artırmaya hoş geldiniz****\n");
    
    while (1) {
        printf("Guncel teklif= %d\n", baslangicteklifi);
        printf("Yeni teklifinizi giriniz (teklife son vermek için 0 yaziniz)= ");
        scanf("%d", &yeniteklif);
        teklifsayisi++;
        
    
    
    if (scrutinize(baslangicteklifi,yeniteklif)) {
        printf("Yeni teklif kabul edildi\n");
        baslangicteklifi= yeniteklif;
        
    }
    else if (yeniteklif == 0) {
        printf("Açık artırma sona ermistir, urun satilmistir. Yapilan teklif sayisi: %d\n", teklifsayisi-1);//0 girmek bir teklif olmadigi icin.
        printf("kazanan  %d teklifini yapan kisidir.\n", baslangicteklifi);
                   
        break;
    }
    else {
        printf("Üzgünüz, yeni teklif mevcut teklifi geçemedi. Teklifinizi artırın.\n");
    }
}

    return 0;
}
