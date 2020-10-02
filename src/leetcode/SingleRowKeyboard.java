package leetcode;

// https://code.dennyzhang.com/single-row-keyboard
public class SingleRowKeyboard {
  public int calculateTime(String keyword, String word) {
    int time = 0;
    int fromIndex = 0;

    for (var ch : word.toCharArray()) {
      time += Math.abs(fromIndex - keyword.indexOf(ch));
      fromIndex = keyword.indexOf(ch);
    }

    return time;
  }
}
