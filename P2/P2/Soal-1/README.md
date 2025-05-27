# Soal 1 : Manajemen Gaji dan Bonus Anggota Tim Williams F1 (Inheritance)

## JANGAN UBAH MAIN

## Deskripsi
Kamu adalah seorang manajer keuangan di tim Williams F1. Tugasmu adalah mengelola dan menampilkan data gaji bulanan seluruh anggota tim, baik pembalap maupun crew. Gunakan konsep inheritance (pewarisan) dalam OOP untuk membedakan antara pembalap dan crew, serta menghitung bonus yang berbeda untuk masing-masing peran.

Setiap anggota tim memiliki nama (hanya 1 kata, tanpa spasi), peran (pembalap/crew), dan gaji pokok. Pembalap mendapatkan bonus berdasarkan jumlah podium yang diraih, sedangkan crew mendapatkan bonus berdasarkan jumlah race yang diikuti. Buatlah class dasar `AnggotaTim` dan turunkan menjadi class `Pembalap` dan `Crew` dengan perhitungan bonus yang berbeda.

## Input
- Jumlah anggota tim.
- Untuk setiap anggota tim, input secara berurutan:
  - Nama (1 kata, tanpa spasi)
  - Peran (pembalap/crew)
  - Gaji pokok
  - Data tambahan:
    - Untuk pembalap: jumlah podium
    - Untuk crew: jumlah race yang diikuti

## Output
- Gaji total (gaji pokok + bonus) yang diterima setiap anggota tim, dengan format yang jelas, dicetak setelah semua data anggota tim diinput.

## Expected Input
```
3
albon pembalap 1200000 5
sainz pembalap 800000 1
vowles crew 50000 20
```

## Expected Output
```
Gaji total albon (pembalap) adalah $1300000
Gaji total sainz (pembalap) adalah $820000
Gaji total vowles (crew) adalah $70000
```

## Catatan
- Lengkapi blok kode yang ada di `soal1.cpp`.
- Gunakan konsep inheritance untuk menyelesaikan soal ini
- Buatlah class dasar `AnggotaTim` dan turunkan menjadi class `Pembalap` dan `Crew`.
- Input nama hanya 1 kata (tanpa spasi).
- Bonus pembalap: $20.000 per podium.
- Bonus crew: $1.000 per race yang diikuti.
- Jangan gunakan AI karena akan menumpulkan dasar pemrogramanmu. Jika bingung, cari referensi di Modul atau Stack Overflow.
