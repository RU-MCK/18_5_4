#include <iostream>

void evendigits(long long n, int answer) {
  if (n != 0) {
    if (n % 10 % 2 == 0){
      answer++;
    }
    evendigits(n / 10, answer);
  } else {
    std::cout << answer;
  }
}

int main() {
  int ans = 0;
  long long n = 9223372036854775806;
  evendigits(n,ans);
}
