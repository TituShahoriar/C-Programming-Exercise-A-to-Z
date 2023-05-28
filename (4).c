#include <stdio.h>
int main() {
   int n, count = 0, c, d;
   printf("Input the number of elements to be stored in the array: ");
   scanf("%d",&n);
   int arr[n];
   printf("Array Index =");
   for(c=0;c<n;c++)
   {
         printf("%d, ",c);
   }
   printf("\nSample Input =");
   for(c=0;c<n;c++)
      {
          scanf("%d",&arr[c]);
      }
   for (c=0;c<n;c++)
   {
      for(d=c+1;d<n;d++)
      {
            if(arr[d]==arr[c])
            {
                  count++;
                  break;
            }
       }
   }

   printf("\nExpected Output:\nTotal number of duplicate elements found in the array is: %d\n",count);

   return 0;
}