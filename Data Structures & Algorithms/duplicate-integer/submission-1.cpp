#include <vector>
#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(const std::vector<int>& nums) {
        std::unordered_set<int> seen;
        for (int num : nums) {
            // insert returns a pair<iterator, bool> where bool is true if newly inserted
            if (!seen.insert(num).second) {
                return true;
            }
        }
        return false;
    }
};