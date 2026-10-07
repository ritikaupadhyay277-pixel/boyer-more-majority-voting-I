class Solution {
public:
    int majorityElement(vector<int>& nums) {
    long long int candi = nums[0];
        int count =0;
        for (int i=0 ; i<nums.size(); i++){
           if (candi == nums[i]){
            count ++;
           }
           else {
            count --;
           }
           if (count ==0){
            candi= nums[i];
            count=1;
           }
        }
        
        // verification of n/2 appearance 
        int count1 =0;
        for(int i =0 ; i<nums.size(); i++){
            if (nums[i]== candi ){
                count ++ ;
            }
        }
        return candi;
    }
};
