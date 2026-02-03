# rafidghanim/leetcode

A personal collection of LeetCode problems and solutions organized by language and topic. This repository contains solved problems, notes, and reusable templates to help track progress and share solutions.

Table of contents

- About
- Repository structure
- Naming convention
- How to run solutions
- Testing
- Contributing
- Problem template
- License

About

This repo is a personal workspace for practicing algorithm and data-structure problems from LeetCode. Solutions are organized to be easy to navigate, review, and run locally. Each solution focuses on clarity, correctness, and—where relevant—performance.

Repository structure

- /python        - Python solutions
- /java          - Java solutions
- /cpp           - C++ solutions
- /js            - JavaScript/TypeScript solutions
- /docs          - Notes, explanations, diagrams
- /tests         - Optional test harnesses and unit tests

Files are grouped by language and then by problem. Example path: `python/1-two-sum/two_sum.py` or `cpp/1-two-sum/two_sum.cpp`.

Naming convention

- Directory: `<problem-number>-<kebab-case-title>` (e.g., `1-two-sum`)
- Filenames: descriptive and language-appropriate (e.g., `two_sum.py`, `TwoSum.java`, `two_sum.cpp`)
- Include the LeetCode problem URL or ID in the file header as a comment.

How to run solutions

Python

- Run a single file:
  ```bash
  python3 path/to/file.py
  ```
- If a solution includes a small test block guarded by `if __name__ == "__main__":`, running the file will execute that sample.

Java

- Compile and run:
  ```bash
  javac path/to/Solution.java
  java -cp path/to Solution
  ```

C++

- Compile and run:
  ```bash
  g++ -std=c++17 path/to/file.cpp -O2 -o solution && ./solution
  ```

JavaScript/TypeScript

- Node (JavaScript):
  ```bash
  node path/to/file.js
  ```
- TypeScript (if present):
  ```bash
  npx ts-node path/to/file.ts
  ```

Testing

If the repo contains tests (e.g., pytest for Python), run the project tests:

```bash
pytest -q
```

Contribution

Contributions are welcome. If you'd like to contribute:

1. Fork the repository.
2. Create a new branch: `feature/<problem-number>-<title>`.
3. Add your solution in the appropriate language folder following the naming convention.
4. Include a short explanation or comments and add tests where applicable.
5. Open a pull request describing the problem and your approach.

Problem template

Include a short header comment at the top of each solution file with:

- Problem title and ID
- LeetCode URL
- Short complexity analysis (time/space)

Example (Python):

```python
# Problem 1 - Two Sum
# https://leetcode.com/problems/two-sum/
# Time: O(n), Space: O(n)

class Solution:
    def twoSum(self, nums, target):
        ...

if __name__ == "__main__":
    print(Solution().twoSum([2,7,11,15], 9))  # [0,1]
```

Style & best practices

- Keep solutions focused and well-commented.
- Prefer readability and correctness over clever micro-optimizations.
- When relevant, include both iterative and recursive variants and explain trade-offs.

License

This repository is provided under the MIT License. See LICENSE for details.

Contact

If you have questions or suggestions, open an issue or reach out to @rafidghanim on GitHub.
