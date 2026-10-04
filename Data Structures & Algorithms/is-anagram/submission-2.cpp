class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        
        std::unordered_map<char, int> characterCount;

        for (char c : s) {
            characterCount[c]++;
        }

        for (char c : t) {
            characterCount[c]--;
        }

        for (const auto& [c, n] : characterCount) {
            if (n != 0) {
                return false;
            }
        }

        return true;
    }
};
