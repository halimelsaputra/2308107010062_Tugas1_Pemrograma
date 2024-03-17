#include<stdio.h>

int main() {
  int tahun;

  //menginput tahun
  while  (1){

    printf("Masukkan tahun (4 angka): ");
    scanf("%d", &tahun);

    if (tahun < 1000 || tahun > 9999) {
      printf("Tahun harus terdiri dari 4 angka!\n");
      continue;
    }

    if (getchar() != '\n') {
      printf("Input bukan bilangan!\n");
      while (getchar() != '\n');
      continue;
    }

    break;
  }

  // Mengecek tahun kabisat
  if ((tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0) {
    printf("Tahun %d adalah tahun kabisat.\n", tahun);
  } else {
    printf("Tahun %d bukan tahun kabisat.\n", tahun);
  }

  return 0;
}
