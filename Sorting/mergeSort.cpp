#include<iostream>
using namespace std;

void merge(int arr[], int s, int e) {

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int first[len1],second[len2];

    //copy values
    for(int i=0; i<len1; i++) {
        first[i] = arr[s+i];
    }

    for(int j=0; j<len2; j++) {
        second[j] = arr[mid+1+j];
    }

    //merge 2 sorted arrays     
    int i = 0;
    int j = 0;
    int k = s;

    while(i < len1 && j < len2) {
        if(first[i] < second[j]) {
            arr[k++] = first[i++];
        }
        else{
            arr[k++] = second[j++];
        }
    }   

    while(i < len1) { 
        arr[k++] = first[i++];
    }

    while(j < len2 ) {
        arr[k++] = second[j++];
    }


}

void mergeSort(int arr[], int s, int e) {

    //base case
    if(s >= e) {
        return;
    }
    
    int mid = (s+e)/2;

    //left part sort karna h 
    mergeSort(arr, s, mid);
    
    //right part sort karna h 
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s, e);

}

int main() {

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    mergeSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}