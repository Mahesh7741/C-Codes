// #include<iostream>
// #include <map> 
// using namespace std;
// int main(){
//     int size;
//     cout<<"Enter Array Size : "<<endl;
//     cin>>size;
//     int arr[size];
//     cout<<"Enter Array : "<<endl;
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     map< int, int>mpp;
//     for(int i=0;i<size;i++){
//         mpp[arr[i]]++;
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<"--->"<<mpp[arr[i]]<<endl;
//     }
//     for(auto it:mpp){
//         cout<<it.first<<"-->"<<it.second<<endl; 
//     }
// }


#include <iostream>
using namespace std;
const int MAX_SIZE = 100; 
void FindFreqOfElem(int arr[], int size) {
    int count[MAX_SIZE] = {0}; 
    for (int i = 0; i < size; ++i) {
        count[arr[i]]++;
    }
    for (int i = 0; i < MAX_SIZE; ++i) {
        if (count[i] > 1) {
            cout << "Number: " << i << ", Count: " << count[i] << endl;
        }
    }
}
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    cout << "Duplicates in the array with counts are:\n";
    FindFreqOfElem(arr, size);
    return 0;
}
