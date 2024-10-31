#include <iostream>
#include <vector>

using namespace std;

// https://www.hackerrank.com/challenges/vector-erase/problem
int main() {
  int n;
  cin >> n;

  vector<int> nums(n);
  for (int i = 0; i < n; ++i) {
    cin >> nums[i];
  }

  // cout << "Vector: ";
  // for (int x : nums) cout << x << ' ';
  // cout << endl;

  cin >> n;
  nums.erase(nums.begin() + n - 1);

  // cout << "Vector after erase(" << n << "): ";
  // for (int x : nums) cout << x << ' ';
  // cout << endl;

  int from, to;
  cin >> from >> to;
  nums.erase(nums.begin() + from - 1, nums.begin() + to - 1);

  cout << nums.size() << endl;
  // cout << "Vector after erase(" << from << "," << to << "): ";
  for (int x : nums) cout << x << ' ';
  cout << endl;
}
