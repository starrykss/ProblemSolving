# SWEA 1926. 간단한 369게임

N = int(input())

for num in range(1, N + 1):
    str_N = str(num)

    clap_count = 0
    for ch in str_N:
        if int(ch) != 0 and int(ch) % 3 == 0:
            clap_count += 1

    # 숫자에 3이 하나라도 있을 경우
    if clap_count != 0:
        print("-" * clap_count, end=" ")
    else:
        print(num, end=" ")