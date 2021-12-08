# 字串轉長整數


標準庫：#include <stdlib.h>

strtol() 函數用來將字符串轉換為長整型數(long)，其原型為：
long int strtol (const char* str, char** endptr, int base);

【參數說明】str 為要轉換的字符串，endstr 為第一個不能轉換的字符的指針，base 為字符串str 所採用的進制。

【函數說明】strtol() 會將參數str 字符串根據參數base 來轉換成長整型數(long)。參數base 範圍從2 至36，或0。參數base 代表str 採用的進制方式，如base 值為10 則採用10 進制，若base 值為16 則採用16 進制等。

strtol() 會掃描參數str 字符串，跳過前面的空白字符（例如空格，tab縮進等，可以通過isspace()函數來檢測），直到遇上數字或正負符號才開始做轉換，再遇到非數字或字符串結束時('\0')結束轉換，並將結果返回。

兩點注意：
當base 的值為0 時，默認採用10 進制轉換，但如果遇到'0x' / '0X' 前置字符則會使用16 進制轉換，遇到'0' 前置字符則會使用8 進制轉換。
若endptr 不為NULL，則會將遇到的不符合條件而終止的字符指針由endptr 傳回；若endptr 為NULL，則表示該參數無效，或不使用該參數。

【返回值】返迴轉換後的長整型數；如果不能轉換或者str 為空字符串，那麼返回0(0L)；如果轉換得到的值超出long int 所能表示的範圍，函數將返回 LONG_MAX 或LONG_MIN（在limits.h 頭文件中定義），並將errno 的值設置為ERANGE。

溫馨提示：ANSI C 規範定義了 stof()、atoi()、atol()、strtod()、strtol()、strtoul() 共6個可以將字符串轉換為數字的函數，大家可以對比學習。另外在C99 / C++11 規範中又新增了5個函數，分別是 atoll()、strtof()、strtold()、strtoll()、strtoull()，在此不做介紹，請大家自行學習。

【示例】將字符串轉換成10進制。
```cpp=
#include  <stdio.h>
#include  <stdlib.h>
int  main  ()
{
    char szNumbers []  =  "2001 60c0c0 -1101110100110100100000 0x6fffff" ;
    char  * pEnd ;
    long  int li1 , li2 , li3 , li4 ;
    li1 =  strtol  ( szNumbers ,& pEnd , 10 );
    li2 =  strtol  ( pEnd ,& pEnd , 16 );
    li3 =  strtol  ( pEnd ,& pEnd , 2 );
    li4 =  strtol  ( pEnd , NULL , 0 );
    printf  ( "轉換成10進制: %ld、%ld、%ld、%ld \n " , li1 , li2 , li3 , li4 );
    system ( "pause" );
    return  0 ;
}
```
執行結果：
轉換成10進制: 2001、6340800、-3624224、7340031

---

