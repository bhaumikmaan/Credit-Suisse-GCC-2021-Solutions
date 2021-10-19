# Bank and its Dominance
A perfect win is sufficient to create "Dominance" in the region. In the No-other-land, cities are aligned in a row and either a city has a bank[represented by 1] or does not have a bank[represented by 0]. Two New banks come in that region namely "A" and "B". To avoid fierce competition and unnecessary tension, they had a deal and the deal goes like below:

At first, A is allowed to choose any city with no bank[represented by 0] and then open their branch[convert 0 to 1]. Then B is allowed to choose any city with no bank[represented by 0] and then open their branch[convert 0 to 1]. Then in every turn, they can only move to an adjacent city to open a branch. Note: They cannot move to a city where any bank already exists and they cannot move to a city that is not adjacent to their "current position" city.

You being a smart market analyst, determine who will be the winner. i.e., the one who is unable to open a new branch in its turn comes out as a loser bank.

For explanation below, the index is starting from 1 for the position.

## Constraints
number of cities < 10^5

## Input Format
string containing 0's and 1's

## Output Format
string : either "A" or "B" whoever is the winner
Do not print Debug Statements while submitting the solution.

## Examples
```
Input              |  Output
"1000"             |  A Explanation: A open at city 3 then no matter where B opens, A will open to one of its adjacent city . B won't be able to open any  branch in its turn and loses.
"1001"             |  B
"1"                |  B
```
