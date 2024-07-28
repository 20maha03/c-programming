#include <stdio.h>


int getSize(char *str)
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}

void findSubArray(char *str, char *sub)
{
    int strLength = getSize(str);
    int subLength = getSize(sub);
    int hashSub[256] = {0}; 
    int hashStr[256] = {0}; 
    int count = 0;
    int left = 0;

    for (int i = 0; i < subLength; i++)
    {
        hashSub[sub[i]]++;
    }

    int requiredMatches = subLength;

    for (int right = 0; right < strLength; right++)
    {
        if (hashSub[str[right]] != 0)
        {
            hashStr[str[right]]++;
            if (hashStr[str[right]] == hashSub[str[right]])
            {
                requiredMatches--;
            }
        }

        while (requiredMatches == 0) { 
            if (right - left + 1 == subLength) {
                for (int i = left; i <= right; i++) {
                    
                    printf("%c", str[i]);
                }
                printf("\n");
            }
            if (hashSub[str[left]] != 0)
            {
                hashStr[str[left]]--;
                if (hashStr[str[left]] < hashSub[str[left]])
                {
                    requiredMatches++;
                }
            }
            left++;
        }
    }
}

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter string:\n");
    scanf("%99[^\n]", str1);
    getchar();
    printf("Enter substring:\n");
    scanf("%99[^\n]", str2);

    findSubArray(str1, str2);

    return 0;
}