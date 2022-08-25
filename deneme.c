//yılan oyunu oluşturmak için kullanılan c programı
//yılanın yönünü belirlemek için kullanılan komutların kullanılması
//yılanın yerini belirlemek için kullanılan komutların kullanılması
//yılanın yerini görmek için kullanılan komutların kullanılması


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <termios.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/select.h>
#include <sys/wait.h>
#include <sys/mman.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <sys/msg.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <sys/time.h>
#include <sys/resource.h>


#define MAX_YILAN_UZUNLUGU 10
#define MAX_YILAN_YONU 4
#define MAX_YILAN_YERI_UZUNLUGU 10
#define MAX_YILAN_YERI_YONU 4
#define MAX_YILAN_YERI_SAYISI 10


typedef struct yilan_yonu
{
    int yon;
    char yon_char;
}yilan_yonu;


typedef struct yilan_yeri
{
    int yeri_uzunlugu;
    int yeri_yonu;
    char yeri_yonu_char;
}yilan_yeri;


typedef struct yilan
{
    int uzunluk;
    int yon;
    int yeri_sayisi;
    yilan_yeri yerler[MAX_YILAN_YERI_SAYISI];
}yilan;


typedef struct yilan_oyunu
{
    int yilan_uzunlugu;
    int yilan_yonu;
    int yilan_yeri_sayisi;
    yilan_yeri yilan_yerleri[MAX_YILAN_YERI_SAYISI];
}yilan_oyunu;


typedef struct yilan_oyunu_hareketi
{
    int yilan_uzunlugu;
    int yilan_yonu;
    int yilan_yeri_sayisi;
    yilan_yeri yilan_yerleri[MAX_YILAN_YERI_SAYISI];
}yilan_oyunu_hareketi;


typedef struct yilan_oyunu_hareketi_mesaji
{
    long mesaj_tipi;
    yilan_oyunu_hareketi yilan_oyunu_hareketi_mesaji;
}yilan_oyunu_hareketi_mesaji;


typedef struct yilan_oyunu_hareketi_mesaji_sonucu
{
    long mesaj_tipi;
    int sonuc;
}yilan_oyunu_hareketi_mesaji_sonucu;


typedef struct yilan_oyunu_hareketi_mesaji_sonucu_mesaji
{
    long mesaj_tipi;
    int sonuc;
    char mesaj[100];
}yilan_oyunu_hareketi_mesaji_sonucu_mesaji;


typedef struct yilan_oyunu_hareketi_mesaji_sonucu_mesaji_oyun_sonucu
{
    long mesaj_tipi;
    int sonuc;
    char mesaj[100];
    int oyun_sonucu;
}yilan_oyunu_hareketi_mesaji_sonucu_mesaji_oyun_sonucu;





