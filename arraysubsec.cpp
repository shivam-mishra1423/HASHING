#include<iostream>
#include<vector>
using namespace std;
bool issubset(vector<int>&arr1, vector<int>&arr2, int m, int n){
for(int i=0;i<n;i++){
    bool found=false;

    for(int j=0;j<m;j++){
        if(arr2[i]==arr1[j]){
            found=true;
            break;
        }
    }
    if(!found) return false;
}
return true;
}
int main()
{
    vector<int>arr1={11,1,13,21,3,7};
    vector<int>arr2={11,3,7,1};

    int m=arr1.size();
    int n=arr2.size();

    if(issubset(arr1,arr2,m,n)){
        cout<<"yes "<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

}
