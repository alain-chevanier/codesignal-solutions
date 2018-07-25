# [brothersInTheBar](https://app.codesignal.com/challenge/dHjGPiEYFFcrwKMip)

## Check the full description and test cases visiting link above

Three brothers walk into a bar. All the beverages are placed in one line at the long bar table. The size of each glass is represented in an array of integers, ```glasses```.

The brothers will drink a round if they can find ```3``` __consecutive__ glasses of the same size. The barman removes the empty glasses from the table immediately after each round.

Find the maximum number of rounds the three brothers can drink.

### Example

* For ```glasses = [1, 1, 2, 3, 3, 3, 2, 2, 1, 1]```, the output should be ```brothersInTheBar(glasses) = 3```.

  The brothers can start with a round of size ```3```, then after the glasses are cleared, a round of size ```2``` can be formed, followed by a round of size ```1```. One glass will be left at the table.

* For ```glasses = [1, 1, 2, 1, 2, 2, 1, 1]```, the output should be ```brothersInTheBar(glasses) = 0```.

  There are no 3 consecutive glasses of the same size.

### Input/Output

* __[execution time limit] 5 seconds (ts)__

* __[input] array.integer glasses__

    The sizes of glasses in the row.

    Guaranteed constraints:

    ```1 ≤ glasses.length ≤ 105```,
    ```1 ≤ glasses[i] ≤ 106```.

* __[output] integer__

    The maximum number of rounds the brothers can drink.