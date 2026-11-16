const produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"];

// 1. Cari apakah "Keyboard" ada di dalam daftar
if (produk.includes("Keyboard")) {
  console.log('"Keyboard" ada di dalam daftar.');
} else {
  console.log('"Keyboard" tidak ada di dalam daftar.');
}

// 2. Filter nama produk yang panjangnya > 5 karakter
const hasilFilter = produk.filter((item) => item.length > 5);

console.log("Nama produk yang panjangnya lebih dari 5 karakter:");
for (const item of hasilFilter) {
  console.log(item);
}