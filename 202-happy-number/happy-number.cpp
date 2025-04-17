class Solution {
public:
    bool isHappy(int n) {
         unordered_set<int> s;
    for (int sum = 0; s.find(n) == s.end(); n = sum, sum = 0) {
      s.insert(n);
      for (; n > 0; n /= 10)
        sum += (n % 10) * (n % 10);
    }
    return s.find(1) != s.end();
        
        
        
        
        
        
        
        
    }
};