# Java Müzik Aletleri Uygulaması Gereksinimleri:

## Müzik Aleti Temsili:

Farklı türde müzik aletlerinin temsil edilmesi için ``Instrument`` interface'i tanımlanmalıdır.
Her müzik aleti (örneğin, gitar, piyano) bu interface'i uygulamalıdır.

## Çalma İşlevi:

Her müzik aletinin çalma yeteneğini ifade eden ``play`` metodu tanımlanmalıdır.


## Müzik Aleti Sınıfları:

Farklı müzik aletlerinin temsil edilmesi için ayrı sınıflar (örneğin, Guitar, Piano) oluşturulmalıdır.
Her sınıf ``Instrument`` interface'ini uygulamalı ve ``play`` metodu için kendi özelleştirilmiş uygulamayı içermelidir.

# Ana Uygulama:

Ana sınıf (örneğin, "Main") oluşturulmalı ve burada müzik aleti örnekleri oluşturularak "play" metotları çağrılmalıdır.

Müzik aletlerinin nasıl çaldığını ve hangi türde olduğunu gösteren bir çıktı sağlanmalıdır.