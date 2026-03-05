#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int threesumclosest(vector<int> &nums, int target){
    int closestsum = nums[0] + nums[1] + nums[2];
    sort(nums.begin(), nums.end());
    for(int i=0; i<nums.size() - 2; i++){
        int left = i + 1;
        int right = nums.size() - 1;

        while(left<right){
         int currentsum = nums[i] + nums[left] + nums[right];
         if(abs(target - currentsum) < abs(target - closestsum)){
            closestsum = currentsum;
         }
         if(currentsum < target){
            left++;
         }
         else if(currentsum > target){
            right--;
         }
         else return currentsum;
        }
    }
return closestsum;
}

int main(){
    int n;
    vector<int> nums;
    
    cout << "Enter numbers (and any letter to stop): ";
    while(cin >> n){
        nums.push_back(n);
    }
    
    cin.clear();
    string dummy; cin >> dummy; 

    int t;
    cout << "Enter target: ";
    cin >> t;

    cout << "The closest sum is: " << threesumclosest(nums, t) << endl;
    
    return 0;
}