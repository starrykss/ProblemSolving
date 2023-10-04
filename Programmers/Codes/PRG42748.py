# 42748 : K번째수
def solution(array, commands):
    answer = []
    
    for cmd in commands:
        i, j, k = cmd[0], cmd[1], cmd[2]
        new_list = []
        
        # 추출하기
        for idx, item in enumerate(array):
            if i - 1 <= idx and idx <= j - 1:
                new_list.append(item)
        
        # 정렬하기 (오름차순)
        new_list.sort()
        
        # k번째 수 뽑아내기
        k = new_list[k - 1]
                
        answer.append(k)
        
    return answer

if __name__ == "__main__":
    print(solution([1, 5, 2, 6, 3, 7, 4], [[2, 5, 3], [4, 4, 1], [1, 7, 3]]))