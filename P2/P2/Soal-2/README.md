# Soal 2 : Lomba Adu Perfect Note Vocaloid (Inheritance)

## KERJAKAN MAIN SAJA

## Deskripsi
Pada soal ini, kamu diminta untuk melengkapi bagian `main` pada file `soal2.cpp` untuk mensimulasikan lomba adu perfect note antar Vocaloid. Setiap Vocaloid memiliki stat "accuracy" dan "stamina". Terdapat dua jenis Vocaloid: FirstVocaloid dan SecondVocaloid, yang diturunkan dari class dasar `Vocaloid`.

Setiap ronde, dua Vocaloid akan saling beradu perfect note secara bergantian. Setiap serangan, accuracy penyerang akan mengurangi stamina lawan. Lomba berakhir jika stamina salah satu Vocaloid habis (<= 0). Siapa yang stamina-nya masih tersisa, dialah pemenangnya.

## Input
- Nama, accuracy, dan stamina untuk FirstVocaloid.
- Nama, accuracy, dan stamina untuk SecondVocaloid.
- Penentuan siapa yang mendapat giliran pertama (`first` atau `second`).

## Output
- Status stamina setiap Vocaloid setelah setiap serangan.
- Nama pemenang setelah simulasi selesai.

## Expected Input
```
miku 30 120
rin 20 150
first
```

## Expected Output
```
miku has 120 stamina remaining.
rin has 150 stamina remaining.
miku attacks rin!
rin has 120 stamina remaining.
rin attacks miku!
miku has 100 stamina remaining.
...
rin has 0 stamina remaining.
miku wins the contest!
```

## Catatan
- Lengkapi bagian `main` pada file `soal2.cpp`.
- Gunakan objek turunan dari class `Vocaloid` untuk kedua peserta.
- Simulasi berjalan hingga stamina salah satu peserta habis.
- Cetak status stamina setiap peserta setelah setiap serangan.
- Cetak pemenang di akhir simulasi.
- Input nama hanya 1 kata (tanpa spasi).
- Jangan gunakan AI karena akan menumpulkan dasar pemrogramanmu. Jika bingung, cari referensi di Modul atau Stack Overflow.
