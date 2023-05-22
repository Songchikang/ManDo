que = None

def queSize(que1):
    return len(que1)

def queClear():
    return []

while True:
    menu = int( input('1.Queue 2:isEmpty 3:enque 4:deque 5:peek 6:size 7:clear 8:stop : ') )

    if menu == 1:
        que = []

    if menu == 2:
        if que != None:
            if len(que) == 0:
                print('Empty')
            else:
                print('Not Empty')
        else:
            print('None 상태')

    if menu == 3:
        if que != None:
            data = input('데이터를 입력하세요 : ')
            que.append(data)
            print(que)

    if menu == 4:
        if que != None:
            if len(que) > 0:
                que.pop(0)
            else:
                print('삭제할 것이 없습니다.')
            print(que)

    if menu == 5:
        if que != None:
            if len(que) > 0:
                print(f'출력될 자료 : {que[0]}')
            else:
                print('자료가 없습니다.')
            print(que)

    if menu == 6:
        if que != None:
            print(f'저장된 수 : {queSize(que)}')
            print(que)

    if menu == 7:
        if que != None:
            print('clear를 요구했습니다.')
            que = queClear()
            print(que)

    if menu == 8:
        break
                
