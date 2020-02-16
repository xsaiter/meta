#pragma once

#include <type_traits>

namespace meta {
using Num = unsigned int;

template <Num N, typename R = Num> struct Factorial {
  constexpr static R value = N * Factorial<N - 1, R>::value;
};

template <> struct Factorial<1> { constexpr static Num value = 1; };

template <typename R = Num> constexpr R factorial(Num n) {
  R res = 1;
  Num i = 2;
  while (i <= n) {
    res *= i++;
  }
  return res;
}

template <Num N, Num K, typename R = Num> struct Binomial_coeff {
  static_assert(N > K, "should be N > K");
  constexpr static R value =
      Factorial<N, R>::value /
      (Factorial<K, R>::value * Factorial<N - K, R>::value);
};

template <typename R = Num> constexpr R binomial_coeff(Num n, Num k) {
  return factorial<R>(n) / (factorial<R>(k) * factorial<R>(n - k));
}

template <Num N> struct Fib {
  constexpr static Num value = Fib<N - 1>::value + Fib<N - 2>::value;
};

template <> struct Fib<1> { constexpr static Num value = 0; };
template <> struct Fib<2> { constexpr static Num value = 1; };
template <> struct Fib<3> { constexpr static Num value = 1; };

namespace details {
constexpr Num fib_r(Num n, Num k, Num a, Num b) {
  if (n == k) {
    return b;
  }
  return fib_r(n, k + 1, b, a + b);
}
} // namespace details

constexpr Num fib(Num n) {
  if (n < 2) {
    return n;
  }
  return details::fib_r(n, 2, 0, 1);
}

template <typename X, Num N> struct Pow {
  constexpr static X value(const X &x) { return Pow<X, N - 1>::value(x) * x; }
};

template <typename X> struct Pow<X, 1> {
  constexpr static X value(const X &x) { return x; }
};
} // namespace meta
