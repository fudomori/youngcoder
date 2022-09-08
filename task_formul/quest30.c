/* Двоичный поиск */

int binary_search(int arr[], int n, int arg){
  int left=0, right=n;
  while (left <= right) {
    int mid = (left+right)/2;
    if (arr[mid] == arg) {
      return mid;
    } else if (arr[mid] > arg) {
      right = mid-1;
    } else {
      left = mid+1;
    }
  }
  return -1;
}
