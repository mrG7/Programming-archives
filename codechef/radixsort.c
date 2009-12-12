#include <stdlib.h>
#include <string.h>
#include<stdio.h>

int data[100];
int temp[100];

void radix (int byte, int N, int *source, int *dest)
{
  int count[256];
  int index[256];
  int i=0;
  memset (count, 0, sizeof (count));
  for (i=0; i<N; i++ ) count[((source[i])>>(byte*8))&0xff]++;

  index[0]=0;
  for ( i=1; i<256; i++ ) index[i]=index[i-1]+count[i-1];
  for ( i=0; i<N; i++ ) dest[index[((source[i])>>(byte*8))&0xff]++] = source[i];
}

void radixsort (int *source, int *temp, int N)
{
  radix (0, N, source, temp);
  radix (1, N, temp, source);
  radix (2, N, source, temp);
  radix (3, N, temp, source);
}

void make_random (int *data, int N)
{
  int i;
  for (i=0; i<N; i++ ) data[i]=rand()|(rand()<<16);
}



int main (void)
{
 int i=0;
 make_random(data, 100);
 radixsort (data, temp, 100);
 
 for (i=0; i<100; i++ ) printf("%d\n",data[i]); 
}
