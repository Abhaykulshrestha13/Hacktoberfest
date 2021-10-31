def fact(n):
    if n <= 1:
        return 1
    return n * fact(n - 1)


def count_digits(n):
    factorial = fact(n)
    total = 0
    for digit in str(factorial):
        total += int(digit)
    return total


if __name__ == '__main__':
    n = int(input())
    print(count_digits(n))