# Oyun Senaryosu: Taş-Kağıt-Makas Oyunu

Bu senaryoda, oyuncunun bilgisayara karşı taş, kağıt, makas oyununu oynadığı bir konsol uygulaması tasarlanacaktır.

**Oyun Uygulaması - Gereksinimler:**

1. Abstract Sınıfların Kullanımı:
   - `Player`: Oyuncunun temel özelliklerini ve davranışlarını içeren ``abstract`` sınıf.
   - `ComputerPlayer`: Bilgisayar oyuncusunun temel özelliklerini ve davranışlarını içeren ``abstract`` sınıf.

2. Ortak Davranışların Tanımı:
   - `Player` ve `ComputerPlayer` sınıfları, oyuncu adını ve seçilen hamleyi (taş, kağıt, makas) içeren ortak davranışları tanımlayacak.

3. Polimorfizm:
   - Oyuncuların (oyuncu ve bilgisayar) farklı hamle stratejileri olacak.
   - Her iki oyuncu türü de aynı ``abstract`` davranışları uygulayacak, ancak kendi özel hamle stratejilerini kullanacak.

4. Alt Sınıflar Arasında Kod Paylaşımı:
   - `HumanPlayer` sınıfı, `Player` sınıfından türetilerek oyuncunun adını alacak ve hamle yapma stratejisini uygulayacak.
   - `RandomComputerPlayer` sınıfı, `ComputerPlayer` sınıfından türetilerek bilgisayarın rastgele hamle yapma stratejisini uygulayacak.

5. Konsol Ortamı:
   - Kullanıcıya hamle seçenekleri sunulacak ve girdi alınacak.
   - Oyuncuların hamleleri ve sonuçları konsol üzerinde gösterilecek.

6. Gereksinimler:
   1. Oyuncuların isimleri giriş olarak istenecek.
   2. Kullanıcıya taş, kağıt veya makas seçenekleri sunulacak.
   3. Bilgisayar rastgele bir hamle yapacak.
   4. Oyuncuların ve bilgisayarın hamleleri ekrana yazdırılacak.
   5. Hamle sonucu (kazanan, kaybeden veya berabere) açıklanacak.
   6. Oyuncuların puanları takip edilecek.
   7. Oyunun bir turu sona erdiğinde kullanıcıya devam etmek isteyip istemediği sorulacak.
   8. Kullanıcı oyunu sonlandırmak istediğinde toplam puanlar ekrana yazdırılacak.
   9. Oyun boyunca yapılan hamleler kaydedilecek ve geçmiş hamleler görüntülenebilecek.
   10. Oyun içindeki farklı oyuncu tipleri için stratejiler belirlenebilecek.

Bu örnekte, taş-kağıt-makas oyununu konsol ortamında gerçekleştiren bir uygulama tasarımı görülmektedir. ``Abstract`` sınıfların, ortak davranışların, polimorfizmin ve kod paylaşımının nasıl kullanılabileceği örnek bir uygulama olarak tasarlanmıştır.

> İstediğiniz her hangi bir dilde kodlama yapabilirsiniz. Hazırladığınız çözümleri ***discord*** kanalında eğitimi alan diğer kursiyerlerle paylaşabilirsiniz. 