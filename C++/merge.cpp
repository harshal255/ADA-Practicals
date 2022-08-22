#include<bits/stdc++.h>
using namespace std;
 
void merge(int* a,int *b,int l,int mid,int h)
{
    int i=l,k=l,j=mid+1;
   
    while(i<=mid && j<=h)
    {
        if(a[i]<=a[j])
        {
           b[k]=a[i];
           i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }
    while(j<=h)
    {
         b[k]=a[j];
        j++;k++;
    }
    while(i<=mid)
    {
        b[k]=a[i];
        i++;k++;
    }
    for(int i=l;i<=h;i++)
    {
        a[i]=b[i];
    }
}
void mergesort(int a[],int l,int h)
{
    int b[h+1];
    if(l<h){
    int mid=(l+h)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,h);
    merge(a,b,l,mid,h);
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

    mergesort(a,0,n-1);
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