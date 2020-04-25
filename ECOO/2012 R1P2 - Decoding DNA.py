DNA = {'A':'T', 'C': 'G', 'T': 'A', 'G': 'C'}
RNA = {'A':'U', 'C': 'G', 'T': 'A', 'G': 'C'}

def transform(decoding, part):
    t_part = ''
    for letter in part:
        t_part += decoding[letter]
    return t_part


for i in range(5):
    strand = input()
    start_ind = strand.find('TATAAT') + 10
    found, stop_ind, best = False, 0, 10000000

    while not found:
        for inc in range(len(strand)-start_ind-2):
            transcription = strand[len(strand)-6-inc:len(strand)-inc]
            transcription = ''.join(reversed(transform(DNA, transcription)))
            stop_ind = strand.find(transcription, start_ind, len(strand) - 6 - inc)
            if stop_ind != -1:
                found = True
                if stop_ind < best:
                    best = stop_ind
    print(f'{i+1}: {transform(RNA, strand[start_ind:best])}')
