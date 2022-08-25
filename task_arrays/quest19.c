/* Змейка. Для заданных чисел M и N сформировать матрицу, заполненную по спирали.  */

#include <stdio.h>

int main() {
  int valueLine, valueColumn;
  scanf("%d %d", &valueLine, &valueColumn);

  int arr[10][10] = {0};
  int countRight=1, countDown=1, countLeft=1, countUp=1;
  int num=1, count=0, i=-1, j=-1;

  if (valueLine*valueColumn!=1) {
  while (num<=valueLine*valueColumn) {
    for (i++, j++; j<valueColumn-countRight;) arr[i][j++] = num++;
    if (count!=0) countRight++;

    if (num<=valueLine*valueColumn)
    for (i+=count, j-=count;i<valueLine-countDown;) arr[i++][j] = num++;
    if (count!=0) countDown++;

    if (num<=valueLine*valueColumn)
    for (i-=count, j-=count;j>=countLeft;) arr[i][j--] = num++;
    if (count!=0) countLeft++;

    if (num<=valueLine*valueColumn)
    for (i-=count, j+=count;i>=countUp;) arr[i--][j] = num++;
    countUp++;
    count++;
    if (count>1) count--;
  }
  }

  for (int i=0; i<valueLine; i++) {
    for (int j=0; j<valueColumn; j++) {
      if ((valueLine < valueColumn && valueLine==1) || (valueLine*valueColumn==1)) {
        for (int i=0; i<valueColumn; i++) {
          arr[i][0]=i+1;
          printf("%3d", arr[i][0]);
        }
        return 0;
      } else if (valueLine > valueColumn && valueColumn==1) {
        for (int i=0; i<valueLine; i++) {
          arr[i][0]=i+1;
          printf("%3d", arr[i][0]);
          printf("\n");
        }
        return 0;
        } else {
          printf("%3d", arr[i][j]);
        }
    }
    printf("\n");
  }
  return 0;
}






/* #include <stdio.h>
int main() {
    int n, m, dn, dm, d, i=0, n1=0, m1=-1, l=0;
    scanf("%d %d", &n, &m);
    int a[n*m];
    while(d=m+(n-1-m)*(l&1)-l/2){
        dn=(l&2?-1:1)*(  l&1);
        dm=(l&2?-1:1)*(++l&1);
        while(d--) a[(n1+=dn)*m+(m1+=dm)]=++i;}
    for(int i=0; i<n*m; i++)
        printf("%3d%s", a[i], (i+1)%m?"":"\n");
} */