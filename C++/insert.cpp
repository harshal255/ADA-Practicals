#include <bits/stdc++.h>
using namespace std;



void insertsort(int n ,int arr[]){

for(int i=1;i<n;i++){

    int cur= arr[i];
    int j=i-1;//start from i-1=0
    while(arr[j]>cur && j>=0){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=cur;
    }

}

int main(){
    int n;
    cout<<"Enter Size of array ";
    cin>>n;
    int a[n];
   
     clock_t start, end;

    for(int i=0;i<n;i++){
        a[i]=rand()%1000; 
        cout<<a[i];
        printf(" ");
    }
    cout<<endl;
    cout<<endl;


    
    start = clock();

    insertsort(n,a);
     for(int i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }

   
    end = clock();


    cout<<endl;
    cout<<endl;
    cout<<endl;


    
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    
    
    return 0;
}
