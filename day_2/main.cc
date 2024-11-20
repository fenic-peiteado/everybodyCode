#include <bits/stdc++.h>

std::vector<std::string> split(std::string line, char separator) {
  std::vector<std::string> result;
  std::istringstream ss(line);
  std::string token;
  while(std::getline(ss, token,separator)){
    result.push_back(token);
  }
  return result;
}

std::string join_s(std::vector<std::string> aux) {
  std::string result;
  for(auto i : aux){
    result.append(i);
  }
  return result;
}


int main() {
  std::vector<std::string> words;
  std::string line, clean, words_line;
  std::getline(std::cin,line);
  std::getline(std::cin,clean);
  std::getline(std::cin,words_line);
  auto keys = split(line,':');
  keys = split(join_s(std::vector<std::string>(keys.begin()+1,keys.end())),',');
  for (auto i : keys){
    std::cout << i << " ";
  }
  std::cout << "\n";
  int contador = 0;
  for(auto values : keys) {
    auto found = words_line.find(values);
    while( found != std::string::npos ) {
      found = words_line.find(found);
      contador++;
      std::cout << values << "\n";
    }
  }
  
  std::cout << contador << "\n";
  return 0;
}