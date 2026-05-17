#include<iostream>
#include<vector>
using namespace std;

void Sortcolors(vector<int>& nums){
    int l = 0;
    int m = 0;
    int h = nums.size() - 1;

    while(m<=h){
        int temp;
        if(nums[m] == 0){
            temp = nums[l];
            nums[l] = nums[m];
            nums[m] = temp;
            l++;
            m++;
        }
        else if(nums[m] == 1){
            m++;
        }
        else if(nums[m] == 2){
            temp = nums[h];
            nums[h] = nums[m];
            nums[m] = temp;
            h--;
        }
    }
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;
}

int main(){
    int n;
    vector<int> nums;
    cout << "Enter numbers (type -1 to finish): ";
    while(cin >> n && n != -1){
        nums.push_back(n);
    }
    Sortcolors(nums);
    return 0;
}

