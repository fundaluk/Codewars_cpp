//Convert boolean values to strings 'Yes' or 'No'.


string bool_to_word(bool value)
{
string word;

	if (value == true)
		  word = "Yes";
	else if (value == false)
		  word = "No";
    
    return  word;

  
}