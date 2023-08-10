# Akıllı Ev Yönetim Sistemi 

Bu proje, nesne yönelimli programlama prensiplerini kullanarak bir akıllı ev yönetim sistemi geliştirmeyi amaçlar. Bu sistem, bir evde bulunan farklı cihazları ve sistemleri yönetmek, koordine etmek ve kontrol etmek için kullanılabilir.

## Yazılım Gereksinimleri 

## 1. Interface Tanımları 

``Controllable``: Bu interface, cihazların kontrol edilebilir davranışlarını tanımlar. Açma, kapatma, durumu sorgulama gibi temel işlevleri içerir.

## 2. Temel Sınıflar 

* ``Appliance``: Cihazların temel sınıfını temsil eder. ``Controllable`` interface'ini uygular ve cihazların ortak davranışlarını içerir.

## 3. Cihaz Sınıfları 
* ``Light``: Aydınlatma sistemini temsil eder. ``Appliance`` sınıfından kalıtım alır ve özel ışık kontrol işlemlerini gerçekleştirir.

* ``Thermostat``: Isıtma ve soğutma sistemini temsil eder. ``Appliance`` sınıfından kalıtım alır ve sıcaklık ayarları gibi işlemleri yönetir.

* ``SecuritySystem``: Ev güvenlik sistemi için sınıftır. ``Appliance`` sınıfını genişleterek alarm durumları, kamera kontrolü gibi özel davranışlarını içerir.

## 4. Çoklu Kalıtım ve Polimorfizm
* Cihaz sınıfları, ``Appliance`` sınıfını kalıtım alarak ``Controllable`` interface'ini uygular. Bu sayede, tüm cihazlar ortak bir şekilde yönetilebilir ve aynı zamanda özelleşmiş davranışlar desteklenir.

## 5. Konsol Uygulaması 
Kullanıcıya evdeki cihazları yönetme imkanı sunan bir konsol uygulaması geliştirilir. Kullanıcı, cihazları açma, kapatma, durumlarını sorgulama gibi temel işlemleri bu uygulama aracılığıyla yapabilir.

## 6. Kod Tekrarını Engelleme
``Appliance`` sınıfı, cihazların temel davranışlarını ve ``Controllable`` interface'ini tanımlar. Bu sayede, her cihaz sınıfında aynı kodu tekrar yazmak yerine, kod tekrarını önlemiş olursunuz.

```java
interface Controllable {
    void turnOn();
    void turnOff();
    boolean isOn();
}
```

```java
class SecuritySystem extends Appliance {
    // Güvenlik sistemi davranışları burada tanımlanır
}
```

Bu proje, Java programlama dilini kullanarak nesne yönelimli programlama prensiplerini uygulamanıza ve akıllı ev yönetimi senaryosunu modellemenize yardımcı olacaktır. Aynı zamanda, gereksinim listesinde belirtilen özellikler sayesinde kod tekrarını önleyebilir, çoklu kalıtım ve polimorfizm gibi kavramları anlayabilirsiniz.

> İstediğiniz her hangi bir dilde kodlama yapabilirsiniz. Hazırladığınız çözümleri ***discord*** kanalında eğitimi alan diğer kursiyerlerle paylaşabilirsiniz. 

