#include <stdio.h>
#include <math.h>
#define phi 3.14


float a, b, c, p, u, v, s, l, r, t, d1, d2, m, n, hasil, hasil2 = 0;
int x, X, y, Y, z, Z, hasil4, pilih =0;
int hasil3 = 0;
char ulang;

void luas() //Dikerjakan oleh I MADE ANANDA MAHAPUTRA (2005551101)
{
//variable "hasil" => menyimpan hasil perhitungan rumus
//variable p =======> panjang
//variable l =======> lebar
//variable t =======> tinggi
//variable d1 ======> diagonal pertama
//variable d2 ======> diagonal kedua
//variable r =======> jari - jari
//variable a =======> menentukan pilihan user

    printf ("Menghitung Luas Suatu Bidang : \n");
    printf ("(1) Segitiga  \n");
    printf ("(2) Segiempat \n");
    printf ("(3) Trapesium  \n");
    printf ("(4) Layang - Layang \n");
    printf ("(5) Lingkaran \n");
    printf ("MASUKAN KODE  : ");

    scanf ("%f", &a);
    printf("\n=================================================\n\n");
    if (a==1){
     printf ("\nMenghitung Luas Segitiga\n");
     printf ("Panjang(cm) : ");
     scanf ("%f", &p);
     printf ("\nTinggi(cm)  : ");
     scanf (" %f", &t);

     hasil = (p*t)/2;
     printf("\n===============================\n");
     printf("Pengerjaan:\n =>(Pangjang x Tinggi)/2) \n =>(%.1f x %.1f)/2\n => %.1f",p,t,hasil);
     printf("\n===============================\n");
     printf ("\nJadi, Luas Segitiga adalah %.2f cm\n", hasil);
     printf("\n===============================\n");
    }
    else if (a==2){
     printf ("\nMenghitung Luas Segiempat\n");
     printf ("Panjang(cm): ");
     scanf ("%f", &p);
     printf ("\nLebar(cm)  : ");
     scanf (" %f", &l);

     hasil = (p*l);
     printf("\n===============================\n");
     printf ("\nLuas Segiempat adalah %.2f cm\n", hasil);
     printf("\n===============================\n");
    }
    else if (a==3){
     printf ("\nMenghitung Luas Trapesium\n");
     printf ("Panjang Atas(cm)   : ");
     scanf ("%f", &p);
     printf ("\nPanjang Bawah(cm)  : ");
     scanf (" %f", &l);
     printf ("\ntinggi(cm)         : ");
     scanf (" %f", &t);

     hasil = ((p+l)*t)/2;
     printf("\n===============================\n");
     printf ("\nLuas Trapesium adalah %.2f cm\n", hasil);
     printf("\n===============================\n");
 }
    else if (a==4){
     printf ("\nMenghitung Luas Layang - Layang\n");
     printf ("Panjang Diagonal 1(cm)   : ");
     scanf ("%f", &d1);
     printf ("\nPanjang Diagonal 2(cm)   : ");
     scanf (" %f", &d2);

     hasil = (d1*d2)/2;
     printf("\n====================================\n");
     printf ("\nLuas Layang - Layang adalah %.2f cm\n", hasil);
     printf("\n====================================\n");
 }
    else if (a==5){
     printf ("\nMenghitung Luas Lingkaran\n");
     printf ("Panjang jari - jari(cm)   : ");
     scanf ("%f", &r);

     if (r=r){

     hasil = (22*r*r/7);
     printf("\n====================================\n");
     printf ("\nLuas Lingkaran adalah %.2f cm\n", hasil);
     printf("\n====================================\n");
     }
    }
    else {printf("error !!!\n\n");}
}

void volume() //Dikerjakan oleh I MADE ANANDA MAHAPUTRA (2005551101)
{
//variable "hasil" => menyimpan hasil perhitungan rumus
//variable p =======> panjang
//variable l =======> lebar
//variable t =======> tinggi
//variable r =======> jari - jari
//variable a,x =====> menentukan pilihan user

    printf ("Menghitung Volume Suatu Ruang : \n");
    printf ("(1) Kubus  \n");
    printf ("(2) Balok \n");
    printf ("(3) Limas/Krucut  \n");
    printf ("(4) Prisma \n");
    printf ("(5) Bola \n");
    printf ("MASUKAN KODE  : ");
    scanf ("%f", &a);
    printf("\n=================================================\n\n");

     if (a==1){
     printf ("\nMenghitung Volume Kubus\n");
     printf ("Panjang rusuk(cm) : ");
     scanf ("%f", &p);

     hasil = (p*p*p);
     printf("\n=========================\n");
     printf ("\nVolume Kubus %.2f cm\n", hasil);
     printf("\n=========================\n");
    }
    else if (a==2){
     printf ("\nMenghitung Volume Balok\n");
     printf ("Panjang rusuk(cm): ");
     scanf ("%f", &p);
     printf ("\nLebar rusuk(cm)  : ");
     scanf (" %f", &l);
     printf ("\nTinggi rusuk(cm) : ");
     scanf (" %f", &t);

     hasil = (p*l*t);
     printf("\n===============================\n");
     printf ("\nVolume Balok adalah %.2f cm\n", hasil);
     printf("\n===============================\n");
    }
    else if (a==3){
     printf ("(1) Limas segitiga  \n");
     printf ("(2) Limas Segiempat \n");
     printf ("(3) krucut \n");
     printf ("Tentukan Bentuk Limas : \n");
     scanf (" %i", &x);
       if (x==1){
       printf ("\nMenghitung Volume Limas segitiga \n");
       printf ("\nLebar alas(cm)  : ");
       scanf (" %f", &l);
       printf ("\npanjang alas(cm) : ");
       scanf (" %f", &p);
       printf ("tinggi limas(cm) : ");
       scanf (" %f", &t);
       hasil = (p*l*t)/3;
       printf("\n=====================================\n");
       printf ("\nVolume Limas segitiga adalah %.2f cm\n", hasil);
       printf("\n=====================================\n");
      }
      else if (x==2){
       printf ("\nMenghitung Volume Limas segiempat \n");
       printf ("\nLebar alas(cm)  : ");
       scanf (" %f", &l);
       printf ("\npanjang alas(cm) : ");
       scanf (" %f", &p);
       printf ("tinggi limas(cm) : ");
       scanf (" %f", &t);
       hasil = (p*l*t)/(3*2);
       printf("\n=====================================\n");
       printf ("\nVolume Limas segitiga adalah %.2f cm\n", hasil);
       printf("\n=====================================\n");
      }
      else if (x==4){
       printf ("\nMenghitung Volume Prisma \n");
       printf ("\nPanjang Alas(cm)   : ");
       scanf (" %f", &p);
       printf ("\nTinggi Alas(cm)    : ");
       scanf (" %f", &l);
       printf ("\nTinggi Prisma (cm) : ");
       scanf (" %f", &t);
       hasil = (p*l*t)/2;
       printf("\n=============================\n");
       printf ("\nVolume Prisma adalah %.2f cm\n", hasil);
       printf("\n=============================\n");
      }

      else if (a==4){
     printf ("\nMenghitung Volume Balok\n");
     printf ("Panjang rusuk(cm): ");
     scanf ("%f", &p);
     printf ("\nLebar rusuk(cm)  : ");
     scanf (" %f", &l);
     printf ("\nTinggi rusuk(cm) : ");
     scanf (" %f", &t);

     hasil = (p*l*t);
     printf("\n============================\n");
     printf ("\nVolume Balok adalah %.2f cm\n", hasil);
     printf("\n============================\n");
    }
      else {printf("error !!!\n\n");}
    }
    else if (a==4){
     printf ("\nMenghitung Volume Prisma\n");
     printf ("Panjang Alas(cm)    : ");
     scanf ("%f", &p);
     printf ("Tinggi Alas(cm)     : ");
     scanf (" %f", &l);
     printf ("Tinggi Prisma(cm)   : ");
     scanf (" %f", &t);

     hasil = (p*l*t)/2;
     printf("\n=============================\n");
     printf ("\nVolume Prisma adalah %.2f cm\n", hasil);
     printf("\n=============================\n");
 }
    else if (a==5){
     printf ("\nMenghitung Volume Bola\n");
     printf ("Panjang jari - jari(cm)   : ");
     scanf ("%f", &r);

     if (r=r){

     hasil = (4*22*r*r*r/(7*3));
     printf("\n===========================\n");
     printf ("\nVolume Bola adalah %.2f cm\n", hasil);
     printf("\n===========================\n");
     }
    }
    else {printf("error !!!\n\n");}
}

void deret() //Dikerjakan oleh I MADE ANANDA MAHAPUTRA (2005551101)
{
//variable hasil3 => besar angka ke-n
//variable hasil4 => jumlah total angka sampai ke-n
//variable x ======> angka terkecil suatu deret
//variable y ======> angka terbesar suatu deret
//variable z ======> beda suku suatu deret
//variable x ======> menentukan pilihan penguna

    printf("Pilih Deret\n");
    printf("(1) Deret Arimatika\n");
    printf("(2) Deret Geometri\n");
    printf("MASUKAN KODE : ");
    scanf ("%i", &x);

    if (x==1){
       printf("Menghitung Deret Arimatika\n\n");
       printf("Masukan batas bawah  (a) : ");
       scanf ("%i", &x);
       printf("Masukan batas atas (f(n)): ");
       scanf (" %i", &y);
       printf("Masukan beda suku    (b) : ");
       scanf (" %i", &z);

       if(x<=y){
         for (x=x;x<=y;x+=z){
            printf ("%i\n", x);
            hasil3 += x;
            hasil4 ++;

            }
        if (x>0){
          printf ("\n jumlah (Sn)   = %i\n",hasil3);
          printf (" Banyaknya(Un) = %i\n", hasil4);
         }
        }
    }
    if (x==2){
       printf("Menghitung Deret Geometri\n\n");
       printf("Masukan batas bawah (a) : ");
       scanf ("%i", &x);
       printf("Masukan batas atas  (n): ");
       scanf (" %i", &y);
       printf("Masukan beda suku   (r) : ");
       scanf (" %i", &z);

       if(x<=y){
         for (x=x;x<=y;x*=z){
            printf ("%i\n", x);
            hasil3 += x;
            hasil4 ++;

            }
        if (x>0){
          printf ("\n jumlah    (Sn) = %i\n",hasil3);
          printf (" Banyaknya (Un) = %i\n", hasil4);
         }
        }
    }

}

void luaspermukaanruang() //Dikerjakan oleh Matthew Anthony Gede Dharma Saputra (2005551143)
{
float luaspermukaan;//------------=> untuk menyimpan nilai nilai dari perhitungan rumus
                    // variable p => panjang suatu bangun ruang
                    // variable l => lebar suatu bangun ruang
                    // variable t => tinggi bangun ruang
                    // variable u => tinggi alas
                    // variable s => rusuk bangun ruang
                    // variable r => jari - jari bangun ruang
printf("=====================================================\n");
printf("|   Program Menghitung Luas Permukaan Bangun Ruang  |\n");
printf("=====================================================\n");
printf("| 1. Hitung Luas Permukaan Balok                    |\n");
printf("| 2. Hitung Luas Permukaan Limas Segitiga Sama Sisi |\n");
printf("| 3. Hitung Luas Permukaan Prisma Segitiga          |\n");
printf("| 4. Hitung Luas Permukaan Kubus                    |\n");
printf("| 5. Hitung Luas Permukaan Bola                     |\n");
printf("| 6. Keluar                                         |\n");
printf("=====================================================\n");
printf("Pilihan Anda : ");
scanf("%d", &pilih);
switch(pilih)
{
case 1 :
printf("\n");
printf("=====================================================\n");
printf("|            Hitung Luas Permukaan Balok            |\n");
printf("=====================================================\n");
printf("Input Panjang (cm) : ");
scanf("%f",&p);
printf("Input Tinggi (cm) : ");
scanf("%f",&t);
printf("Input Lebar (cm) : ");
scanf("%f",&l);
luaspermukaan=(2*(p*l))+(2*(p*t))+(2*(l*t));
printf("2(Panjang x Lebar) + 2(Panjang x Tinggi) + 2(Lebar x Tinggi) \n");
printf("Luas Permukaan Balok : %.2f cm \n",luaspermukaan);
break;

case 2 :
printf("\n");
printf("=====================================================\n");
printf("|   Hitung Luas Permukaan Limas Segitiga Sama Sisi  |\n");
printf("=====================================================\n");
printf("Input Alas Segitiga Alas (cm) : ");
scanf("%f",&a);
printf("Input Tinggi Segitiga Alas (cm) : ");
scanf("%f",&u);
printf("Input Tinggi Limas (cm) : ");
scanf("%f",&t);
luaspermukaan =((a*u)/2)*t*3/2;
printf("3/2 Alas x Tinggi \n");
printf("Luas Permukaan Limas Segitiga Sama Sisi : %.2f cm \n",luaspermukaan);
break;

case 3 :
printf("\n");
printf("=====================================================\n");
printf("|       Hitung Luas Permukaan Prisma Segitiga       |\n");
printf("=====================================================\n");
printf("Input Alas Segitiga Alas (cm) : ");
scanf("%f",&a);
printf("Input Tinggi Segitiga Alas (cm) : ");
scanf("%f",&u);
printf("Input Tinggi Prisma (cm) : ");
scanf("%f",&t);
luaspermukaan =((a*u)/2)*t;
printf("Luas Alas x Tinggi \n");
printf("Luas Permukaan Prisma Segitiga : %.2f cm \n", luaspermukaan);
break;

case 4 :
printf("\n");
printf("=====================================================\n");
printf("|             Hitung Luas Permukaan Kubus           |\n");
printf("=====================================================\n");
printf("Input Sisi Kubus (cm) : ");
scanf("%f",&s);
luaspermukaan =6*s*s;
printf("6 x Sisi x Sisi \n");
printf("Luas Permukaan Kubus: %.2f cm \n", luaspermukaan);
break;

case 5 :
printf("\n");
printf("=====================================================\n");
printf("|              Hitung Luas Permukaan Bola           |\n");
printf("=====================================================\n");
printf(" Input Jari-Jari (cm) : ");
scanf("%f",&r);
luaspermukaan =(4*22*(r*r))/7;
printf("4 x Phi x (Jari-Jari x Jari-Jari) \n");
printf(" Luas Permukaan Bola : %.2f cm \n",luaspermukaan);
break;

case 6 :
break;

default : printf("Pilihan Anda Salah!\n");
}
}

void perhitunganpeta() //Dikerjakan oleh I Gede Adhi Heryawan Kartika Utama (2005551111)
{
float jarakpeta, jaraksebenarnya,skala;
//variable "jarakpeta" =======> menyimpan nilai jarak pada peta yang dimasukan user
//variable "jaraksebenarnya" => menyimpan nilai jarak sebenarnya yang dimasukan user
//variable "sekala" ==========> meyimpan perbandingan sekala yang dimasukan user
ulangi:
printf ("(1) Menghitung Jarak Pada Peta\n");
printf ("(2) Menghitung Jarak Sebenarnya\n");
printf ("(3) Menghitung Sekala Peta\n");
printf ("MASUKAN PILIHAN ANGKA DIATAS: ");
scanf("%i", &x);
switch(x)
 {
 case 1:
  printf("Masukkan jarak pada peta = ");
  scanf("%f", &jarakpeta);
  printf("Masukkan skala = 1 : ");
  scanf("%f", &skala);
  jaraksebenarnya =  jarakpeta * skala;
  printf("Maka jarak sebenarnya adalah %.f", jaraksebenarnya);
  break;
 case 2:
  printf("Masukkan jarak sebenarnya = ");
  scanf("%f", &jaraksebenarnya);
  printf("Masukkan skala = 1 : ");
  scanf("%f", &skala);
  jarakpeta =  jaraksebenarnya / skala;
  printf("Maka jarak pada peta adalah  %.f", jarakpeta);
  break;
 case 3:
  printf("Masukkan jarak pada peta  = ");
  scanf("%f", &jarakpeta);
  printf("Masukkan jarak sebenarnya = ");
  scanf("%f", &jaraksebenarnya);
  skala =  jaraksebenarnya / jarakpeta;
  printf("Maka skalanya adalah 1 : %.f", skala);
  break;
  default: printf("Pilihan Anda Salah! Silahkan Masukan Angka Yang Tertera diatas\n\n");
           goto ulangi;
 }

}

int main() //Dikerjakan oleh I MADE ANANDA MAHAPUTRA (2005551101)
{

printf("                                      TUGAS PEMROGRAMAN KELOMPOK 9 (TUGAS BESAR)            \n");
printf("                                               AYO BELAJAR MATEMATIKA                       \n");
printf("                                           *******************************                  \n\n");
printf("                                                        OLEH :                              \n");
printf("          $=========================================================================================================$\n");
printf("          |   I MADE ANANDA MAHAPUTRA | I Gede Adhi Heryawan Kartika Utama | Matthew Anthony Gede Dharma Saputra    |\n");
printf("          |         (2005551101)      |             (2005551111)           |              (2005551143)              |\n");
printf("          $=========================================================================================================$\n\n");


  do{
printf ("        -BAB- \n");
printf ("(1) Menghitung Luas\n");
printf ("(2) Menghitung Volume\n");
printf ("(3) Menghitung Deret\n");
printf ("(4) Menghitung Luas Permukaan\n");
printf ("(5) Menghitung Perhitungan Peta\n");


printf ("\n SILAHKAN MASUKAN KODE SESUAI PILIHAN DIATAS : ");

scanf("%i", &x);
printf("\n=================================================\n\n");

 if (x==1){
    luas();
 }


 else if (x==2){
   volume();
 }

 else if (x==3){
   deret();
 }

 else if (x==4){
   luaspermukaanruang();
 }

 else if (x==5){
    perhitunganpeta();
 }

 else {
 printf ("ERROR");
 }
printf("\n");
printf("=====================================================\n");
printf("Ulangi Program? (Ya (Y) or Tidak (N)) : ");
scanf(" %c", &ulang);
printf("=====================================================\n");
  }
while(ulang == 'y' ||ulang == 'Y');

printf ("\n\n\n\t\t\t\t\t\t\t-END-\n\n\n");
printf ("\n\nTERIMA KASIH : )\n\n");
return 0;
}

/*
APA YANG INGIN DITAMBAHKAN LAGI?
Kelompok kami ingin menambahkan beberapa hal manarik lagi berupa:
- Latihan Soal untuk setiap Bab
- Memperbanyak Bab dan Materi Matematika lagi
- Program bisa menyimpan perkembangan nilai dari soal latihan user
*/
