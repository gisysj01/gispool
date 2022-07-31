//
//  main.cpp
//  testC
//
//  Created by yangsiji on 2022/4/13.
//

#include <iostream>
#include <string.h>
#include <vector>
#include<queue>
#include <utility>
#include <iostream>
#include <utility>
#include <string>
#include <functional>
using namespace std;

class Obj1 {
public:
  Obj1()
  {
    cout << "Obj1()";
  }
  Obj1(const Obj1&)
  {
    cout << "Obj1(const Obj1&)";
  }
  Obj1(Obj1&&)
  {
    cout << "Obj1(Obj1&&)";
  }
};

class Obj2 {
public:
  Obj2()
  {
    cout << "Obj2()";
  }
  Obj2(const Obj2&)
  {
    cout << "Obj2(const Obj2&)";
  }
  Obj2(Obj2&&) noexcept
  {
    cout << "Obj2(Obj2&&)";
  }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    //return 0;
//    cout<<"main is called"<<endl;
//
//    int CONN = 100;
//    static_assert(sizeof(CONN) <= 4, "the size of CONN object exceeds limit.");
//
//
//    size_t a;
//
    
    
    /*
    int x = 0x11223344;
    char *p= (char *)&x;
    char buf[20]={0};
    sprintf(buf,"%x,%x,%x,%x",p[0],p[1],p[2],p[3]);
     
    printf("%s \n",buf);
    */
    
    /*
    int arr[] = { 1, 2, 3, 4 };
      printf("%d", arr[3] == 3[arr]);
     */
    
    /*
    char sentence[]="This is a sentence with 7 tokens";
        cout << "The string to be tokenized is:\n" << sentence << "\n\nThe tokens are:\n\n";
        char *tokenPtr=strtok(sentence," ");
        while(tokenPtr!=NULL)　{
            cout<<tokenPtr<<endl;
            tokenPtr=strtok(NULL," ");
        }
     */
    
//    char s[] = "abcdefg_hijklmn_opqrst";
//        char *t, *de = "_";
//
//        while (s && s != '\0') {
//            t = strsep(&s, de);
//            printk("%s\n", t);
//        }
    
//    char c = 'a';
//      printf("%d", isalnum(c));  // 1.
//      printf("%d", isalpha(c));  // 1.
//      printf("%d", isblank(c));  // 0.
//      printf("%d", isdigit(c));  // 0.
//      printf("%c", toupper(c));  // 'A'.
//
//
//    float  n = atof("444.22");
//    char* chError;
//    int n1 = strtof("555.22", &chError);
    
    /*
    vector<Obj1> v1;
      v1.reserve(2);
      v1.emplace_back();
      v1.emplace_back();
      v1.emplace_back(Obj1());
      //v1.push_back(Obj1());

      vector<Obj2> v2;
      v2.reserve(2);
      v2.emplace_back();
      v2.emplace_back();
      v2.emplace_back();
     */
    
//    priority_queue<pair,vector>,greater>> q;
//     q.push({1, 1});
//     q.push({2, 2});
//     q.push({0, 3});
//     q.push({9, 4});
//     while (!q.empty()) {
//       cout << q.top() << endl;
//       q.pop();
//     }
    
    int i = 0;
    int arr[3] = {0};
    for(; i<=3; i++){
        arr[i] = 0;
        printf("hello world\n");
    }
    
    return EXIT_SUCCESS;
}
