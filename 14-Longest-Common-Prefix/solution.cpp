class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string result = "";

        for (int j = 0; j < strs[0].length(); j++) {

            char ch = strs[0][j];

            for (int i = 0; i < strs.size() - 1; i++) {

                if (j >= strs[i + 1].length() || strs[i][j] != strs[i + 1][j]) {
                    return result;
                }

            }

            result += ch;
        }

        return result;
    }
};
