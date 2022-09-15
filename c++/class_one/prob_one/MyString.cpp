#include "MyString.hpp"


size_t MyString::find(char c, size_t pos) const {
    auto iter = std::find(s.begin()+pos,s.end(),c);
    return iter-s.begin();
}

size_t MyString::rfind(char c, size_t pos) const {
auto iter = std::find(s.rbegin()+pos,s.rend(),c);
                return iter-s.rbegin();
}

MyString MyString::substr(size_t pos, size_t len) const {
   MyString obj;
   if(len==-1){
       for(size_t i=pos;i<s.size();i++){
           obj.push_back(s[i]);
       }
   }
   else{
       for(size_t i=pos;i<(pos+len);i++){
           obj.push_back(s[i]);
       }
   }
   return obj;
}

size_t MyString::find(const MyString& str, size_t pos) const {
    size_t flag=0,ans=-1;
                 for(size_t i=pos;i<s.size();i++)
                 {
                    if(s[i]==s[0])
                    {
                        ans=i;
                        flag=1;
                        size_t k=i,j;
                        for(j=0;j<str.s.size() && k<s.size();j++)
                        {
                            if(str.s[j]==s[k]){
                                k++;
                            }
                            else{
                                flag=0;break;
                            }
                        }
                        if(flag==1 && j==str.s.size())
                        return ans;
                    }
                 }
    return -1;
}

size_t MyString::rfind(const MyString& str, size_t pos) const {
    size_t ans=-1,flag=0;
                 for(size_t i=pos;i<s.size();i++)
                 {
                    if(s[i]==s[0])
                    {
                        ans=i;
                        flag=1;
                        size_t k=i,j;
                        for(j=0;j<str.s.size() && k<s.size();j++){
                            if(str.s[j]==s[k]){
                                k++;
                            }
                            else{
                                flag=0;break;
                            }
                        }
                        if(flag==1 && j==str.s.size())
                        return (s.size()-ans-1);
                    }
                 }
                return -1;
}

size_t MyString::size(){
    return s.size();
}

bool MyString::empty(){
    if(s.size()==0)
    return true;
    return false;
}

void MyString::push_back(const char c){
    s.push_back(c);
}

void MyString::pop_back(){
    s.pop_back();
}

void MyString::resize(size_t n){
    if(n < s.size()){
        vector<char> vec;
    for(int i=0;i< s.size();i++){
            vec.push_back(s[i]);}
            }
            else{
                for(int i=0;i<(n-s.size());i++)
                {s.push_back('\0');}
            }
}

void MyString::resize(size_t n, char c){
    s.resize(n,c);
}

vector<char> MyString::get_s() const{
    return s;
}

// DON'T MODIFY THIS FUNCTION. This allows you to use cout function.
std::ostream& operator<< (std::ostream& out, const MyString& str) {
    for (size_t i=0, N=str.s.size(); i<N; ++i) { out << str.s[i]; }
    return out;
}
