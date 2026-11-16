data = [60, 85, 40, 90, 75, 50, 95]

# 1. Cari apakah 85 ada di dalam data
if 85 in data:
    posisi = data.index(85)
    print(f"Nilai 85 ada di dalam data, posisi index: {posisi}")
else:
    print("Nilai 85 tidak ada di dalam data.")

# 2. Ambil nilai yang termasuk kategori lulus (>= 75)
lulus = [nilai for nilai in data if nilai >= 75]

print("Nilai yang termasuk kategori lulus:", lulus)