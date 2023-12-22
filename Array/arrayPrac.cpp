#include<iostream>
#include<climits>


using namespace std;

int main(){
    cout<<"Array length : ";
    int n;
    cin>>n;

    int amount[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Amount["<<i<<"] :";
        cin>>amount[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        
        maxNo = max(amount[i],maxNo);
        minNo = min(amount[i],minNo);
    }

    cout<<"Maximum "<< maxNo;
    cout<<"\nMinimum "<< minNo;
    return 0;
}