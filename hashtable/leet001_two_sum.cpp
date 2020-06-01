#include <stdio.h>
#include <vector>
#include <map>

using namespace std;

class Solution {
    
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int, int> hash_map;
        
        for (int i=0; i<nums.size(); i++) {
            int another = target-nums[i];
            
            if (hash_map.find(another) != hash_map.end()){
                result.push_back(i);
                result.push_back(hash_map[another]);
                break;
            }
            
            hash_map.insert(make_pair(nums[i], i));
        }
        
        return result;
    }
};
