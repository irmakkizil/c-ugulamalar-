# 📅 TARİH FARKI HESAPLAMA PROGRAMI

Bu proje, C dilinde **struct yapısı** kullanılarak iki tarih arasındaki farkı (gün, ay, yıl cinsinden) hesaplayan bir programdır.  
Program, kullanıcıdan iki tarih (doğum tarihi ve sorgulanan tarih) alır ve aradaki süreyi hesaplayarak ekrana yazdırır.

---

## 🧠 Amaç

Bu ödev, C dilinde **`struct` veri yapısını** kullanmayı öğrenmek ve  
tarih işlemleri üzerinde temel düzeyde aritmetik işlemler gerçekleştirmeyi amaçlar.

---

## ⚙️ Programın İşleyişi

1. `struct myDate` yapısı tanımlanır:
   ```c
   struct myDate {
       int day;
       int month;
       int year;
   };
