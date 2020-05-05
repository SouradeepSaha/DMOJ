MOD = 10**9+7

kase = int(input())
for T in range(kase):
    com_num = int(input())
    call_stack, func_def = ['__MAIN__'], {'__MAIN__': [0, 0]}

    for i in range(com_num):
        com = list(input().split())

        if com[0] == 'ADD':
            func_def[call_stack[-1]][1] = (func_def[call_stack[-1]][1] + int(com[1])) % MOD

        elif com[0] == 'SUB':
            func_def[call_stack[-1]][1] = (func_def[call_stack[-1]][1] - int(com[1])) % MOD

        elif com[0] == 'MULT':
            func_def[call_stack[-1]][0] = (func_def[call_stack[-1]][0] * int(com[1])) % MOD
            func_def[call_stack[-1]][1] = (func_def[call_stack[-1]][1] * int(com[1])) % MOD

        elif com[0] == 'FUN':
            call_stack.append(com[1])
            func_def[com[1]] = [1,0]

        elif com[0] == 'END':
            call_stack.pop()

        elif com[0] == 'CALL':
            func_def[call_stack[-1]][0] = (func_def[call_stack[-1]][0] * func_def[com[1]][0]) % MOD
            func_def[call_stack[-1]][1] = (func_def[call_stack[-1]][1] * func_def[com[1]][0]) % MOD
            func_def[call_stack[-1]][1] = (func_def[call_stack[-1]][1] + func_def[com[1]][1]) % MOD

    print(func_def['__MAIN__'][1]%MOD)
