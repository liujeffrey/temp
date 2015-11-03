#include<iostream>
using namespace std;

void quick_sort(int a[], int low, int high);
int main() 
{
  int data[9] = {3,89,22,4,66,89,1,20,12};
  quick_sort(data, 0, 8);
  for(int i=0;i<9;i++) 
  {
    cout<<data[i]<<",";
  }
  cout<<endl;
}

void quick_sort(int a[], int low, int high)
{
  int i,j,pivok;
  
  
  if (low < high)
  {
	 i = low;
     j = high;
     pivok = a[low]; 
	 while(i < j) 
     { 
		while(i < j && a[j] >= pivok)
		   j--;
		if (i < j)
		  a[i++] = a[j];
		
		while(i < j && a[i] <= pivok)
		  i++;
		  
		if (i < j)
		  a[j--] = a[i];
     }
	 a[i] = pivok;
	 quick_sort(a, low, i - 1);
	 quick_sort(b, i + 1, high);
  }
  
  
  
}