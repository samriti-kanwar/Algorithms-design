#include <iostream>
using namespace std;
int main()
{
    int arr[5], n;
    cout << "Enter the number of Elements:";
    cin >> n;
    cout<<"Enter the Elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(arr[j]<arr[i]){
                int temp;
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"Sorted list:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}