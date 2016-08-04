with open('input', 'a') as f:
    f.write('1\n')
    f.write('100000 30 1 1\n')
    for i in range(99999):
        f.write('1000 ')
    f.write('1000\n')
