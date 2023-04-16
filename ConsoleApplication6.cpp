#include <iostream> // 輸入輸出流庫  
#include <string> // 字串庫  

using namespace std;

int main()
{
    string str; // 定義一個字串變數  
    int count = 1; // 紀錄單字數量的變數初始化為1，因為第一個單字之前沒有空格  
    int arr[26] = { 0 }; // 用於記錄大寫字母出現次數的陣列  
    int arr1[26] = { 0 };// 用於記錄小寫字母出現次數的陣列  
    getline(cin, str); // 從標準輸入讀取一行字串  
    // 遍歷字串中的每一個字元  
    for (int i = 0; i < str.length(); i++)
    {
        // 如果是大寫字母，將對應字母計數陣列中的相應元素加1  
        if (str[i] >= 'A' && str[i] <= 'Z')
            arr[str[i] - 'A']++;
        // 如果是小寫字母，將對應字母計數陣列中的相應元素加1  
        else if (str[i] >= 'a' && str[i] <= 'z')
            arr1[str[i] - 'a']++;
        // 如果是空格，說明當前字元是一個單字的分隔符，單字數量加1  
        if (str[i] == ' ')
            count++;
    }

    // 輸出單字數量  
    cout << count << endl;

    // 遍歷兩個計數陣列，輸出每個字母出現的次數  
    for (int j = 0; j < 26; j++)
    {
        if (arr[j] != 0) // 如果大寫字母計數陣列中第j個元素不為0，說明字母('A'+j)出現過  
            cout << (char)('a' + j) << " : " << arr[j] << endl; // 輸出該字母及其出現次數  
        else if (arr1[j] != 0) // 否則，如果小寫字母計數陣列中第j個元素不為0，說明字母('a'+j)出現過  
            cout << (char)('a' + j) << " : " << arr1[j] << endl; // 輸出該字母及其出現次數  
    }

    return 0; // 程序結束  

}