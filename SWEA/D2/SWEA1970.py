# SWEA 1970. 쉬운 거스름돈

T = int(input())

for test_case in range(1, 1 + T):
    money = int(input())

    balance_array = [0, 0, 0, 0, 0, 0, 0, 0]
    index = 0

    for div in [50000, 10000, 5000, 1000, 500, 100, 50, 10]:
        if money == 0:
            break

        balance_amount = money // div
        balance_array[index] = balance_amount
        money %= div

        index += 1
    
    answer = ' '.join(str(item) for item in balance_array)

    print(f"#{test_case}\n{answer}")