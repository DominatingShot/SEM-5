#include <bits/stdc++.h>
using namespace std;
int k1;
bool comp(vector<int> &v1 , vector<int> &v2){
    return v1[k1]>v2[k1];
}
class Solution {
public:
    
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        k1=k;
        sort(score.begin(),score.end(),comp);
        return score;
    }
};