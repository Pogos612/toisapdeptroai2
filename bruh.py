def Celsius_calculator(f):
    return 5/9 * (f - 32)


if __name__ == "__main__":
    x = float(input())
    result = Celsius_calculator(x)
    print(f"{result:.2f}")


if __name__ == "__main__":
    try:
        n = int(input())
        listt = list(map(int, input().split()))
        k = int(input())
        if (0 <= k < n):
            print(listt[k])
        else:
            print("Index out of range")
    except ValueError:
        print("Invalid input")
