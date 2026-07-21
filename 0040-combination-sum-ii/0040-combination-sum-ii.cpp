class Solution {
public:
    void f(vector<int>& candidates, int target, vector<int>& ans,
           int idx, vector<vector<int>>& fans) {

        if (target == 0) {
            fans.push_back(ans);
            return;
        }

        for (int i = idx; i < candidates.size(); i++) {

            // Duplicate skip
            if (i > idx && candidates[i] == candidates[i - 1])
                continue;

            // Since array is sorted
            if (candidates[i] > target)
                break;

            ans.push_back(candidates[i]);

            // Move to next index because one element can be used only once
            f(candidates, target - candidates[i], ans, i + 1, fans);

            // Backtrack
            ans.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> fans;
        vector<int> ans;

        f(candidates, target, ans, 0, fans);

        return fans;
    }
};