#include <bits/stdc++.h>
using namespace std;
long long  merge(char array[100001][11], char temp[100001][11], int left, int mid,
          int right)
{
    int i, j, k;
    long long  count = 0;
    i = left; 
    j = mid; 
    k = left; 
    while (i < mid  && j <= right) {
        if (strcmp(array[i],array[j])<=0) {
        	strcpy(temp[k++],array[i++]);
        }
        else {
            strcpy(temp[k++],array[j++]);
            count += (long long)(mid - i);
        }
    }
    while (i <mid )
        strcpy(temp[k++],array[i++]);  
    while (j <= right)
        strcpy(temp[k++],array[j++]);
   for (i = left; i <= right; i++)
        strcpy(array[i],temp[i]);
    return count;
}

long long  _mergeSort(char arr[100001][11], char temp[100001][11], int left, int right)
{
    int mid;
    long long count = 0;
    if (right > left) {
        mid = (right + left) / 2;
        count += _mergeSort(arr, temp, left, mid);
        count += _mergeSort(arr, temp, mid + 1, right);
        count += merge(arr, temp, left, mid + 1, right);
    }
    return count;
} 

long long mergeSort(char arr[100001][11], int size)
{
    char temp[array_size+1][11];
    return _mergeSort(arr, temp, 0, size - 1);
}
  

int main() {
	int n;
	int a, b,c=0;
	char l[100001][11];
	
	while(cin >> n){
		a=0;
		while(n--) {
			scanf("%s",l[a++]);
		}
		cout << mergeSort(l,a) << endl;
	}
	return 0;
}
