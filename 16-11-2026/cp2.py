produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"]

# 1. Cari apakah "Keyboard" ada di dalam daftar
if "Keyboard" in produk:
    print('"Keyboard" ada wok.')
else:
    print('"Keyboard" abess.')

# 2. Filter nama produk yang panjangnya > 5 karakter
hasil_filter = [item for item in produk if len(item) > 5]

print("Nama produk yang panjangnya lebih dari 5 karakter:")
for item in hasil_filter:
    print(item)