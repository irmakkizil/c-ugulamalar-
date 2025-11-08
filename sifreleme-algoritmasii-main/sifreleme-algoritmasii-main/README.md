# 🔐 SEZAR ŞİFRELEME ALGORİTMASI

Bu proje, klasik **Sezar Şifreleme (Caesar Cipher)** algoritmasını C dilinde uygulamak amacıyla hazırlanmıştır.  
Kullanıcıdan alınan bir metin ve anahtar değeri ile metin şifrelenir, ardından çözülmüş (deşifre) hali ekrana yazdırılır.

---

## 🧠 Algoritma Mantığı

Sezar şifrelemesi, her harfi alfabede belirli bir **anahtar (kaydırma)** kadar öteler.  
Örneğin:
- Anahtar = 3 ise  
  `A → D`, `B → E`, `C → F` olur.  

Eğer `Z` harfi aşılıyorsa, alfabe başa döner.

---

## ⚙️ Programın İşleyişi

1. Kullanıcıdan bir metin alınır.  
   (Boşlukları da kabul eder — `gets()` fonksiyonu kullanılmıştır.)
2. Şifreleme için bir **anahtar** (tamsayı) girilir.
3. Program her karakteri kontrol eder:
   - Küçük harfse (`a-z`), küçük harf kurallarıyla şifrelenir.
   - Büyük harfse (`A-Z`), büyük harf kurallarıyla şifrelenir.
4. Şifrelenmiş metin ekrana yazdırılır.
5. Ardından, basit bir çözümleme (deşifre) işlemi yapılır.

---

## 🧩 Koddan Örnek

```c
if (metin[i] >= 'a' && metin[i] <= 'z') {
    metin[i] = (metin[i] - 'a' + anahtar) % 26 + 'a';
}
else if (metin[i] >= 'A' && metin[i] <= 'Z') {
    metin[i] = (metin[i] - 'A' + anahtar) % 26 + 'A';
}
