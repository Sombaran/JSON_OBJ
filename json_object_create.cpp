/** Originally created for testing purpose. Made by Sombaran Gupta.
 * For any further query email me @ guptasombaran@yahoo.com
 * Created for Linux environment
 * @return
 */

#include <iostream>
#include <stdio.h>
#include <json-c/json.h>

int main(void) {
char *rec_msg = "{ \"fruit\": \"Apple\", \"size\": \"Large\", \"color\": \"Red\" }";
json_object * obj = json_tokener_parse(rec_msg);
std::cout << json_object_get_string(obj) << std::endl;
json_object * name = json_object_object_get(obj,"bank");
json_object * age = json_object_object_get(obj,"account_type");
json_object * city = json_object_object_get(obj,"card_type");
std::cout << json_object_get_string(obj) << std::endl;
/* Free the JSON pointer */
json_object_put(obj);
return(0);
}

