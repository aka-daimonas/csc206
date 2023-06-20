
#include <stdio.h>

void lin_search(int *arr, int len, int elem)
{
 for (int i = 0; i < len; i++)
 {
  if (arr[i] == elem)
  {
   printf("Element found at index %d!!\n", i + 1);
   exit(0);
  }
 }
 printf("Search element is not in the data collection.");
}

int main(void)
{
 int len, data_arr[20], key;
 printf("Enter how many data you want: ");
 scanf("%d", &len);
 for (int i = 0; i < len; i++)
 {
  printf("Enter the element no. %d: ", i + 1);
  scanf("%d", &data_arr[i]);
 }
 printf("Enter data to be searched: ");
 scanf("%d", &key);
 lin_search(data_arr, len, key);

 return 0;
}
