# Banker and Clients
The world is fighting the pandemic. The safety of the clients and employees is of the utmost priority of Credit Suisse. In this work from home scenario every client needs to be mapped to a banker by an efficient program.

Every client has a unique relationship with its banker at Credit Suisse. In order to perform business in an efficient manner, we need to map the client to a banker who has knowledge of the business of the client and understands the client well. Based on these characteristics, the time required by a banker to do the business is predicted for all clients. The end goal is to have the maximum amount of business done in the minimum amount of time.

You are provided with B, the number of bankers, and C, the number of clients.

There are two main conditions two minimize total time:

Bankers need to be mapped with consecutive clients from the list.
Mapping should be done in such a way that the total time is minimum.
## Constraints
1 <= B <= 10
1 <= C <= 20
0 <= time <= 1000

## Input Format
The first line contains two space separated integers: number of clients C and number of bankers B. The next B lines contain C space separated integers, representing the time taken by the banker for the ith client respectively.

## Output Format
An integer which is the minimum total time required to complete the business.
Note: Do not print DeBug Statements while submitting the solution.

## Example
### Example 1
Input
``` 
4 2
4 4 4 4 
5 2 3 5
```
Output
```
14
```
Explanation
```
Number of Bankers B = 2
Number of Clients C = 4

|Client   | 1 | 2 | 3 | 4 |
|---------|---|---|---|---|
|Banker A | 4 | 4 | 4 | 4 |
|Banker B | 5 | 2 | 3 | 5 |
```
```
Case 1
Banker A- 1 to 4 time = 4+4+4+4
Banker B- none time =0
Total = 12

Case 2
Banker A- 1 to 3 time = 4+4+4
Banker B- 5 time = 5
Total = 12

Case 3 most optimal
Banker A- 1 , time = 4
Banker B- 2 to 54 time = 2+3+5
Total = 14

Other cases give more time or violate the conditions.
```
### Example 2
Input
```
5 2
497 286 103 328 322
799 117 946 267 109
```
Output
```
1262
```
