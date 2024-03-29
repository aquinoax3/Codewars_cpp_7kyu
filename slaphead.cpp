// Being a bald man myself, I know the feeling of needing to keep it clean shaven. Nothing worse that a stray hair waving in the wind.

// You will be given a string(x). Clean shaved head is shown as "-" and stray hairs are shown as "/". Your task is to check the head for stray hairs and get rid of them.

// You should return the original string, but with any stray hairs removed. Keep count ot them though, as there is a second element you need to return:

// 0 hairs --> "Clean!"
// 1 hair --> "Unicorn!"
// 2 hairs --> "Homer!"
// 3-5 hairs --> "Careless!"
// >5 hairs --> "Hobo!"

// So for this head: "------/------" you shoud return:

// ["-------------", "Unicorn"]

#include <string>
#include <utility>

std::pair<std::string, std::string> bald(const std::string& s) {
    std::string hair = "";
    int total = 0;
    
    for(auto letter : s){
        if(letter == '/'){
        total++;
        }
        hair += '-';
    }
    
    return total == 0 ? std::pair(hair, "Clean!") : 
    total == 1 ? std::pair(hair, "Unicorn!") :
    total == 2 ? std::pair(hair, "Homer!") : 
    total >= 3 && total <= 5 ?  std::pair(hair, "Careless!") :  std::pair(hair, "Hobo!");
}