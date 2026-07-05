# Git & GitHub Basics — My Learning Notes

Personal notes from learning Git/GitHub step by step. Covers Day 1 to Day 12.

---

## 🎒 The Bag Analogy (core mental model)

| Real Life | Git Equivalent |
|---|---|
| Picking up items and putting them in a bag | `git add .` (staging) |
| Zipping the bag and writing a label | `git commit -m "message"` |
| Shelf in your room where bags are stored | `.git` folder |
| Reading labels on your bags | `git log` |
| A warehouse in the cloud | GitHub |
| Writing the warehouse address on your bag | `git remote add origin <url>` |
| Shipping the bag to the warehouse | `git push` |
| Bringing the latest bag back from the warehouse | `git pull` |
| Getting a brand new bag from the warehouse | `git clone` |

---

## Day 1 — Setup & Identity

Install Git, then tell it who you are (only done once per machine):

```bash
git config --global user.name "Piyush"
git config --global user.email "your@email.com"
git config --global user.name    # verify it saved
```

---

## Day 2 — Creating a Local Repository

A **repository (repo)** is a folder Git is tracking.

```bash
cd ~/Desktop/cf
git init          # turns the folder into a Git repo
git status        # shows what Git sees (untracked files in red)
```

Creates a hidden `.git` folder — Git's brain. Never delete it.

---

## Day 3 — First Commit

```bash
git add .                      # stage everything (pack the bag)
git status                     # staged files show in green
git commit -m "my first commit"  # save the snapshot (zip & label)
git log                        # view commit history (press q to exit)
```

---

## Day 4 — Repeating the Commit Workflow

The daily loop:
```bash
git status
git add .
git commit -m "clear, meaningful message"
git log --oneline    # compact history view
```

**Rule:** commit messages should describe *what* you did — e.g. `"solve two sum using hashmap"`, not `"update"`.

---

## Day 5 — Connecting to GitHub & Pushing (SSH)

Since HTTPS password auth is no longer supported, use SSH:

```bash
ssh-keygen -t ed25519 -C "your@email.com"   # generate key (press Enter 3x)
cat ~/.ssh/id_ed25519.pub                    # copy this into GitHub → Settings → SSH keys

git remote add origin git@github.com:PiyushPareek2/cf.git
git push -u origin master        # first push (check your default branch name!)
git push                         # every push after that
```

**Note:** default branch may be `master` or `main` — check with `git branch`.

---

## Day 6 — Branching

Branches let you experiment without touching your main code.

```bash
git branch            # list branches, * shows current one
git branch practice   # create a new branch
git switch practice   # move to that branch
git switch master     # move back
```

⚠️ **Important:** always commit before switching branches — uncommitted changes can be lost when switching.

---

## Day 7 — Merging

Bring changes from one branch into another.

```bash
git switch master      # go to the branch you want to merge INTO
git merge practice      # merge practice's changes into master
git push                # send the merged result to GitHub
```

---

## Day 8 — Pull & Clone

| Command | Use case |
|---|---|
| `git pull` | Repo already exists locally, get the latest changes from GitHub |
| `git clone <url>` | Repo only exists on GitHub, download it fresh |

```bash
git pull
git clone git@github.com:PiyushPareek2/cf.git
```

---

## Day 9 — Merge Conflicts

Happens when two branches change the **same line** of the same file.

```bash
git merge practice
# CONFLICT (content): Merge conflict in file.cpp
```

Git marks the conflict inside the file:
```cpp
<<<<<<< HEAD
// master version
=======
// practice version
>>>>>>> practice
```

**Fix:** manually delete the lines you don't want, plus the `<<<<<<<`, `=======`, `>>>>>>>` markers. Then:
```bash
git add .
git commit -m "resolve merge conflict"
```

---

## Day 10 — Fork & Pull Request

Used to contribute to someone else's repo (you can't push to it directly).

```
their repo → Fork (GitHub button) → your copy → clone → edit → push → open Pull Request
```

```bash
git clone git@github.com:PiyushPareek2/CP-Templates.git
cd CP-Templates
git add .
git commit -m "add review comment"
git push
# then open a Pull Request on GitHub via the "Compare & pull request" banner
```

---

## Day 11 — Diff, Stash & Restore

| Command | What it does |
|---|---|
| `git diff` | Preview exact line changes before staging (press `q` to exit) |
| `git stash` | Temporarily hide uncommitted changes |
| `git stash pop` | Bring stashed changes back |
| `git restore filename` | Permanently discard uncommitted changes in a file |

---

## Day 12 — README

A `README.md` file is the front page of a GitHub repo, written in **Markdown**.

```bash
touch README.md
# write content, then:
git add .
git commit -m "add README"
git push
```

Common Markdown syntax:
| Syntax | Result |
|---|---|
| `# Heading` | Big heading |
| `**bold**` | **bold** |
| `- item` | bullet point |
| `` `code` `` | inline code |
| `[text](url)` | clickable link |

---

## 🗺️ Full Command Cheat Sheet

```bash
# Setup
git config --global user.name "name"
git config --global user.email "email"

# Local repo
git init
git status
git log
git log --oneline

# Saving work
git add .
git commit -m "message"

# GitHub connection
git remote add origin <url>
git remote set-url origin <url>
git push -u origin master
git push
git pull
git clone <url>

# Branching
git branch
git branch <name>
git switch <name>
git merge <branch>

# Safety net
git diff
git stash
git stash pop
git restore <file>
```

---

*Learned step-by-step, one topic a day, with real commits, real pushes, and one real merge conflict resolved by hand.*
