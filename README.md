# BLM3021 - Algoritma Analizi   Dönem Projesi 2018-2019 Bahar Yarıyılı  
 Ders Yürütücüsü: Dr. Öğr. Üyesi M. Amaç GÜVENSAN  
# Konu : Graf Üzerinde Arama İşlemi    
# Problem:  Kevin Bacon Sayısının Bulunması 

Bir film artistinin  Kevin Bacon Sayısı, o artistin Kevin Bacon’a en az kaç film uzakta olduğudur (http://oracleofbacon.org).   
 
• Örneğin Kevin Bacon’ın Kevin Bacon Sayısı sıfırdır. Robert De Niro Kevin Bacon ile Sleepers filminde birlikte oynadığı için Kevin Bacon Sayısı 1’dir.  
 
• Elvis Presley Kevin Bacon’la aynı filmde oynamamıştır. Fakat Change of Habit filminde  Edward Asner ile oynamıştır. Asner de  JFK filminde Kevin Bacon ile birlikte oynadığı için Elvis Presley’in Kevin Bacon Sayısı 2’dir.   
 
 
Bu çalışmada aşağıdaki işlemleri yapabilen bir sistem tasarlayınız: 
 
1. Adı verilen bir artistin Kevin Bacon Sayısını ve bununla ilgili bilgiyi veriniz. Eğer Kevin Bacon sayısı 6’yı geçiyorsa bu artistin Kevin Bacon’la bağlantısı yoktur.  
 
• Örneğin Arnold Schwarzenegger’in Kevin Bacon sayısı ile ilgili programınız aşağıdaki mesajı vermelidir.  (Mesajları istediğiniz formatta yazdırabilirsiniz.) :       Arnold Schwarzenegger  Kevin Bacon sayısı : 2   Schwarzenegger, Arnold  -  Furst, Stephen  "Scavenger Hunt (1979)"       Furst, Stephen - Bacon, Kevin  "Animal House (1978)"   
 
2. Adı verilen iki artistin birbirine mesafesini bulunuz ve  bununla ilgili bilgiyi veriniz.  
 
• Örneğin Jack Nicholson ve Meryl Streep’in mesafesi 1’dir. Bununla ilgili, programınız aşağıdaki mesajı vermelidir:    Jack Nicholson – Meryl Streep :  1    Nicholson, Jack  – Streep, Meryl :  "Heartburn (1986) " 
 
3. Ödevinizin çalışmasını  ftp://ftp.cs.princeton.edu/pub/cs226/bacon/input-mpaa.txt dosyasını kullanarak test ediniz. 
 
 
Yapılacak İşlemler: 
 
1. Artistleri ve filmleri aşağıdaki şekilde görüldüğü gibi,  artistlerden sadece filmlere, filmlerden de sadece artistlere bağlantı olacak şekilde bipartite bir grafa yerleştiriniz.  
 
 
2. Bu graf üzerinde BFS(Breadth First Search) arama yöntemini kullanarak algoritmanızı geliştiriniz.  

3. Algoritmanızın programını C dilinde yazınız.
