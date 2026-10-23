class Solution {
public:
    bool isAnagram(string s, string t) {
        //needs an hashmap
        //edge cases differnet sizes is automatic false
        // can i iterate wiouth knowing hte size ?
        int size=s.size();
        if (size!= t.size()){
            return false;
        }

        int count[26] = {0};
        for (int i=0; i< size;i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
    }
    for (int c : count) {
            if (c != 0) {
                return false;
            }
        }

        return true;
    }
};
