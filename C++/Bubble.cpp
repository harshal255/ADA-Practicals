#include <bits/stdc++.h>
using namespace std;

void bubblesort(int n,int arr[]){
        
        
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < (n - 1-i); j++) {
                if (arr[j ] > arr[j+1]) {
                    int temp;
                    // swap elements
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                   
                }
            }
        }
}

int main(){
    int n;
    cout<<"Enter Size of array ";
    cin>>n;
    int a[n];

    /* Time function returns the time since the 
        Epoch(jan 1 1970). Returned time is in seconds. */
     clock_t start, end;

    for(int i=0;i<n;i++){
        a[i]=rand()%1000; 
        cout<<a[i];
        printf(" ");
    }
    cout<<endl;
    cout<<endl;


    /* Recording the starting clock tick.*/
    start = clock();

    bubblesort(n,a);
     for(int i=0;i<n;i++)
     {
         cout<<a[i]<<" ";
     }

    // Recording the end clock tick.
    end = clock();


    cout<<endl;
    cout<<endl;
    cout<<endl;


    // Calculating total time taken by the program.
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    
    
    return 0;
}
