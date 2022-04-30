#include "stdio.h"
#include <curl/curl.h>

int main() {
  printf("Checking CURL\n");
  CURL *curl = curl_easy_init();
  if (!curl) {
    printf("Unable to init\n");
    return 1;
  }

  if (curl) {

    CURLcode res;
    curl_easy_setopt(curl, CURLOPT_URL, "https://ramezanpour.net");
    res = curl_easy_perform(curl);

    if (res == CURLE_OK) {
      printf("Download completed... Printing the content.\n");

      char *content;
      res = curl_easy_getinfo(curl, CURLINFO_STRING, content);
      if (res == CURLE_OK && content) {
        printf("Printing the result");
        printf("%s", content);
      }
    }
    curl_easy_cleanup(curl);
  }

  return 0;
}
