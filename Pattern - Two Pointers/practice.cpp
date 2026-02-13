#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main(){
    set<vector<int>> s;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    int n = nums.size();

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(nums[i]+nums[j]+nums[k] == 0){
                    vector<int> trip = {nums[i],nums[j],nums[k]};
                    sort(trip.begin(),trip.end());
                    s.insert(trip);
                }
            }
        }
    }


return 0;
}