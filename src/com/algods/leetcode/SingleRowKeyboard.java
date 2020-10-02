package com.algods.leetcode;

// https://code.dennyzhang.com/single-row-keyboard
public class SingleRowKeyboard {
  public int calculateTime() {
    String keyword = "abcdefghijklmnopqrstuvwxyz";
    String word = "mnvwz";
    int answer = 0;
    int currPos = 0;

    for (var ch : word.toCharArray()) {
      answer += Math.abs(currPos - keyword.indexOf(ch));
      currPos = keyword.indexOf(ch);
    }

    return answer;
  }
}
