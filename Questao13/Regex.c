#include <stdio.h>
#include <regex.h>

int match(const char *string, const char *pattern) {
    regex_t re;
    if (regcomp(&re, pattern, REG_EXTENDED|REG_NOSUB) != 0) return 0;
    int status = regexec(&re, string, 0, NULL, 0);
    regfree(&re);
    if (status != 0) return 0;
    return 1;
}

int main(void) {
    const char* re = ".s";
    const char* s = "as";
    printf("\\%s\\ casa com \"%s\"? %s\n", re, s, match(s, re) ? "true" : "false");
    s = "mk";
    printf("\\%s\\ casa com \"%s\"? %s\n", re, s, match(s, re) ? "true" : "false");
    s = "mst";
    printf("\\%s\\ casa com \"%s\"? %s\n", re, s, match(s, re) ? "true" : "false");
    re = "..s";
    s = "mas";
    printf("\\%s\\ casa com \"%s\"? %s\n", re, s, match(s, re) ? "true" : "false");

    return 0;
}

