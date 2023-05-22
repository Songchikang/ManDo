sta = None

def creatStack():
    return[]

def isEmpty( stack ):
    if len(stack) > 0:
        print('False')
    else:
        print('True')

def push( stack , e ):
    stack.append(e)

def pop( stack ):
    if len(stack) > 0:
        return stack.pop(-1)
    else:
        print('테이터가 없습니다.')
        return None

def peek( stack ):
    if len(stack) > 0:
        return stack[-1]
    else:
        print('테이터가 없습니다.')
        return None
    
def size( stack ):
    return len(stack)

def clear():
    return[]

while True:
    menu = int(input('1. stack 2. isEmpty 3. push 4. pop 5. peek 6. size 7. clear 8. end : '))

    if menu == 1:
        sta = creatStack()

    elif menu == 2:
        if sta != None:
            isEmpty(sta)

    elif menu == 3:
        if sta != None:
            data = input('데이터를 입력하세요 : ')
            push(sta,data)
            print(sta)
    
    elif menu == 4:
        if sta != None:
            data = pop(sta)
            print(f'받아온 값 : {data}')

    elif menu == 5:
        if sta != None:
            data = peek(sta)
            print(f'값 : {data}')
        
    elif menu == 6:
        if sta != None:
            I = size(sta)
            print(f'길이는 {I}')

    elif menu == 7:
        if sta != None:
            print(f'clear 전 : {len(sta)}')
            sta = clear()
            print(f'clear 후 : {len(sta)}')

    elif menu == 8:
        break
