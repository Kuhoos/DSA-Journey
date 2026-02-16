//Sum of the elements in an array
#include <iostream>
using namespace std;
void sumofarr(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<"sum of all the elements is:"<<sum<<endl;

}
int main() {
int arr[1000];
int n;
cout<<"Enter the size of the array:"<<endl;
cin>>n;
cout<<"Input the elemnts of the array:"<<endl;
for(int i=0;i<n;i++){
cin>>arr[i];
}
sumofarr(arr,n);


    

    return 0;
}
