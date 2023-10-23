# SWEA 1288. 새로운 불면증 치료법

T = int(input())

for test_case in range(1, 1 + T):
    N = int(input())

    digits = set()
    k = 0

    while True:
        k += 1

        if len(digits) != 10:
            num = str(N * k)

            for ch in num:
                digits.add(ch)
        else:
            break
    
    print(f"#{test_case} {num}")