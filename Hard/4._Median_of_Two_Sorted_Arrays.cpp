#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>& nums1={1,2};
    vector<int>& nums2={3,4};
    vector<int>& sum=nums1+nums2;
    for(int i=0;i<sum.size();i++){
        cout<<sum[i];
    }
    return 0;
}