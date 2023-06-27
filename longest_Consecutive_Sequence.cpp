#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &num, int n) {
     unordered_set < int > st;
  for (int i=0;i<n;i++) {
    st.insert(num[i]);
  }

  int ans = 0;

  for (int i=0;i<n;i++) {
    if (!st.count(num[i] - 1)) {
      int curnum = num[i];
      int cur = 1;

      while (st.count(curnum + 1)) {
        curnum += 1;
        cur += 1;
      }

      ans = max(ans, cur);
    }
  }

  return ans;
}
