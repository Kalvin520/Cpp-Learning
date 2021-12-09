#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

int main()
{

    // vector<string> ivec{10};
    //------------------------------------------
    // vector<int> v2;
    // for (int i = 0; i != 100; ++i)
    // {
    //     v2.push_back(i);
    // }
    //-----------------------------------------------
    // std::string word, p1;
    // std::vector<string> text;
    // while (std::cin >> word)
    // {
    //     text.push_back(word);}
    //---------------------------------------------------
    // std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    // for (auto &i : v)
    // {
    //     i *= i; // square
    // }
    // for (auto i : v)
    // {
    //      std::cout << i << " ";
    // }
    // std::cout << std::endl;

    //-------------------------------------------------
    // std::vector<unsigned> score(11, 0);
    // unsigned grade;
    // while (std::cin >> grade)
    // {
    //     if (grade <= 100)
    //     {
    //         ++score[grade / 10];
    //     }
    // }

    // for (auto i : score)
    //     std::cout << i << " ";
    //-----------------------------------------------------
    // std::vector<int> ivec;
    // for (decltype(ivec.size()) ix = 0; ix != 10; ix++)//ix的type跟ivec一樣
    //     ivec.push_back(ix);
    // for (auto i : ivec)
    //     std::cout << i << " ";
    //-------------------------------------------------------
    // 3.16
    // std::vector<int> v1;                   //空vector
    // std::vector<int> v2(10);               //
    // std::vector<int> v3(10, 42);           //
    // std::vector<int> v4{10};               //
    // std::vector<int> v5{10, 42};           //
    // std::vector<std::string> v6{10};       //
    // std::vector<std::string> v7{10, "hi"}; //{hi,hi,hi,hi,hi,hi,hi,hi,h,hi,hi}

    // std::cout << "v1的字元數量為: " << v1.size() << std::endl;
    // if (v1.size() > 0) //當vector內有字元時逐個輸出
    // {
    //     std::cout << "v1內的字元大小為: " << std::endl;
    //     for (auto i : v1) //使用for遍歷v1內每個字元
    //         std::cout << i << " ";
    //     std::cout << std::endl;
    // }

    // std::cout << "v2的字元數量為: " << v2.size() << std::endl;
    // if (v2.size() > 0) //當vector內有字元時逐個輸出
    // {
    //     std::cout << "v2內的字元大小為: " << std::endl;
    //     for (auto i : v2) //使用for遍歷v2內每個字元
    //         std::cout << i << " ";
    //     std::cout << std::endl;
    // }

    // std::cout << "v3的字元數量為: " << v3.size() << std::endl;
    // if (v3.size() > 0) //當vector內有字元時逐個輸出
    // {
    //     std::cout << "v3內的字元大小為: " << std::endl;
    //     for (auto i : v3) //使用for遍歷v1內每個字元
    //         std::cout << i << " ";
    //     std::cout << std::endl;
    // }

    // std::cout << "v4的字元數量為: " << v4.size() << std::endl;
    // if (v4.size() > 0) //當vector內有字元時逐個輸出
    // {
    //     std::cout << "v4內的字元大小為: " << std::endl;
    //     for (auto i : v4) //使用for遍歷v4內每個字元
    //         std::cout << i << " ";
    //     std::cout << std::endl;
    // }

    // std::cout << "v5的字元數量為: " << v5.size() << std::endl;
    // if (v5.size() > 0) //當vector內有字元時逐個輸出
    // {
    //     std::cout << "v5內的字元大小為: " << std::endl;
    //     for (auto i : v5) //使用for遍歷v5內每個字元
    //         std::cout << i << " ";
    //     std::cout << std::endl;
    // }

    // std::cout << "v6的字元數量為: " << v6.size() << std::endl;
    // if (v6.size() > 0) //當vector內有字元時逐個輸出
    // {
    //     std::cout << "v6內的字元大小為: " << std::endl;
    //     for (auto i : v6) //使用for遍歷v6內每個字元
    //         std::cout << i << " ";
    //     std::cout << std::endl;
    // }

    // std::cout << "v7的字元數量為: " << v7.size() << std::endl;
    // if (v7.size() > 0) //當vector內有字元時逐個輸出
    // {
    //     std::cout << "v7內的字元大小為: " << std::endl;
    //     for (auto i : v7) //使用for遍歷v7內每個字元
    //         std::cout << i << " ";
    //     std::cout << std::endl;
    // }

    // return 0;

    //----------------------------------------------------------
    // 3.17
    // std::vector<std::string> vstring; //儲存字串
    // std::string ins;                  // inputstring
    // char yn = 'y';                    //是否需要繼續輸入

    // std::cout << "Please enter the first word:" << std::endl;
    // while (std::cin >> ins)
    // {
    //     vstring.push_back(ins); //向vector加入元素
    //     std::cout << "Do you want to continue(y or n)? " << std::endl;
    //     std::cin >> yn;
    //     if (yn != 'y' && yn != 'Y')
    //         break;
    //     std::cout << "Enter the next word: " << std::endl;
    // }

    // std::cout << "The result after conversion is " << std::endl;
    // for (auto &i : vstring) //使用for遍歷vstring的每個字串,i循環一次就做一次直到循環整個vstring的address
    // {
    //     for (auto &j : i)   //使用for遍歷i遍歷過的每個字串
    //         j = toupper(j); //改大寫
    //     std::cout << i << std::endl;
    // }
    // return 0;
    //---------------------------------------------------------------------------------------------
    // 3.20-1相鄰元素和
    // std::vector<int> vnum;
    // int num;
    // std::cout << "Please enter a set of numbers: " << std::endl;
    // while (std::cin >> num)

    //     vnum.push_back(num);

    // if (vnum.size() == 0)
    // {
    //     std::cout << "Is NULL!!!" << std::endl;
    //     return -1;
    // }
    // std::cout << "The sum of two adjacent numbers is:" << std::endl;

    // for (decltype(vnum.size()) i = 0; i < vnum.size() - 1; i++) //使用decltype取得i屬於甚麼type
    // {
    //     std::cout << vnum[i] + vnum[i + 1] << " "; //求兩項和
    //     if ((i + 2) % 10 == 0)                     //每行輸出5個數字
    //         std::cout << std::endl;
    // }

    // //如果元素是奇數,單獨處理最後一個元素
    // if (vnum.size() % 2 != 0)

    //     std::cout << vnum[vnum.size() - 1];
    // return 0;
    //------------------------------------------------------------------------
    // 3.20-2首尾相加
    // std::vector<int> vnum;
    // int num;
    // std::cout << "Please enter a set of numbers: " << std::endl;
    // while (std::cin >> num)
    //     vnum.push_back(num);
    // if (vnum.size() == 0)
    // {
    //     std::cout << "Is NULL!!!" << std::endl;
    //     return -1;
    // }
    // std::cout << "The sum of the first and last items is:" << std::endl;

    // for (decltype(vnum.size()) i = 0; i < vnum.size() / 2; i++) //使用decltype取得i屬於甚麼type
    // {
    //     std::cout << vnum[i] + vnum[vnum.size() - i - 1] << " "; //求首尾兩項和
    //     if ((i + 1) % 5 == 0)                                    //每行輸出5個數字
    //         std::cout << std::endl;
    // }

    // //如果元素是奇數,單獨處理最後一個元素
    // if (vnum.size() % 2 != 0)

    //     std::cout << vnum[vnum.size() / 2];
    // return 0
    //---------------------------------------------------------------------------------------------

    
}
