# emils_translator

Dosya programla birlikte açıldıktan sonra cümle yazılır ardından boşluk bırakılır ve ';' koyulur ardından enter tuşuna basılır. Örneğin:
test cümlesi ;
program bunu birlikte açılan dosyadan aldığı verilerle yazıyı değiştirir.

#### ornekdosya.csv
"t","d"

"p","b"

"k","g"

ardından programa giriş ve çıkış denemeleri:

patates --> badades

ronaldo --> ronaldo

paytak ---> baydag


uzun dosya denemeleri

### meemdili.csv
":D","xd"

":)",":))))"

"ks","x"

"r","rrr"

"tatli ","0w0"

"y ","yyyiii"

"LAN "," !?O_O?! "

#### Burda LAN'ın sonuna boşluk koymamın sebebi sonunun bir kelimeye bağlı olmamasını istemememden dolayı. Sonundaki boşluğu yok etmemek içinde sonucun sonuna da boşluk ekledim.
"t","d"

"dans","ricardo milos"

"kes","kwes"


ardından programa giriş ve çıkış denemeleri:
LAN dansi sana kim ogretti :D --> !?O_O?! ricardo milosi sana kim ogrrreddi xd

kes lan tatavayi :) ------------> kwes lan dadavayi :))))

Algoritma yapısından dolayı dosyada yukarıdan aşağıya doğru okur ve ona göre değişiklik yapar. Mesela ilk satırda ":D","xd" varsa ilk :D'yi kontrol eder ve eğer girilen cümlede :D varsa :D'ları xd ile değiştirir.

Dosya oluştururken ilk başa büyük veya önemli, sona da küçük veya önemsiz parçalar yerleştirilmeli.

Örneğin r leri d ye çevirip sonraki satırda dada kelimesi kontrol edilebilir.
