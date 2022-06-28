# Iterators(迭代器)介紹
## 參考書籍-C++Primer 第五版(碁峯)

#### 跟指標一樣iterators提供給我們對一個物件的間接存取(indirect access)。就迭代器來說此物件會是一個(containers)中的元素，或一個(string)中的一個字元。我們可以使用一個迭代器擷取一個元素，迭代器也有將一個元素移往另一個的運算。就像指標(pointer)一樣，一個容器(containers)有可能有效可能無效，一個有效的容器(containers)可以代表一個元素，或一個容器(containers)中超出最後一個元素一個位置的位置，其他所有迭代器的值都是無效的。


---

# 使用迭代器
#### 不同於指標，迭代器不是使用取址運算子(address-of operator=&)來獲得一個迭代器，具有迭代器的型別會有能夠回傳迭代器的成員，具體來說，這些型別會有名為**begin**和**end**的成員。**begin**成員會回傳一個迭代器以代表低一個元素(或第一個字元。
#### 如果存在的話:
```cpp= 
//編譯器判斷b&e的型別，詳細可以參考C++primer第五版(2.5.2)
//b代表第一個元素，e代表超出v中最後一個元素一個位置的位置
auto b = v.begin() , e = v.end();//這邊使用auto來定義b&e這些變數的型別會跟begin和end成員回傳的相同
```


#### end回傳的迭代器所在位置「超出」關聯的容器(或string)「最後一個元素一個位置」(「**one past the end**」)。這個迭代器代表該容器「**尾端後(off the end**)」一個不存在的元素。它被作為一個標記指出已經處理過了所有的元素。end回傳的迭代器經常被稱為**off-the-end iterator**(尾端後迭代器)也可簡稱為「end迭代器」。如容器是空的，begin回傳的迭代器就與end所回傳的一樣。

* NOTE!!!如果容器是空的，begin回傳的迭代器跟end傳的迭代器就相等，他們都是off-the-end
---
# 迭代器運算

#### 迭代器僅支援少數幾個運算，我們可以使用==或!=比較兩個有效的迭代器。如果代表的元素相同，或都是同一個容器的off-te-end迭代器，那麼兩個迭代器就相等，否則不相等(淦話)。
### 運算成員表
![](https://i.imgur.com/FVvFXb9.jpg)
#### 就跟指標一樣，我們可以對一個迭代器進行解參考(dereference)來取得一個迭代器所代表的元素。就像指標，我們可以參考的，就只有代表一個元素的有效迭代器(參考pointer-2.3.2)。解參考一個無效迭代器或off-the-end迭代器會產生位定義的行為QQ~~
#### ex: 改寫某code(C++primer 3.2.3)，改用迭代器做而非使用下標好惹OAO，將一個string的第一個字串轉大寫(可以參考之前的筆記: https://hackmd.io/@SnOWYSY5SbKxrKz7ReJ9Aw/rJv1Y0tKK
```cpp=
#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::string s("some string");
    if (s.begin() != s.end()) //確保s不為空
    {
        auto it = s.begin(); // it代表s中第一個字元
        *it = toupper(*it);  //將字元變大寫
    }
    std::cout << s << std::endl;
}
```
#### 如code寫的，先檢查s不是為空，藉由比較begin和end回傳的迭代器來做，如string是空的，迭代器就相等，不相等的話s中至少有一個字元。

#### 在if主體內，將begin回傳的迭代器指定給it來獲得對第一個字元的一個迭代器。我們(dereference)那個迭代器以將字元傳給toupper做轉大寫動作。我們也解參考指定在左邊的it，以將回傳自(toupper)的字元指定給s中第一個字元，就跟原始code一樣。
### 執行結果：

![](https://i.imgur.com/IZKcgRJ.png)

### 全變大寫
```cpp=
#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::string s("some string");
    if (s.begin() != s.end()) //確保s不為空
    {
        auto it = s.begin(); // it代表s中第一個字元
        for (auto i : s)
        {
            *it = toupper(*it); //將字元變大寫]
            *it++;
        }
        }

    std::cout << s << std::endl;
}
```
### 執行結果：
![](https://i.imgur.com/9vQKZQM.png)

---

# 將迭代器從一個元素移向另一個元素

#### 迭代器使用遞增(++)運算子(參考1.4.1)來從一元素移到下一元素。遞增一個迭代器在邏輯上類似於遞增一個整數。對整數來說，效果是對該整數的值「加1 (add 1)」。對迭代器來說，效果是「讓迭代器前進一個位置(advence the iterator by one positon)」。
* NOTE!!!因為end所回傳的迭代器不代表任意元素，他不能被遞增或解參考。
- [ ] 107頁








