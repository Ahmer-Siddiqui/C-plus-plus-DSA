#include<iostream>
#include<climits>


using namespace std;

int linearSearching(int arr[],int sizeArr, int key){
    for (int i = 0; i < sizeArr; i++)
    {
        if(key == arr[i]){
            return i;
        }
        
    }
    return -1;
    
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

    int funcVal = linearSearching(arr, n, key);
    if(funcVal != -1){
        cout<<"Their Key at index: "<<funcVal;
    }
    else{
        cout<<"Their Key is not present so they return: "<<funcVal;
    }

    return 0;
}