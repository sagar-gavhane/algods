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

  // XOR technique
  public static int solution2(int[] numbers) {
    int x1 = numbers[0];
    int x2 = 1;

    for (int i = 1; i < numbers.length; i++)
      x1 = x1 ^ numbers[i];


    for (int i = 2; i <= numbers.length + 1; i++)
      x2 = x2 ^ i;
    

    return x1 ^ x2;
  }
}
