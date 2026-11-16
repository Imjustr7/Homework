data = [-3, 5, 0, -12, 8, 15, -1, 22]

# 1. Cari apakah nilai 0 ada di dalam array
if 0 in data:
    posisi = data.index(0)
    print(f"Nilai 0 ada di dalam data, posisi index: {posisi}")
else:
    print("Nilai 0 tidak ada di dalam data.")

# 2. Filter hanya angka yang positif (> 0)
hasil_filter = [nilai for nilai in data if nilai > 0]

print("Hasil filter (> 0):", hasil_filter)