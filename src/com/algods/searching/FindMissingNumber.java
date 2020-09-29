package com.algods.searching;

// Find the Missing Number
// Ref: https://www.geeksforgeeks.org/find-the-missing-number/
public class FindMissingNumber {
  public static int solution(int[] numbers) {
    int sumByFormula = (numbers.length + 1) * (numbers.length + 2) / 2;
    int sumByNumber = 0;

    for (int number : numbers) sumByNumber += number;

    return sumByFormula - sumByNumber;
  }
}
