# Maximize the returns
George is a portfolio manager. He usually chooses an investment window of N days for making the required investments. During a selected investment window of N days, he invests only on K number of days and performs only one transaction on one day. The number of days he invests (K) is restricted in order to minimize the fees paid for every transaction and maximize returns.

After studying the patterns and the news for a long time, George is able to approximately predict the returns that he might get over each of the N days of the selected window.

If George invests on a certain day, the returns earned on that day get nullified due to the transaction fees. But on the days following that, he is able to earn returns M times of the usual, provided, the investment was made no more than D days ago.

Help George maximize the returns, provided that he makes exactly K number of transactions during the given investment window.

## Constraints
1 ≤ K, D < N ≤ 5000,
1 ≤ M ≤ 100000
Ai ≤ 1000
Sum of all Ai over the test case ≤ 5000
## Input Format
The description of the test cases is as follows:

The first line of each test case contains four space-separated integers N, K, D and M denoting the number of days in the investment window, the number of days on which he invests and two more parameters as described in the statement.

The second line contains N space-separated integers A1, A2, ... , AN denoting the amount of returns that George has predicted over the N days of the investment window.

## Output Format
For each test case, output a single line containing the maximum amount of returns if George invests on exactly K number of days during the N-days investment window.
Note: Do not print Debug Statements while submitting the solution.

## Examples
### Example 1
Command line input:
``` 
5 2 2 10
1 2 3 4 5
```
`Number of days in investment window, N = 5`

`Number of days on which George invests, K = 2`

`Number of days for which enhanced returns are received, D = 2`

`Multiplier for the returns, if investment done less than or equal to D days ago, M = 10`

`Sequence of predicted returns = [1, 2, 3, 4, 5]`

Output: 
```
110
```

Explanation:
```
The returns of the day on which investment is made are lost due to transaction charges.

Case 1:

Investments are made on Day 1 and Day 4. Then, returns would be = 0 + 2(10) + 3(10) + 0 + 5(10) = 100.

Case 2:

Investments are made on Day 1 and Day 3. Then, returns would be = 0 + 2(10) + 0 + 4(10) + 5(10) = 110.

Considering all such possible cases, Case 2 turns out to be the optimal solution.
```
### Example 2
Command line input:
```
4 1 2 5
7 3 6 4 
```
`Number of days in investment window, N = 4`

`Number of days on which George invests, K = 1`

`Number of days for which enhanced returns are received, D = 2`

`Multiplier for the returns, if investment done less than or equal to D days ago, M = 5`

`Sequence of predicted returns = [7, 3, 6, 4]`

Output: 
```
57
```

Explanation:
```
The returns of the day on which investment is made are lost due to transaction charges. After D days of making the transaction, the returns no more get multiplied by M.

Case 1:

Investment is made on Day 1. Then, returns would be = 0 + 3(5) + 6(5) + 4 = 49.

Case 2:

Investment is made on Day 2. Then, returns would be = 7 + 0 + 6(5) + 4(5) = 57.

Case 3:

Investment is made on Day 3. Then, returns would be = 7 + 3 + 0 + 4(5) = 30.

Case 4:

Investment is made on Day 4. Then, returns would be = 7 + 3 + 6 + 0 = 16.

Considering all such possible cases, Case 2 turns out to be the optimal solution.
```
