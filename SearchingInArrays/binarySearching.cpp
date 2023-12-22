#include<iostream>
#include<climits>


using namespace std;

int binarySearching(int arr[],int sizeArr, int key){
    int count = 0;
    int s = 0;
    int e = sizeArr;
    int mid = (s+e)/2;
    while (arr[mid] != key)
    {   
        if(arr[mid] == key){
            return count;
        }
        count = count + 1;
        if(key == arr[i]){
            return count;
        }
        
    }
    return count;    
}

int main(){
    cout<<"Array length : ";
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter arr["<<i<<"] :";
        cin>>arr[i];
    }

    cout<<"Finding Key : ";
    int key;
    cin>>key;

    cout<<"Their Key at index: "<<binarySearching(arr, n, key);



    return 0;
}