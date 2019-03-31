# AAL: zadanie dodatkowe

## Komandosi

### Treść zadania
Oddział do zadań specjalnych składa się z *n* komandosów ponumerowanych od *0* do *n - 1*. W oddziale panuje drzewiasta hierarchia dowodzenia. Każdy komandos ma przypisany numer bezpośredniego przełożonego. Dowódca oddziału jest tylko jeden i ma przypisany swój numer jako numer bezpośredniego przełożonego (po tym rozpoznajemy dowódcę). Dla każdego komandosa należy podać jego poziom w hierarchii dowodzenia. Dowódca ma poziom *0*, jego bezpośredni podwładni - poziom *1*, itd.

### Wejście
Standardowy strumień wejściowy zawiera sekwencję instancji problemu. Pierwszy wiersz opisu instancji zawiera liczbę komandosów w oddziale (*0 < n < 100000*). Następny wiersz (lub wiersze) zawiera *n* liczb *pk* oznaczających numery przełożonych kolejnych komandosów. Wejście kończy wiersz zawierający *0*. Można założyć, że wejście zawiera prawidłowe opisy instancji problemów.

### Wyjście
Dla każdej instancji problemu do standardowego wyjścia wyprowadzanych jest *n* liczb oznaczających poziomy w hierarchii dowodzenia kolejnych komandosów.

### Przykład

#### Wejście
```
3
111
4
1233
5
20200
0
```

##### Wyjście
```
101
3210
12022
```

### Technikalia
Przysłany kod źródłowy będzie kompilowany poleceniem:
```
g++ -std=c++11 -03 kod.cpp
```
Uzyskany program wykonywalny będzie uruchamiany poleceniem:
```
./a.out <dane_testowe.txt >wynik.txt
```
