/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) 
    {
        unordered_map<int, Employee*> mp;
        for(auto e : employees)
            mp[e->id] = e;

        int total = 0;
        queue<int> q;
        q.push(id);

        while(!q.empty())
        {
            int cur = q.front();
            q.pop();

            total += mp[cur]->importance;

            for(int sub : mp[cur]->subordinates)
            {
                q.push(sub);
            }
        }
        return total;
    }
};