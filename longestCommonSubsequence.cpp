#include <iostream>
using namespace std;

int solveLCS(string s1, string s2, int i, int j){
   if(s1.length()<=i || s2.length() <= j)
    return 0;
    int ans = 0;
    if(s1[i] == s2[j]){
        ans = 1+solveLCS(s1,s2, i+1, j+1);      
    } else {
      ans = max(solveLCS(s1,s2, i+1, j), solveLCS(s1,s2, i, j+1));
    }
    return ans;
}

int longestCommonSubSequence(string s1, string s2){
  return solveLCS(s1,s2,0, 0);
}
int main(int argc, char* argv[]) 
{

    if(argc !=3){
	cout<<"Argument Size->"<<argc<<endl;    
	cout<<"Two string needs to pass in parameter"<<endl;
	//cout<<"1.->"<<argv[0]<<"2.->"<<argv[1]<<std::endl;
	return 0;
    }	
    string a = argv[1];
    string b = argv[2];
    cout<<"LCS ->"<<longestCommonSubSequence(a,b)<<endl;;
    return 0;
}
