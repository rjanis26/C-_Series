
/* #include<bits/stdc++.h>
using namespace std;

int Is_palindrome(char arr[], int size) {
	int left = 0, right = size-1;
	while(left < right) {
		if(arr[left++] != arr[right--]) {
			return -1;
		}
		 
	}
	return 1;
}

//  bool check_palindrome(char arr[], int size) {
// 	int left = 0, right = size - 1;
// 	while(left < right) {
// 		if(arr[left] != arr[right]) {
// 			return 0;
// 		}
// 		else {
// 			left++;
// 			right--;
// 		}
// 	}
// 	return 1;
// } 

void reverse_stirng(char arr[], int length) {
	int left = 0, right = length -1;
	while(left <= right) {
		swap(arr[left++] , arr[right--]);
	}
}  

int get_length(char arr[]) {
	int count = 0;
	for(int i = 0; arr[i] != '\0'; i++) {
		count++;
	}
	return count;
}

int main()
{	
	char name[20];
	cout << "Enter your name: " ;
	cin.getline(name, 20);
	cout << "Your name is ";
	cout << name << endl;
	cout <<"Length: " << get_length(name) << endl;
	int len = get_length(name);
	reverse_stirng(name,len);
	cout<< name <<endl;

	int result = Is_palindrome(name, len);
	(result ==1) ? cout << "Palindrome or Not: " << "Yes\n" : cout << "Palindrome or Not: " << "No\n";

 	return 0;
} */

// capitalize from string...
/* #include<bits/stdc++.h>
using namespace std;

void capitalize_first_latter(char arr[]) {
	int check = 0;
	int i = 0;
	while(arr[i]) {
		if(check == 0) {
			arr[i] = toupper(arr[i]);
			check = 1;
		}
		else if(isspace(arr[i])) check = 0;
		i++;
	}
	cout << "Processed string: " << arr << endl;
}

int main()
{
	char str[] = "hi i am form codespeedy";
	cout << "Orginal string: " << str << endl;
	capitalize_first_latter(str);

	return 0;
} */

//check palindrome ..
/* #include<bits/stdc++.h>
using namespace std;

string is_palindrome(string str) {
    string new_str = str;
    reverse(new_str.begin(), new_str.end());
    if(new_str == str) return "YES";
    else return "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    getline(cin, str);
    cout << str << endl;    
    int len = str.size();
   cout << is_palindrome(str) << endl;
 

    return 0;
} */

// C++ program to print reverse of a string
/* #include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
void reverse(string str)
{
for (int i=str.length()-1; i>=0; i--)
	cout << str[i];
}

// Driver code
int main(void)
{
	string s = "GeeksforGeeks";
	reverse(s);
	return (0);
}

// reverse string
#include<bits/stdc++.h>
using namespace std;

void reverse_string(string str) {
    for(int i = str.length()-1; i >=0; i--) 
        cout << str[i];
}

int main()
{
    string str;
    cin >> str;
    reverse_string(str);

    return 0;
}
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{ 	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	


	return 0;
}














































