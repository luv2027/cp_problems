 #include<iostream>
  #include<stdio.h>
  #include<algorithm>

  using namespace std;

  int n;
  int a[200];
  int ans=0;

 void greedy(void) {
     int h;
     for(h = 0 ; h < n ; ) {

    if(a[h]==0) {
            if(a[h-1]==1&&a[h+1]==1&&(h+1)<n) {
                 if(a[h+2]==0&&(h+2)<n) {                     a[h+1]=0;                      h=h+2;                      ans++;                      continue;                 }                 a[h-1]=0;                  h=h+1;                   ans++;              }          else {                 h++;           }          }        else {           h++;         }  } }
 int main() {
     int i,j;    scanf("%d",&n);     for( i =  0 ; i < n ; i++) {         scanf("%d",&a[i]);     }    greedy();      printf("%d\n",ans);     return 0; }
