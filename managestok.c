#include <stdio.h>

int main() {
    char nama_barang [100];
    int stok_awal;
    int barang_masuk;
    int barang_terjual;
    int harga_jual;
    int jumlah_rak;
    int stok_tersedia;
    int stok_akhir;
    int pendapatan;
    int sisa_barang;
    float rata_rata_rak;
    float persentase_terjual;

    printf("Nama barang       : ");
    scanf(" %[^\n]", nama_barang);

    printf("Stok awal         : ");
    scanf("%i", &   stok_awal);

    printf("Barang baru masuk : ");
    scanf("%i", &barang_masuk);

    printf("Barang terjual    : ");
    scanf("%i", &barang_terjual);

    printf("Harga jual/barang : ");
    scanf("%i", &harga_jual);

    printf("Jumlah rak        : ");
    scanf("%i", &jumlah_rak);

    stok_tersedia = stok_awal + barang_masuk;
    stok_akhir = stok_tersedia - barang_terjual;
    pendapatan = barang_terjual * harga_jual;
    rata_rata_rak = (float)stok_akhir / jumlah_rak;
    sisa_barang = stok_akhir % jumlah_rak;
    persentase_terjual = ((float)barang_terjual / stok_tersedia) * 100;

    char* status_stok;
    if (stok_akhir == 0) {
        status_stok = "Stok habis";
    } 
    else if (stok_akhir <= 20) {
        status_stok = "Stok menipis";
    } 
    else {
        status_stok = "Stok aman";
    }

    printf("\n");
    printf("Hasilnys\n");
    printf("Nama barang        : %s\n", nama_barang);
    printf("Stok tersedia      : %d\n", stok_tersedia);
    printf("Stok akhir         : %d\n", stok_akhir);
    printf("Harga barang       : Rp. %d\n", harga_jual);
    printf("Pendapatan         : Rp %d\n", pendapatan);
    printf("Rata-rata per rak  : %.2f\n", rata_rata_rak);
    printf("Sisa barang        : %d\n", sisa_barang);
    printf("Persentase terjual : %.2f%%\n", persentase_terjual);
    printf("Status stok        : %s\n", status_stok);
    return 0;
}