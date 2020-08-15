# binary_calc
Coding the words on English, Russian and Japaneese to the binary code, according to this scheme: text->dec->bin"\n"
And decoding the binary to text again."\n"
And where 0 in dec is an 'A' char, 1 is 'B' and the last one will be 25 is 'Z' (English)"\n"
And where 0 in dec is an 'A' char, 1 is 'Б' and the last one will be 32 is 'Я' (Russian)"\n"
And where 0 in dec is an 'あ' char, 1 is 'い', and the last one will be 70 is 'ん' (Japaneese)"\n"
Every character coding with 5 binary characters: 'A' -> 0 -> '00000', 'B' -> 1 -> '00001' , 'Z' -> 25 -> '11001'(English)"\n"
Every character coding with 6 binary characters: 'A' -> 0 -> '000000', 'Б' -> 1 -> '000001', 'Я' -> 32 -> '100000' (Russian)"\n"
Every character coding with 7 binary characters: 'あ' -> 0 -> '0000000', 'い' -> 1 -> '0000001', 'ん' -> 70 -> '1000110'(Japaneese)"\n"
