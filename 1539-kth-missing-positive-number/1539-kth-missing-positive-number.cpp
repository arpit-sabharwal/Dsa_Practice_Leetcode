class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int a=arr[0]-1;
        if(k>a){
            k-=a;
        }
        else{
            return k;
        }
        
        for(int i=0;i<arr.size()-1;i++){
            a=arr[i+1]-arr[i]-1;
            if((k-a)<=0){
                return arr[i]+k;
            }
            else{
                k-=a;
            }
        }
        return arr[arr.size()-1]+k;
    }
};