class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;

        unordered_map<int, int> counts;
        for (const auto& num : nums) {
            ++counts[num];
        }
        vector<int> top_k;
        for (const auto& pair : counts) {
            pq.push({pair.second, pair.first});
            if (pq.size() > k) {
                pq.pop();
            }
        }

        while (!pq.empty()) {
            top_k.push_back(pq.top().second);
            pq.pop();
        }

        return top_k;
    }
};