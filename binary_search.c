
#include <stdio.h>

int bin_search(int *arr, int len, int key_val)
{
 int first = 0;
 int last = len - 1;

 while (first <= last)
 {
  int midd = (first + last) / 2;
  if (arr[midd] < key_val)
  {
   printf("The search element is found at index %d\n", midd + 1);
   return 1;
  }
  else if (arr[midd] > key_val)
  {
   last = midd - 1;
  }
  else
  {
   first = midd + 1;
  }
  midd = (first + last) / 2;
 }
 if (first > last)
 {
  printf("Search element is not found!!!!\n\n");
 }
 return 0;
}

int main(void)
{
 int data_arr[100], len, key;
 printf("How many data you want: ");
 scanf("%d", &len);
 printf("Enter the search element: ");
 scanf("%d", &key);

 for (int i = 0; i < len; i++)
 {
  printf("\nEnter the element no. %d: ", i + 1);
  scanf("%d", &data_arr[i]);
 }
 bin_search(data_arr, len, key);
}
