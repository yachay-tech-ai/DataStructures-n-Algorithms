void merge(vector<int> &arr, int l, int m, int r, long &count) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
  
    int L[n1], R[n2]; 
  int lenL = n1;
  int lenR = n2;
    
    for (i = 0; i < n1; i++) L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) R[j] = arr[m + 1+ j]; 
    i = 0; j = 0; k = l; 
    
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
            lenL--;
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
            count+= lenL;
        } 
        k++; 
    } 
  
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
        
    } 
  
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
        
    } 
} 
  

void mergeSort(vector<int> &arr, int l, int r, long &count) 
{ 
    if (l >= r) return;
    int m = l+(r-l)/2; 
    mergeSort(arr, l, m, count); 
    mergeSort(arr, m+1, r, count); 
    merge(arr, l, m, r, count); 

} 
  
