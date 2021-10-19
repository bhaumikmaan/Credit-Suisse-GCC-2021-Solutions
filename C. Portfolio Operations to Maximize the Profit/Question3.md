# Portfolio Operations to Maximize the Profit
Shanice has two stacks of positive integers which represents number of stocks of different companies in her portfolio, stack a and stack b where index 0 denotes the top of the stack. Shanice challenges Nikhil to perform the following operation to gain maximum profit:

In each move, Nikhil can remove one integer from the top of either stack a or stack b.
Nikhil keeps a running sum of the integers he removes from the two stacks.
Nikhil is disqualified from the challenge if, at any point, his running sum becomes greater than some integer maxSum given at the beginning of the challenge.
Nikhil's final profit is the total number of integers he has removed from the two stacks.
Given a, b and maxSum, find the maximum possible profit that Nikhil can achieve.
## Constraints:
• 1 ≤ n, m ≤ 10^5

• 0 ≤ a[i], b[i] ≤ 10^6

• 1 ≤ maxSum < 10^9

## Input Format:
The first line contains three space-separated integers describing the respective values of n (the number of integers in stack a), m (the number of integers in stack b), and maxSum (the number that the sum of the integers removed from the two stacks cannot exceed). The second line contains n space-separated integers, the integers in stack a. The third line contains m space-separated integers, the integers in stack b.

## Output Format:
an integer: the maximum number of selections Nikhil can make
Note: Do not print Debug Statements while submitting the solution.

## Example:
### Example 1:
Input
```
 5 4 10
 4 2 4 6 1
 2 1 8 5
 ```
Output:
```
4
```
Explanation:
```
We print 4 as our answer because that is the maximum number of integers that can be removed from the two stacks without the sum exceeding x=10.

Note : There can be multiple ways to remove the integers from the stack. The goal is to find the maximum selection that can be made.
```
Example 2:
Input
```
3 7 3696
12 21 102
167 244 377 56 235 269 23
```
Output:
```
10
```
