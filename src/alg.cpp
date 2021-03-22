// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int score = 0, left = 0, right = size - 1, center = 0;
    while (left < right) {
        center = (left + right) / 2;
        if (arr[center] < value)
            left = center++;
        else
            right = center;
    }
    if (arr[left] == value){
        while (arr[left] == value) {
            score++;
            left++;
        }
    }
  if (score != 0)
      return score;
  else
      return 0;
}
