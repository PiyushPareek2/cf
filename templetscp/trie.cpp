For **competitive programming and LeetCode**, I recommend using a **pointer-free, array-based Trie**. It is:

* Faster than using `new`
* No memory leaks
* Cache friendly
* Easy to modify for counts, erase, prefixes, XOR Trie, etc.

## General Trie Template (Lowercase English Letters)

```cpp
struct Trie {
    struct Node {
        int nxt[26];
        bool end;

        Node() {
            memset(nxt, -1, sizeof(nxt));
            end = false;
        }
    };

    vector<Node> trie;

    Trie() {
        trie.push_back(Node()); // root
    }

    // Insert a word
    void insert(string &word) {
        int node = 0;

        for (char c : word) {
            int x = c - 'a';

            if (trie[node].nxt[x] == -1) {
                trie[node].nxt[x] = trie.size();
                trie.push_back(Node());
            }

            node = trie[node].nxt[x];
        }

        trie[node].end = true;
    }

    // Search complete word
    bool search(string &word) {
        int node = 0;

        for (char c : word) {
            int x = c - 'a';

            if (trie[node].nxt[x] == -1)
                return false;

            node = trie[node].nxt[x];
        }

        return trie[node].end;
    }

    // Check prefix
    bool startsWith(string &prefix) {
        int node = 0;

        for (char c : prefix) {
            int x = c - 'a';

            if (trie[node].nxt[x] == -1)
                return false;

            node = trie[node].nxt[x];
        }

        return true;
    }
};
```

---

# Interview / LeetCode Version (supports erase)

Many problems require duplicate words.

```cpp
struct Trie {
    struct Node {
        int nxt[26];
        int prefixCnt;
        int endCnt;

        Node() {
            memset(nxt, -1, sizeof(nxt));
            prefixCnt = 0;
            endCnt = 0;
        }
    };

    vector<Node> trie;

    Trie() {
        trie.push_back(Node());
    }

    void insert(string &word) {
        int node = 0;

        for (char c : word) {
            int x = c - 'a';

            if (trie[node].nxt[x] == -1) {
                trie[node].nxt[x] = trie.size();
                trie.push_back(Node());
            }

            node = trie[node].nxt[x];
            trie[node].prefixCnt++;
        }

        trie[node].endCnt++;
    }

    bool search(string &word) {
        int node = 0;

        for (char c : word) {
            int x = c - 'a';

            if (trie[node].nxt[x] == -1)
                return false;

            node = trie[node].nxt[x];
        }

        return trie[node].endCnt > 0;
    }

    bool startsWith(string &prefix) {
        int node = 0;

        for (char c : prefix) {
            int x = c - 'a';

            if (trie[node].nxt[x] == -1)
                return false;

            node = trie[node].nxt[x];
        }

        return true;
    }

    int countWordsEqualTo(string &word) {
        int node = 0;

        for (char c : word) {
            int x = c - 'a';

            if (trie[node].nxt[x] == -1)
                return 0;

            node = trie[node].nxt[x];
        }

        return trie[node].endCnt;
    }

    int countWordsStartingWith(string &prefix) {
        int node = 0;

        for (char c : prefix) {
            int x = c - 'a';

            if (trie[node].nxt[x] == -1)
                return 0;

            node = trie[node].nxt[x];
        }

        return trie[node].prefixCnt;
    }

    void erase(string &word) {
        int node = 0;

        for (char c : word) {
            int x = c - 'a';
            node = trie[node].nxt[x];
            trie[node].prefixCnt--;
        }

        trie[node].endCnt--;
    }
};
```

---

# Binary Trie (Most Important in CP)

Used in:

* Maximum XOR
* Minimum XOR
* Offline XOR Queries
* LeetCode 421
* LeetCode 1707
* Codeforces XOR problems

```cpp
struct BinaryTrie {
    struct Node {
        int nxt[2];

        Node() {
            nxt[0] = nxt[1] = -1;
        }
    };

    vector<Node> trie;

    BinaryTrie() {
        trie.push_back(Node());
    }

    void insert(int num) {
        int node = 0;

        for (int b = 31; b >= 0; b--) {
            int bit = (num >> b) & 1;

            if (trie[node].nxt[bit] == -1) {
                trie[node].nxt[bit] = trie.size();
                trie.push_back(Node());
            }

            node = trie[node].nxt[bit];
        }
    }

    int maxXor(int num) {
        int node = 0;
        int ans = 0;

        for (int b = 31; b >= 0; b--) {
            int bit = (num >> b) & 1;

            if (trie[node].nxt[1 - bit] != -1) {
                ans |= (1 << b);
                node = trie[node].nxt[1 - bit];
            } else {
                node = trie[node].nxt[bit];
            }
        }

        return ans;
    }
};
```

---

## Problems to master after learning Trie

| Difficulty | Problem       | Concepts                         |
| ---------- | ------------- | -------------------------------- |
| Easy       | LeetCode 208  | Basic Trie                       |
| Medium     | LeetCode 211  | Wildcard Search (DFS on Trie)    |
| Medium     | LeetCode 1804 | Insert, Count, Erase             |
| Medium     | LeetCode 648  | Replace Words                    |
| Medium     | LeetCode 820  | Short Encoding of Words          |
| Hard       | LeetCode 212  | Word Search II (Trie + DFS)      |
| Medium     | LeetCode 421  | Maximum XOR                      |
| Hard       | LeetCode 1707 | Offline XOR Queries              |
| Hard       | LeetCode 1938 | Maximum Genetic Difference Query |

If your goal is **LeetCode contests + Codeforces**, these three templates (basic Trie, counting Trie, and binary Trie) cover roughly **95% of Trie-based problems** you'll encounter.
