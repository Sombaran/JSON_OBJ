/** Originally created for testing purpose. Made by Sombaran Gupta.
 * For any further query email me @ guptasombaran@yahoo.com
 * Created for Linux environment
 * @Brief: JSON-C library used to convert json string into object
 * prints value to each key
 * @return
 */

 
#include <iostream>
#include <json-c/json.h>

int main(void) {
const char *rec_msg = "{ \"fruit\": \"Apple\", \"size\": \"Large\", \"color\": \"Red\" }";
json_object * obj = json_tokener_parse(rec_msg);
std::cout << json_object_get_string(obj) << std::endl;
std::cout << json_object_get_string(json_object_object_get(obj,"fruit")) << std::endl;
std::cout << json_object_get_string(json_object_object_get(obj,"size")) << std::endl;
std::cout << json_object_get_string(json_object_object_get(obj,"color")) << std::endl;
std::cout << json_object_get_string(obj) << std::endl;
/* Free the JSON pointer */
json_object_put(obj);
return(0);
}


