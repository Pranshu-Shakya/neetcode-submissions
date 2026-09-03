class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (string s : strs) {
            int freq[26] = {0};
            // Count characters
            for (char ch : s) {
                freq[ch - 'a']++;
            }
            // Create a unique key
            string key;

            for (int i = 0; i < 26; i++) {
                key += to_string(freq[i]) + "#";
            }

            mp[key].push_back(s);
        }
        vector<vector<string>> result;
        for (auto& pair : mp) {
            result.push_back(pair.second);
        }
        return result;
    }
};
