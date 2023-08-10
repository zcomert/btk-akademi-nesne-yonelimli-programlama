# Banka Hesap Yönetim Sistemi

Bu proje, bir banka hesap yönetim sistemi simüle etmeyi amaçlar. Kullanıcılar hesap açabilir, para yatırabilir ve çekebilir, hesap bakiyelerini görüntüleyebilirler. static sınıflar ve üyeler, hesap işlemlerini yönetmek ve takip etmek için kullanılacaktır.
 
 `Account` ve `Bank` sınıfı üyelerinin detaylı açıklamaları:

## Account Sınıfı (`static`):

Bu sınıf, banka hesaplarını temsil edecek ve hesap işlemlerini gerçekleştirmek için kullanılacak.

- `private String accountNumber`: Hesap numarasını saklayan özel bir dize.
- `private String owner`: Hesap sahibinin adını saklayan özel bir dize.
- `private double balance`: Hesabın bakiyesini saklayan özel bir ondalık sayı.

- `public Account(String accountNumber, String owner, double balance)`: Hesap oluşturmak için kurucu metot. Hesap numarası, sahibinin adı ve başlangıç bakiyesi alır.

- `public void deposit(double amount)`: Belirtilen miktarı hesaba yatıran bir metot. Hesap bakiyesini artırır ve işlemi görüntüler.

- `public void withdraw(double amount)`: Belirtilen miktarı hesaptan çeken bir metot. Yetersiz bakiye durumunu kontrol eder, bakiyeyi azaltır ve işlemi görüntüler.

- `public void viewBalance()`: Hesap sahibinin adını, hesap numarasını ve bakiyeyi görüntüleyen bir metot.

- `public static List<Account> accounts`: Tüm hesapları saklayan `static` bir liste koleksiyonu.

## Bank Sınıfı (`static`):

Bu sınıf, banka işlemlerini ve bilgilerini yönetmek için kullanılacak.

- `public static List<String> transactionHistory`: Tüm hesap işlemlerini izleyen `static` bir liste koleksiyonu. İşlemleri tarih ve açıklama ile kaydeder.

- `public static void displayBankInfo()`: Banka hakkında genel bilgileri görüntüleyen `static` bir metot.

- `public static void trackTransaction(String description)`: Bir işlemi izlemek için `transactionHistory` listesine açıklama ekleyen `static` bir metot.

Bu detaylar, `Account` ve `Bank` sınıfının üyelerini ve işlevselliğini açıklar. İlgili sınıfları oluştururken bu üyeleri kullanarak hesap işlemleri ve banka yönetimi sağlanabilir.


> İstediğiniz her hangi bir dilde kodlama yapabilirsiniz. Hazırladığınız çözümleri ***discord*** kanalında eğitimi alan diğer kursiyerlerle paylaşabilirsiniz.