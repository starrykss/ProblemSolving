# SWEA 2005. 파스칼의 삼각형

T = int(input())

for test_case in range(1, 1 + T):
    H = int(input())

    # 높이가 H이고 1로 채워진 피라미드 모양의 배열을 만든다.
    matrix = [[1] * i for i in range(1, H + 1)]

    # 알고리즘
    # - 맨 위의 숫자는 1
    # - 각 숫자들은 자신의 왼쪽 위와 오른쪽 위의 숫자의 합으로 구성된다.
    # P(i, j) = P(i - 1, j - 1) + P(i - 1, j)
    # 예) P(3, 2) = P(2, 1) + P(2, 2)
    #     1      -> [1]
    #   1  1     -> [1, 1]
    # 1  2  1    -> [1, 2, 1]
    # => (3, 2) = (2, 1) + (2, 2) = 1 + 1 = 2

    for i in range(2, H):
        for j in range(1, i):
            matrix[i][j] = matrix[i - 1][j - 1] + matrix[i - 1][j]

    print(f"#{test_case}")
    for row in matrix:
        for item in row:
            print(item, end=" ")
        print()