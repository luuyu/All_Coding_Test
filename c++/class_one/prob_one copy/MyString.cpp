#include "MyString.hpp"


size_t MyString::find(char c, size_t pos) const {
    if(pos > s.size()){
        // 如果pos越界，则返回-1，这里-1会转换成一个最大值
        return -1;
    }
    // 返回一个iter
    auto iter = std::find(s.begin()+pos,s.end(),c);
    // 如果返回最后一个， 那么直接返回-1
    if(iter - (s.begin() + pos) == s.size() - pos)
        return -1;
    else 
        // 如果返回的不是最后一个，那么返回寻找到的下角标
        return iter-s.begin();
}

size_t MyString::rfind(char c, size_t pos) const {
    if(pos > s.size()){
        //如果未传入pos，则将pos令为字符串的长度
        pos = s.size();
    }
    if(s.size() == 0){
        return -1;
    }
    //从下标 pos - 1 开始从右往左遍历每一个字符
    for(int i = pos - 1; i >= 0; i--){
        if(s[i] == c)
            return i;
    }
    return -1;
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

/*size_t MyString::find(const MyString& str, size_t pos) const {
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
}*/

/*size_t MyString::rfind(const MyString& str, size_t pos) const {
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
*/
size_t MyString::find(const MyString& str, size_t pos) const {
    if(pos > s.size()){ //如果越界则直接返回-1
        return -1;
    }
    if(s.size() == 0){
        // 如果母字符串为空，且子字符串也为空直接返回0
        if(str.s.size() == 0)
            return 0;
        // 仅母字符串为空，子字符串不为空则返回-1
        return -1;
    }else if(s.size()!=0 && str.s.size() == 0){
        // 若母字符串不为空，而子字符串为空则返回pos
        return pos;
    }else{
        int index = 0; //设置一个索引变量
        if(pos == 0 ){
            index = 0;
        }else{
            index = pos - 1;
        }
        for(int i =  index; i < s.size(); i++){
            bool flag = true;
            for(int j = 0; j < str.s.size(); j++){
                if(s[i+j] != str.s[j] || (i+j) >= s.size()){
                    flag = false;
                    continue;
                }
            }
            if(flag){
                return i;
            }
        }
        return -1;
    }
    
    
}
size_t MyString::rfind(const MyString& str, size_t pos) const {
    if(pos > s.size()){
        //如果未传入pos，则将pos令为字符串的长度
        pos = s.size();
    }
    if(s.size() == 0){
        // 如果母字符串为空，且子字符串为空 返回0
        if(str.s.size() == 0)
            return 0;
        // 如果母字符串为空，但子字符串不为空返回-1
        return -1;
    }else if(s.size()!= 0 && str.s.size() == 0){
        return pos;
    }
    //从下标 pos - 1 开始从右往左遍历每一个字符
    for(int i = pos - 1; i >= 0; i--){
        bool flag = true;
        //判断从i位置开始以后得每一个字符是否与子字符串对应
        for(int j = 0; j < str.s.size(); j++){
            // 如果有一位对应不上或者长度超出了母字符串的长度就将flag赋为false
            if(s[j + i] != str.s[j] || (j + i) >= s.size())
            { 
                flag = false;
                continue;
            }    
        }
        if(flag){
            // 如果经过所有比对后flag仍为true就说明有与之相对应的子字符串，返回第一个子字符串的首位下标
            return i;
        }
    }
    return -1;
}

/* size_t MyString::size(){
    return s.size();
}*/
size_t MyString::length(){
    return s.size();
}
bool MyString::empty(){
    if(s.size()==0)
        return true;
    else
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
            vec.push_back(s[i]);
        }
    }
    else{
        for(int i=0;i<(n-s.size());i++)
        {
            s.push_back('\0');
        }
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
