#!/bin/bash
# organize.sh
# Automatically sorts loose .cpp files in your cf folder into topic folders
# based on keywords found inside each file. Run this from inside ~/Desktop/cf

echo "Starting auto-organize..."

# Create topic folders (safe to run even if they already exist)
mkdir -p arrays graphs dp strings trees number_theory greedy misc

moved_count=0

for file in *.cpp; do
  # skip if no .cpp files exist at root
  [ -e "$file" ] || continue

  content=$(cat "$file")
  dest=""

  if echo "$content" | grep -qiE "dijkstra|adjacency|bfs|dfs|graph\[|adj\[|adj_list"; then
    dest="graphs"
  elif echo "$content" | grep -qiE "dp\[|memo\[|knapsack|dp\(|memoization"; then
    dest="dp"
  elif echo "$content" | grep -qiE "segment tree|fenwick|struct node|treenode|lca"; then
    dest="trees"
  elif echo "$content" | grep -qiE "gcd|sieve|is_prime|isprime|modpow|mod_pow|factorial"; then
    dest="number_theory"
  elif echo "$content" | grep -qiE "substr|kmp|string s|\\bstring\\b"; then
    dest="strings"
  elif echo "$content" | grep -qiE "greedy|sort\(.*begin"; then
    dest="greedy"
  else
    dest="misc"
  fi

  git mv "$file" "$dest/$file" 2>/dev/null || mv "$file" "$dest/$file"
  echo "Moved: $file -> $dest/"
  moved_count=$((moved_count+1))
done

echo ""
echo "Done. Moved $moved_count file(s)."
echo "Now review the misc/ folder — anything guessed wrong can be moved manually with:"
echo "  git mv misc/filename.cpp correct_folder/filename.cpp"
echo ""
echo "When happy, run:"
echo "  git add ."
echo "  git commit -m \"organize solutions by topic\""
echo "  git push"
