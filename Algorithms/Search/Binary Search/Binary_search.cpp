#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool binarySearchRecursive(vector<int> arr, int x, int left, int right){
    if(left > right) return false;
    int mid = left + (right - left)/2;
    if( arr[mid] == x)return true;
    else if(x < arr[mid]) return binarySearchRecursive(arr, x, left, mid-1);
    else return binarySearchRecursive(arr, x, mid + 1, right);
}

bool binarySearchIterative(vector<int> arr, int x){
    int left = 0;
    int right = arr.size() - 1;

    while( left <= right){
        int mid = left + (right - left)/2;
        if(arr[mid] == x) return true;
        else if(x < arr[mid]) right = mid - 1;
        else left = mid + 1;
    }
    return false;
}