#include <bits/stdc++.h>
using namespace std;



void mergesort(){


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

    mergesort(n,a);
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
