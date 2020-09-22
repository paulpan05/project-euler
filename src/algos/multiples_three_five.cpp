#include "algos/multiples_three_five.hpp"

int multiples_three_five(int number) {
  int count_3 = (number - 1) / 3;
  int count_5 = (number - 1) / 5;
  int count_15 = (number - 1) / 15;
  // Hint - use geometric series.
  return (3 * count_3 * (count_3 + 1) / 2) + (5 * count_5 * (count_5 + 1) / 2) - (15 * count_15 * (count_15 + 1) / 2);
}