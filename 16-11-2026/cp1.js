const data = [60, 85, 40, 90, 75, 50, 95];

// 1. Cari apakah 85 ada di dalam data
if (data.includes(85)) {
  const posisi = data.indexOf(85);
  console.log("Nilai 85 ada di dalam data, posisi index:", posisi);
} else {
  console.log("Nilai 85 tidak ada di dalam data.");
}

// 2. Ambil nilai yang termasuk kategori lulus (>= 75)
const lulus = data.filter((nilai) => nilai >= 75);
console.log("Nilai yang termasuk kategori lulus:", lulus);