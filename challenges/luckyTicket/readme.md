# [luckyTicket](https://app.codesignal.com/challenge/xPhjzzTmbW8JXrSfB)

## Check the full description and test cases visiting link above

Mr. Privalov often travels to the city by train, so he came up with a concept of lucky tickets for railways. All railways tickets consist of lowercase English letters. A ticket is called *lucky*, if it can be split into two non-empty parts, such that the number of occurrences of each letter in the first part is equal to number of occurrences of the same letter in the second part and vice versa (the number of occurrences of each letter in the second part is equal to number of occurrences of the same letter in the first part).

Your task is help to Mr.Privalov to find the minimum number of letters that should be removed to make the given ticket ```s``` *lucky*.

It is guaranteed that it is always possible to make a *lucky* ticket out of the given one.

__Example__

* For ```s = "book"```, the output should be ```luckyTicket(s) = 2```;
* For ```s = "mewmew"```, the output should be ```luckyTicket(s) = 0```.

__Input/Output__

* __[execution time limit] 0.5 seconds (cpp)__

* __[input]__ *string s*

    The ticket, a string of lowercase English letters.

    *Constraints:* ```2 <= s.length <= 9 * 10 ^ 4```.

* __[output]__ *integer*

    The minimum number of letters that should be removed to make the ticket lucky.

