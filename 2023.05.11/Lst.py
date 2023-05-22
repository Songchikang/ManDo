myLst = None
print(f'list의 타입 : { type(myLst) }')

while True:    
    menu = int( input('1.Lst 2:ins 3:del 4:isE 5:getE 6:sz 7:cl 8:fi 9:rep 10:sort 11.mer 12:dip 13.app 0:stop :') )

    if menu == 0:
        break

    if menu == 1:
        print('리스트 생성을 요구했습니다.')
        myLst = []
        print(f'list의 타입 : { type(myLst) }')

    if menu == 2:
        if myLst != None:
            print('입력 요구했습니다.')
            data = input('입력 데이타를 기술하세요 : ')
            pos  = int(input('저장할 위치를 기술하세요 : '))
            myLst.insert( pos, data )
            print(myLst)

    if menu == 3:
        if myLst != None:
            print('삭제 요구했습니다.')
            if len( myLst ) > 0 :
                while True:
                    pos  = int(input(f'삭제할 위치를 기술하세요(0~{len(myLst)-1}): '))
                    if 0<= pos  and pos <= (len(myLst)-1):
                        break
                data = myLst.pop(pos)
                print(f'삭제된 자료: {data}')
            else:
                print('삭제할 것이없습니다.')
            print(myLst)
            
    if menu == 4:
        if myLst != None:
            print('공백 상태 확인 요구했습니다.')
            if len( myLst ) == 0:
                print('공백 상태임')
            else:
                print('공백 상태가 아니다.')
            print(myLst)

    if menu == 5:
         if myLst != None:
            print('getEntry 요구했습니다.')
            if len( myLst ) > 0 :
                while True:
                    pos  = int(input(f'확인할 위치를 기술하세요(0~{len(myLst)-1}): '))
                    if 0<= pos  and pos <= (len(myLst)-1):
                        break
                print(f'{pos} 위치에 {myLst[pos]}이 있다.')
                print(myLst)
            else:
                print('자료가 없습니다.')

    if menu == 6:
        if myLst != None:
            print('size 요구했습니다.')
            print(f'크기 : {len(myLst)}')
            print(myLst)

    if menu == 7:
        if myLst != None:
            print('clear 요구했습니다.')
            #myLst = []
            while len(myLst) > 0:
                print(f'삭제됨 : {myLst.pop(-1)}')
            print(myLst)

    if menu == 8:
        if myLst != None:
            print('find 요구했습니다.')
            data  = input(f'찾을 자료를 기술하세요: ')

            pos = 0
            while len(myLst) > pos:
                print(myLst[pos])
                if myLst[pos] == data:
                    break
                pos = pos + 1

            if len(myLst) > pos:
                print(f'자료가 {pos}에 있다.')
            else:
                print('자료가 없다.')
            print(myLst)  

    if menu == 9:
        if myLst != None:
            print('replace 요구했습니다.')
            if len( myLst ) > 0 :
                while True:
                    pos  = int(input(f'확인할 위치를 기술하세요(0~{len(myLst)-1}): '))
                    if 0<= pos  and pos <= (len(myLst)-1):
                        break

    if menu == 10:
        if myLst != None:
            print('sort 요구했습니다.')
            if len( myLst ) > 0 :
                myLst.sort()
                print(myLst)
