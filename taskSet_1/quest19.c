/* программа, которая вычисляет количество капель и молекул воды в NN гранёных стаканах воды. Привел вариант с объявленными отдельными функциями и без */

#include <stdio.h>
#include <math.h>

int amountDrops(int totalGlasses);
float amountMolec(int totalGlasses);

/* int main(void) {
  int totalGlasses;
  scanf("%d", &totalGlasses);
  printf("%.0f %.3e", totalGlasses * 249.5 / 0.05, (totalGlasses * 249.5) / (3 * pow(10, -23)));
  return 0;
} */

int main(void) {
  int totalGlasses;
  scanf("%d", &totalGlasses);
  printf("%d %.3e", amountDrops(totalGlasses), amountMolec(totalGlasses));
  return 0; 
}

int amountDrops(int totalGlasses) {
  int totalDrops;
  totalDrops = totalGlasses * 249.5 / 0.05; // В одном гранёном стакане ≈249.5 гр. Масса одной капли воды приблизительно 0.05 гр
  return totalDrops;
}

float amountMolec(int totalGlasses) {
  float totalMolec;
  totalMolec = (totalGlasses * 249.5) / (3 * pow(10, -23)); // Масса одной молекулы воды приблизительно равна 3 * 10^-23
  return totalMolec;
}
