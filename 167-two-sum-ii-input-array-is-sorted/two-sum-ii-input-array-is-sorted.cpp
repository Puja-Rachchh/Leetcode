class Solution {
public:
    int binary_search(int k,int start,int end,vector<int>& numbers){
        
        int mid=(start+end)/2;
        while(start<=end){
            if(numbers[mid]==k) return mid;
            else if(numbers[mid]>k){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=(start+end)/2;
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int n=numbers.size();
        for(int i=0;i<n;i++){
            int k =target-numbers[i];
            int ans = binary_search(k,i+1,n-1,numbers);
            if(ans!=-1){
                res.push_back(i+1);
                res.push_back(ans+1);
            }
        }
        return res;
    }
};