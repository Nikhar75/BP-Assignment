function check_palindrome( str )
{
  let j = str.length -1;
  for( let i = 0 ; i < j/2 ;i++)
  {
    let x = str[i] ;//forward character 
    let y = str[j-i];//backward character
    if( x != y)
    {
      // return false if string not match
      return false;
    }
  }
  /// return true if string is palindome
  return true;
    
}

//function that print output is string is palindome
function is_palidrome( str )
{
  // variable that is true ig string is pallindrome
  let ans = check_palindrome(str);
  //condition checking ans is true or not 
  if( ans == true )
  {
    console.log("It is palindrome ");
  }
  else
  {
    console.log("It is not a palindrome");
  }
}
// test variable
let test = "mom";
is_palidrome(test);
