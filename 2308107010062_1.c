#include <stdio.h>

int main() {
  int pilihan, desimal, biner, oktal;

  // konversi
  printf("Pilih jenis konversi:\n");
  printf("1. Desimal ke Biner\n");
  printf("2. Biner ke Desimal\n");
  printf("3. Desimal ke Oktal\n");
  printf("4. Oktal ke Desimal\n");
  printf("Masukkan pilihan (1-4): ");
  scanf("%d", &pilihan);

  switch (pilihan) {
    case 1:
      // konversi desimal ke biner
      printf("Masukkan bilangan desimal: ");
      scanf("%d", &desimal);
      biner = 0;
      int i = 1;
      while (desimal > 0) {
        biner += (desimal % 2) * i;
        desimal /= 2;
        i *= 10;
      }
      printf("Bilangan binernya adalah: %d\n", biner);
      break;
    case 2:
      // koversi biner ke desimal
      printf("Masukkan bilangan biner: ");
      scanf("%d", &biner);
      desimal = 0;
      int j = 1;
      while (biner > 0) {
        desimal += (biner % 10) * j;
        biner /= 10;
        j *= 2;
      }
      printf("Bilangan desimalnya adalah: %d\n", desimal);
      break;
    case 3:
      // Konversi Desimal ke Oktal
      printf("Masukkan bilangan desimal: ");
      scanf("%d", &desimal);
      oktal = 0;
      int k = 1;
      while (desimal > 0) {
        oktal += (desimal % 8) * k;
        desimal /= 8;
        k *= 10;
      }
      printf("Bilangan oktalnya adalah: %d\n", oktal);
      break;
    case 4:
      // Konversi Oktal ke Desimal
      printf("Masukkan bilangan oktal: ");
      scanf("%d", &oktal);
      desimal = 0;
      int l = 1;
      while (oktal > 0) {
        desimal += (oktal % 10) * l;
        oktal /= 10;
        l *= 8;
      }
      printf("Bilangan desimalnya adalah: %d\n", desimal);
      break;
    default:
      printf("pilihan yang anda pilih tidak ada!\n");
  }

  return 0;
}
