#include<bits/stdc++.h>
using namespace std;

int answer(int capacity,int i,int arr[]){
    int count = 0; 
    for(int j=i ; j>=0;j--){
        while(arr[j]<=capacity){
            capacity= capacity - arr[j];
            count = count + 1;

        }
    }
    if(capacity==0){ 
        return count;
    }
    else{
        
        return 3000;
    }


}

int min(int a, int b){
    if(a>=b){
        return b;
    }
    else{
        return a;
    }
}

int main(){
    int n;
    cout<<"Enter the Number of Coin:";
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the Coin"<<i+1<<":";
        cin>>a[i];
    }

    int change;
    cout<<"Enter the change require:";
    cin>>change;


    int ans[n][change+1];
    for(int i=0;i<=n;i++){
        int count =0;
        for(int j=0;j<=change;j++){
            if(j==0){
                ans[i][j]=0;
            }
            else if(i==0){
                if(j%a[i]!=0){
                    ans[i][j] = 3000; //Let Infinity = 3000
                }
                else{
                    ans[i][j]= count+1;
                    count = count +1;
                }

            }
            else{
                if(a[i]>j){
                    ans[i][j] = ans[i-1][j];
                }
                else if(j%a[i]==0){
                    ans[i][j]= count +1;
                    count = count +1;

                }
                else{
                    ans[i][j]= min(ans[i-1][j],answer(j,i,a));
                }
            }
        }
    }
    cout<<endl;
    cout<<"The Coin Change Table is Shown Below :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=change;j++){
            cout<<ans[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    
    
    return 0;
}