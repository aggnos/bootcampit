#include <iostream>
using namespace std;

void quickSort(int arr[], int left, int right)
{
  int i = left, j = right;
  int tmp;
  int pivot = arr[(left + right) / 2];

  /* partition */
  while (i <= j) {
    while (arr[i] < pivot)
      i++;
    while (arr[j] > pivot)
      j--;
    if (i <= j) {
      tmp = arr[i];
      arr[i] = arr[j];
      arr[j] = tmp;
      i++;
      j--;
    }
  }
  /* recursion */
  if (left < j)
    quickSort(arr, left, j);
  if (i < right)
    quickSort(arr, i, right);
}

int main(int argc, char *argv[])
{

  int n;
  cin >> n;
  int polje[n];
  
  for(int i = 0; i < n; i++) {
    cin >> polje[i];
  }

  quickSort(polje, 0, n-1);

  for(int i = 0; i < n; i++) {
    cout << polje[i] << " ";
  }
  
  
  return 0;
}
