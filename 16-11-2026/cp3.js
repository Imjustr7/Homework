const data = [-3, 5, 0, -12, 8, 15, -1, 22];

// 1. Cari apakah nilai 0 ada di dalam array
if (data.includes(0)) {
  const posisi = data.indexOf(0);
  console.log("Nilai 0 ada di dalam data, posisi index:", posisi);
} else {
  console.log("Nilai 0 tidak ada di dalam data.");
}

// 2. Filter hanya angka yang positif (> 0)
const hasilFilter = data.filter((nilai) => nilai > 0);

console.log("Hasil filter (> 0):", hasilFilter);