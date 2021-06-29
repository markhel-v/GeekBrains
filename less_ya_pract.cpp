#include <iostream>
#include <string>

using namespace std;

#include <iostream>
#include <string>
 
using namespace std;
 // example yanex practicum
int main() {
    string query;
    getline(cin, query);
 
    string word;
    for (int i = 0; i < query.size(); ++i) {
        if (query[i] == ' ') {
            cout << '[' << word << ']' << endl;
            word = ""s;
        } else {
            word += query[i];
        }
    }
    cout << '[' << word << ']' << endl;
}



/// my example

#include <iostream>
#include <string>

using namespace std;

int main() {
    string query;
    getline(cin, query);
string s;
   
for (size_t i = 0; i < query.size(); ++i) {       
   
    while (query[i] != ' ' && i < query.size()) {
        
        s += query[i++];
    
        
    }
    cout << '[' + s + ']' << endl;
     s = "";
     

    
}
 
}

 
 



Scanner sc = new Scanner(System.in);
 int a = sc.nextInt();
 int b = sc.nextInt();
 int c = sc.nextInt();
 boolean b1 = a > 0;
 boolean b2 = b > 0;
 boolean b3 = c > 0;
 boolean bool = ((!b1 && b2 && b3) || (b1 && !b2 && b3) || (b1 && b2 && !b3));
 System.out.println(bool);








#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	  int q;
	  cin >> q;
	  vector<bool>b;
	  for (int i = 0; i < q; ++i) {
		    string operation_code;
		    cin >> operation_code;
		 
		 // подсчитываем количество элементов в векторе {b}, равных true
		    if (operation_code == "WORRY_COUNT") {
		      int WORRY = 0;
						for( bool worry : b){
						        WORRY += worry;
						    	}
						    
		           	cout << WORRY<<endl;			
		      
		    } else if(operation_code == "COME"  ) { //добавить N спокойных человек в конец очереди
		      int a;
		        cin >> a;
			   b.resize(b.size()+a, false);
						// обработка остальных запросов
		   } else if(operation_code == "QUIET" || operation_code == "WORRY"){
		       int a;
		       cin >> a;
		       
		       b[a] =  operation_code == "WORRY" ;
		  
		  
		  
		   }
		       
		   
		   
	  }
}






//Напишите функцию IsPalindrome(string), которая проверяет, будет ли строка палиндромом.
// Если строка — палиндром, пусть функция печатает 1, а если нет — 0. Пустая строка считается палиндромом.



#include <iostream>
#include <string>

using namespace std;

void IsPalindrome(string s) {
   int res;
  
    res = (s[0] == s[s.length()-1] && s[1] == s[s.length()-2]) || s.empty();
    cout << res << endl;
}

int main() {
   
    IsPalindrome("ara"s);
    IsPalindrome("deer"s);
    return 0;
}

#include <iostream>
#include <string>
 
using namespace std;
 
void IsPalindrome(string s) {
    int answer = 1;
    for (int i = 0; i < s.length() / 2; ++i) {
        if (s[i] != s[s.length() - i - 1]) {
            answer = 0;
        }
    }
    cout << answer << endl;
}
 
int main() {
    IsPalindrome("arcara");
    IsPalindrome("abacdba"s);
    return 0;
}


//вынесите разбиение Строк на СлоBa в отдельную функцию vector<string> SplitIntoWords(string text), 
// которая принимает на вход строку и возвращает вектор слов.


#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<string> SplitIntoWords(string text){
    string word;
    vector<string> words;
    	for (int i = 0; i < text.size(); ++i) {
				if (text[i] == ' ') {
						words.push_back(word);
						word = ""s;
				} else {
						word += text[i];
				}
		}
	words.push_back(word);
    
    return words;
    
    
		}


int main() {
		string query;
		getline(cin, query);
  
  for (string entry : SplitIntoWords(query)){
      cout << entry << endl;
  }
		
		
}



*// Напишите функцию, которая
// называется PalindromeFilter,
// возвращает vector<string>,
//принимает vector<string> words и int min_length ,
 // возвращает из вектора words все строки-палиндромы длиной не меньше min_length  



#include <iostream>
#include <string>
#include <vector>

using namespace std;


// определяет, будет ли строка s палиндромом
bool IsPalindrome(string s) {
   
    for (int i = 0; i < s.length() / 2; ++i) {
        if (s[i] != s[s.length() - i - 1]) {
            return false;
        }
    }
    return true;
}
vector<string> PalindromeFilter(vector<string> words, int min_length) {
    // формирует и возвращает вектор подходящих палиндромов
          vector<string> word;
                for (string entry : words) {
				  // если требуемые условия выполняются, добавляем entry к ответу
                  if(IsPalindrome(entry) && entry.length() >=  min_length){
                     word.push_back(entry);
                  }
                    
                    
                    
               
                }
                
                return word;

}



int main(){
   vector<string> words ;
   words.push_back("abacaba");
   words.push_back("aba");
   words.push_back("abac");
   for ( string str: PalindromeFilter(words,2)) {
       cout << str << endl;
       
   }
    
    
}




//Посчитайте релевантность запроса — размер множества слов, которые входят и в запрос, и в описание.
set<string> MakeSet(vector<string> query_words) {
    set<string> s;
    for (string word : query_words) {
        s.insert(word);
    }
    return s;
}

// up for  example Makeset



#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int CalculateSimilarity(vector<string> first, vector<string> second) {
    set<string>one,two;
 
    one.insert(first.begin(),first.end());
    two.insert(second.begin(),second.end());
  
    int k = 0;
 for(string i:one){
 if(two.count(i)){
  k++;
}
 }  
    return k;
}

vector<string> SplitIntoWords(string text) {
    vector<string> words;
    string word;
    for (int i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += text[i];
        }
    }
    words.push_back(word);
    
    return words;
}

int main() {
    string query, description;

    getline(cin, query);
    getline(cin, description);

    cout << CalculateSimilarity(SplitIntoWords(query), SplitIntoWords(description)) << endl;

    return 0;
}



//У вас есть пары слов. Проверьте, можно ли назвать слова в каждой паре анаграммами.
// Примените map и для всех слов посчитайте, сколько раз в них встречается каждая буква.
// Если для обоих слов пары эти словари равны, значит, слова — анаграммы. 

 #include <iostream>
#include <string>
#include <map>

using namespace std;
bool BuildCharCounters(string first,string second){
    map<char,int>m1,m2;
    for( char entry :first){
        ++m1[entry];
    }
    for( char entry :second){
        ++m2[entry];
    }
    if (m1== m2)
    return true;
    else return false;
    
    
}
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string first_word, second_word;
        cin >> first_word >> second_word;
        if (BuildCharCounters(first_word,second_word)) {
            cout << "YES"s << endl;
        } else {
            cout << "NO"s << endl;
        }
    }

    return 0;
}


#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
 
using namespace std;
 
string ReadLine() {
    string s;
    getline(cin, s);
    return s;
}
 
int ReadLineWithNumber() {
    string s;
    getline(cin, s);
    // функция stoi переводит строку в число типа int
    int result = stoi(s);
    return result;
}
 
vector<string> SplitIntoWords(const string& text) {
    vector<string> words;
    string word;
    for (const char c : text) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    words.push_back(word);
    
    return words;
}
 
set<string> ParseStopWords(const string& text) {
    set<string> stop_words;
    for (const string& word : SplitIntoWords(text)) {
        stop_words.insert(word);
    }
    return stop_words;
}
 
vector<string> SplitIntoWordsNoStop(const string& text, const set<string>& stop_words) {
    vector<string> words;
    // проходим по всем словам из текста и проверяем, что их нет в списке стоп-слов
    for (const string& word : SplitIntoWords(text)) {
        if (stop_words.count(word) == 0) {
            words.push_back(word);
        }
    }
    // вернём результат без стоп-слов
    return words;
}

void AddDocument(map<string, set<int>>& word_to_documents,
                 const set<string>& stop_words,
                 int document_id,
                 const string& document) {
    // пройдём по всем словам (без стоп-слов) и добавим их в базу данных
    for (const string& word : SplitIntoWordsNoStop(document, stop_words)) {
        word_to_documents[word].insert(document_id);
    }
}
 
vector<int> FindDocuments(const map<string, set<int>>& word_to_documents,
                          const set<string>& stop_words,
                          const string& query) {
      
      // напишите тут код функции
            const vector<string> query_words = SplitIntoWordsNoStop(query,stop_words); 
            set<int>id;   
            for(string s: query_words){
            if(word_to_documents.count(s) == 0)  continue;
            
             for(int i: word_to_documents.at(s)) 
             id.insert(i);
		 
            }
  // А лучше так:
        // const auto& local_document_ids = word_to_documents.at(word);
        // document_id.insert(local_document_ids.begin(), local_document_ids.end());                  
            return {id.begin(),id.end()};
                
          
}
 
int main() {
    cout << "Stop words : "s << endl;
    const string stop_words_joined = ReadLine();
    const set<string> stop_words = ParseStopWords(stop_words_joined);
    
    // Read documents
    map<string, set<int>> word_to_documents;
    cout << "Number of documents to add : "s << endl;
    const int document_count = ReadLineWithNumber();
    for (int document_id = 0; document_id < document_count; ++document_id) {
        cout << document_id << " : "s << endl;
        AddDocument(word_to_documents, stop_words, document_id, ReadLine());
    }
    
    cout << "Search request : "s << endl;
    const string query = ReadLine();
    cout << "Search results : "s;
    for (const int document_id : FindDocuments(word_to_documents, stop_words, query)) {
        cout << document_id << ' ';
    }
    cout << endl;
}


//Научите свою поисковую систему считать релевантность возвращённого в ответе документа — то есть количество уникальных слов, пересекающихся с запросом.

//Релевантность нужно возвращать вместе с идентификатором документа как пару из двух целых чисел {document_id, relevance}.

// final060.cpp

#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;


string ReadLine() {
	string s;
	getline(cin, s);
	return s;
}

int ReadLineWithNumber() {
	int result;
	cin >> result;
	ReadLine();
	return result;
}

vector<string> SplitIntoWords(const string& text) {
	vector<string> words;
	string word;
	for (const char c : text) {
		if (c == ' ') {
			words.push_back(word);
			word = "";
		} else {
			word += c;
		}
	}
	words.push_back(word);
	
	return words;
}

set<string> ParseStopWords(const string& text) {
	set<string> stop_words;
	for (const string& word : SplitIntoWords(text)) {
		stop_words.insert(word);
	}
	return stop_words;
}

vector<string> SplitIntoWordsNoStop(const string& text, const set<string>& stop_words) {
	vector<string> words;
	for (const string& word : SplitIntoWords(text)) {
		if (stop_words.count(word) == 0) {
			words.push_back(word);
		}
	}
	return words;
}

void AddDocument(map<string, set<int>>& word_to_documents,
                 const set<string>& stop_words,
                 int document_id,
				 const string& document) {
	for (const string& word : SplitIntoWordsNoStop(document, stop_words)) {
		word_to_documents[word].insert(document_id);
	}
}


vector<pair <int, int>>  FindDocuments(const map<string, set<int>>& word_to_documents,
                          const set<string>& stop_words,
                          const string& query) {
    map<int, int> document_to_relevance;  
     
	const vector<string> query_words = SplitIntoWordsNoStop(query, stop_words);
	 
	for (const string& word : query_words) {
		if (word_to_documents.count(word) == 0) {
			continue;
		}
		for ( int document_id : word_to_documents.at(word)) {
		  ++document_to_relevance[document_id];
		
		}
  

	}
	
		return {document_to_relevance.begin(),document_to_relevance.end()};
}


int main() {
	const string stop_words_joined = ReadLine();
	const set<string> stop_words = ParseStopWords(stop_words_joined);
	
	// Read documents
	map<string, set<int>> word_to_documents ;
	const int document_count = ReadLineWithNumber();
	for (int document_id = 0; document_id < document_count; ++document_id) {
		AddDocument(word_to_documents, stop_words, document_id, ReadLine());
	}

	const string query = ReadLine();
        for (const auto& [document_id, relevance] : FindDocuments(word_to_documents, stop_words, query)) {
            cout << "{ document_id = " << document_id << ", relevance = " << relevance << " }"s << endl;
        }
}


