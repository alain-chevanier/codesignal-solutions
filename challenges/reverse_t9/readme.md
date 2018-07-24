# [reverse_t9](https://app.codesignal.com/challenge/JGNL3YRDqC7By3fbu)

## Check the full description and test cases visiting link above

Consider that the English alphabet contains ```26``` characters, while telephones only have ten digits on the keypad. The letters are mapped onto the digits as shown below:

When you press a digit, the corresponding letter appears on the screen. If you keep pressing the button without pauses, the letters mapped onto the button change in sequence. Let's assume that no button is pressed repeatedly more times than there are letters mapped onto it.

Given the list of digits pressed, return the text that should appear on the screen.

__Example__

* For ```keys = "44 444"```, the output should be ```reverse_t9(keys) = "hi"```.

* For ```keys = "999337777"```, the output should be ```reverse_t9(keys) = "yes"```.

*Check out [this](https://code.google.com/codejam/contest/351101/dashboard#s=p2) challenge for reference.*

__Input/Output__

* __[execution time limit] 0.5 seconds (cpp)__

* __[input] string keys__

    Sequence of key presses, a string of digits (all but ```'1'```) and whitespace characters, where a whitespace character means a pause. It is guaranteed that there are no two consecutive ```'0'```s or ```' '```s in the string.

    *Constraints:* 
    
    ```1 <= keys.length <= 1500```.

* __[output] string__

    The text as a string of lowercase English letters.