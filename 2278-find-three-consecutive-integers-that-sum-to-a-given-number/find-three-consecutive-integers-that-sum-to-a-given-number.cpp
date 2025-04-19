class Solution {
public:
    vector<long long> sumOfThree(long long num) {
    long long result=num/3-1;
    if (num%3!=0){
        return {};}

    
       return {result,result+1,result+2};
      
      
    }
};