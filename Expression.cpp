#include <iostream>
#include <string>

using namespace std;

int main() {
    int arr[4];
    
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }

    
    
int p,max;
p=arr[0]+(arr[1]*arr[2]);
max=p;

if( max<(arr[0]*(arr[1]+arr[2])))
max=(arr[0]*(arr[1]+arr[2]));

if(max<arr[0]*arr[1]*arr[2])
max=(arr[0]*arr[1]*arr[2]);

if(max<(arr[0]+arr[1])*arr[2])
max=((arr[0]+arr[1])*arr[2]);

if(max<(arr[0]+arr[1])+arr[2])
max=((arr[0]+arr[1])+arr[2]);



cout<<max;

}