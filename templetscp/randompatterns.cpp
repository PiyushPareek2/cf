  //can be use to store continious part together like 100111100000011000101 ko {(1,1),(0,2)(1,4)....} also for abaaackkefffffaaed or 937799947899903 
  vector<pair<char,int>> runs; // bas data type ka dhyan rakhna

        for(int i = 0; i < s.size();) {
            int j = i;
            while(j < s.size() && s[j] == s[i]) j++;
            runs.push_back({s[i], j - i});
            i = j;
        }
// kmp lps making 
// value of pi(i) or lps[i] can only increase by one pi(i+1)<=pi(i)+1
//p(n-1) will tell you about longest proper prefix which is equal to the suffix
int i=1,j=0; // yad karne ke liye dry run on "aab"  before moving i set it's lps
while (i < n) {
    if (s[i] == s[j]) {
        lps[i] = j+1;
        j++;
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
or use 
// pi[idx] tells meri matching kaha tak hue in one base index 
pi[0]=0;
for(int i=1;i<n;i++){
    j=pi[i-1];
    while(j>0 && s[j]!=s[i]){
        j=pi[j-1];
    }
    if(s[j]==s[i])j++;
    pi[i]=j;
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