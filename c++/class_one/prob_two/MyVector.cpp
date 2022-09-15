#include "MyVector.hpp"

void MyVector::push_back(int n){
    v_.push_back(n);
}

void MyVector::push_back(const MyVector& other){
    int len = other.v_.size();
    for(int i = 0; i < len; i++){
        v_.push_back(other.v_[i]);
    }
}

void MyVector::pop_back(){
    v_.pop_back();
}

void MyVector::clear(){
    //v_.clear();
    while (v_.size() != 0)
    {
        v_.pop_back();
    }
    
}

bool MyVector::isEqual(const MyVector& other){
    if(v_.size() == other.v_.size()){
        int len = v_.size();
        for(int i = 0; i < len; i++){
            if(v_[i] != other.v_[i])
                return false;
        }
        return true;
    }
    else
        return false;
}

size_t MyVector::size() const{
    return v_.size();
}

int MyVector::dot(const MyVector& other) const{
    int len = v_.size();
    int dot_result = 0;

    for(int i = 0; i < len; i++){
        dot_result += v_[i] * other.v_[i];
        //cout << dot_result<<endl;
    }
    return dot_result;
}

int MyVector::alternating_sum() const{
    int len = v_.size();
    int sum = 0;
    for(int i = 0; i < len; i++){
        if(i % 2 == 0){
            sum += v_[i];
        }
        else
            sum -= v_[i];
    }
    return sum;
}

void MyVector::reverse(){
    std::reverse(v_.begin(), v_.end());
}

void MyVector::remove_duplicates(){
    //std::sort(v_.begin(), v_.end());
    //v_.erase(unique(v_.begin(), v_.end()), v_.end());

    vector<int> temp;
    for(auto iter = v_.begin(); iter != v_.end(); iter++)
    {
        auto iter1 = find(v_.begin(), iter, *iter);
        if(iter == iter1) 
        {
            temp.push_back(*iter);
        }        
    }
    v_.clear();
    for(int i = 0 ; i < temp.size() ; i++){
        v_.push_back(temp[i]);
    }

}

void MyVector::sort(){
    //std::sort(v_.begin(), v_.end());
    for(int i = 0; i < v_.size(); i++){
        for(int j = i; j < v_.size(); j++){
            if(v_[j] < v_[i]){
                int temp = v_[j];
                v_[j] = v_[i];
                v_[i] = temp;
            }
        }
    }
}



// --------------------------------------------
// DO NOT MODIFY BELOW
vector<int> MyVector::get_v() const{
    return v_;
}

void MyVector::print() const{
    const size_t N = v_.size();

    if(N == 0){
        cout << "{}";
        return;
    }

    string s = "";
    
    for(size_t i=0; i<N; ++i){
        s += to_string(v_[i]) + ", ";
    }
    s.pop_back();
    s.pop_back();
    s = "{" + s + "}";
    cout << s;
}
