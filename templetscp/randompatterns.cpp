  //can be use to store continious part together like 100111100000011000101 ko {(1,1),(0,2)(1,4)....} also for abaaackkefffffaaed or 937947899903 
  vector<pair<char,int>> runs; // bas data type ka dhyan rakhna

        for(int i = 0; i < s.size();) {
            int j = i;
            while(j < s.size() && s[j] == s[i]) j++;
            runs.push_back({s[i], j - i});
            i = j;
        }