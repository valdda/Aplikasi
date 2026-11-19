print("================================")
print("          STOCK MANAGER")
print("================================")

nama_barang = input("Nama barang       : ")
stok_awal = int(input("Stok awal         : "))
barang_masuk = int(input("Barang baru masuk : "))
barang_terjual = int(input("Barang terjual    : "))
harga_jual = int(input("Harga jual/barang : "))
jumlah_rak = int(input("Jumlah rak        : "))

stok_tersedia = stok_awal + barang_masuk
stok_akhir = stok_tersedia - barang_terjual
pendapatan = barang_terjual * harga_jual
nilai_stok = stok_akhir * harga_jual
rata_rata_rak = stok_akhir / jumlah_rak
sisa_barang = stok_akhir % jumlah_rak
persentase_terjual = (barang_terjual / stok_tersedia) * 100

if stok_akhir == 0:
    status_stok = "Stok habis"
elif stok_akhir <= 10:
    status_stok = "Stok menipis"
else:
    status_stok = "Stok ada"

print("\n================================")
print("             HASIL")
print("================================")   

print("Nama barang        :", nama_barang)
print("Stok tersedia      :", stok_tersedia)
print("Stok akhir         :", stok_akhir)
print("Pendapatan         : Rp", pendapatan)
print("Nilai stok         : Rp", nilai_stok)
print("Rata-rata per rak  :", rata_rata_rak)
print("Sisa barang        :", sisa_barang)
print("Persentase terjual :", persentase_terjual, "%")
print("Status stok        :", status_stok)