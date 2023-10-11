# SWEA 2007. 패턴 마디의 길이

T = int(input())

for test_case in range(1, 1 + T):
    S = str(input())

    pattern_length_limit = 10    # 마디의 최대 길이는 10
    answer = 0

    for pattern_length in range(1, pattern_length_limit + 1):
        pattern = S[:pattern_length]
        
        if pattern == S[pattern_length:pattern_length * 2]:
            answer = len(pattern)
            break

    print(f"#{test_case} {answer}")