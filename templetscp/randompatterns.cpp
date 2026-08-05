  //can be use to store continious part together like 100111100000011000101 ko {(1,1),(0,2)(1,4)....} also for abaaackkefffffaaed or 937799947899903 
  vector<pair<char,int>> runs; // bas data type ka dhyan rakhna

        for(int i = 0; i < s.size();) {
            int j = i;
            while(j < s.size() && s[j] == s[i]) j++;
            runs.push_back({s[i], j - i});
            i = j;
        }
// kmp lps making 
while (i < n) {
    if (s[i] == s[j]) {
        j++;
        lps[i] = j;
        i++;
    }
    else {
        if (j != 0)
            j = lps[j - 1];
        else {
            lps[i] = 0;
            i++;
        }
    }
}
// word matching
while (i < text.size()) {

    if (text[i] == pattern[j]) {
        i++;
        j++;
    }

    if (j == pattern.size()) {
        ans.push_back(i - j);
        j = lps[j - 1];      // not 0
    }

    else if (i < text.size() && text[i] != pattern[j]) {

        if (j != 0)
            j = lps[j - 1];
        else
            i++;
    }
}

//using UNIque array to store all possible sum from an array think how then use freq to calculate possible_ways_to_make_using_pair[sum]