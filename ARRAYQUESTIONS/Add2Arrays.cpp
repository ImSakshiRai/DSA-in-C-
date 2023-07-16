#include <iostream>
#include <vector>
using namespace std;

vector<int> print(vector<int> a)
{
 for (int i = 0; i < a.size(); i++)
 {
  /* code */
  cout << a[i] << " ";
 }
 return a;
}

vector<int> reverse(vector<int> v)
{
 int s = 0, e = v.size() - 1;
 while (s < e)
 {
  swap(v[s++], v[e--]);
 }
 return v;
}

vector<int> Getsum(vector<int> a, int m, vector<int> b, int n)
{
 vector<int> ans;
 int num1 = 0, num2 = 0;
 for (int i = 0; i < m; i++)
 {
  num1 = ((num1 * 10) + a[i]);
 }

 for (int j = 0; j < n; j++)
 {
  num2 = ((num2 * 10) + b[j]);
 }

 int sum = num1 + num2;

 while (sum != 0)
 {
  ans.push_back(sum % 10);
  sum = sum / 10;
 }
 return reverse(ans);
}

int main()
{
 vector<int> a;
 vector<int> b;
 a.push_back(1);
 a.push_back(2);
 a.push_back(3);
 a.push_back(4);

 b.push_back(6);
 b.push_back(5);

 vector<int> ans = Getsum(a, a.size(), b, b.size());

 cout << "The sum is : ";
 print(ans);
 return 0;
}