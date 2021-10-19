# Pair of Candlesticks
A candlestick is a type of price chart used in technical analysis that displays the high, low, open and closing prices of Candlesticks reflect the impact of investor sentiment on security prices and are used by technical analysts to determine when to enter and exit trades.
We have been given an array of distinct positive integers called as prices. Each integer in the array denoted by prices[i] represents the high price in the candlestick.

You have to connect two candlesticks in such a way that all the candlesticks between them have a height smaller than the minimum height of the two. The task is to find the total number of pairs of such candlesticks.

## Constraints
2 <= Size(prices) <= 10^6 <br>
1 <= prices[i] <= 10^9

## Input Format
The first line contains an integer N denoting the size of the prices array.
The second line contains N space separated integers representing the ith element of the prices array.

## Output Format
An integer denoting the total number of pairs of such candlesticks

Note: Do not print Debug Statements while submitting the solution.

## Examples
### Example 1
Input
```
5  
10 3 4 8 6
```
Output
```
6
```
Explanation :
```
N = 5
prices = [10, 3, 4, 8, 6]
The pairs which satisfies the criteria are

(10, 3), (3, 4)
(4, 8), (10, 4)
(10, 8), (8, 6) 
```
### Example 2
Input
```
4
2 80 4 32
```
Output
```
4
```
