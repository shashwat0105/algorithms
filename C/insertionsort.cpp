#include<stdio.h>

using namespace std;
void insertion(int *a, int n)
{
    for(int i=1;i<n;i++)
    {
      int temp=a[i];
      int j=i-1;
        while(j>=0&&a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  insertion(a, n);
  for(int i=0;i<n;i++)
  {
      printf("%d ",a[i]);
  }
  return 0;
}

